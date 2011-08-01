if [ ! -e /mnt/storage/swap ]
then
    echo "Making 256M swapfile"
    dd if=/dev/zero of=/mnt/storage/swap bs=1M count=256
    mkswap /mnt/storage/swap
fi
swapon /mnt/storage/swap

