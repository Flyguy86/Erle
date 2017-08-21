#!/bin/sh -x

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
    DESTDIR_ARG="--root=$DESTDIR"
fi

cd "/home/erle/spider_ws/src/xacro"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
/usr/bin/env \
    PYTHONPATH="/home/erle/spider_ws/install_isolated/lib/python2.7/dist-packages:/home/erle/spider_ws/build_isolated/xacro/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/erle/spider_ws/build_isolated/xacro" \
    "/usr/bin/python" \
    "/home/erle/spider_ws/src/xacro/setup.py" \
    build --build-base "/home/erle/spider_ws/build_isolated/xacro" \
    install \
    $DESTDIR_ARG \
    --install-layout=deb --prefix="/home/erle/spider_ws/install_isolated" --install-scripts="/home/erle/spider_ws/install_isolated/bin"
