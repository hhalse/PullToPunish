#!/bin/sh
# This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.23.4/Targets/CPlusPlus/Android/run.sh'.
# WARNING: Changes might be lost if you edit this file directly.
set -e
cd "`dirname "$0"`"

case $1 in
debug)
    echo "Opening Android Studio"
    open -a"Android Studio" "PullToReload"
    exit $?
    ;;
esac

/Applications/Fuse.app/Contents/Mono/bin/mono /Applications/Fuse.app/Contents/uno.exe launch-apk "PullToReload.apk" \
    --package=com.PullToReload \
    --activity=PullToReload \
    --sym-dir="PullToReload/src/main/.uno" \
    "$@"
