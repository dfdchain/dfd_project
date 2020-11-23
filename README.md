# !!! Deprecated !!!
# How to build dfd_project in Ubuntu 16.04


### Install dependencies

```
sudo apt-get update
sudo apt-get install build-essential cmake git libboost-dev libboost-all-dev libncurses5-dev libreadline-dev autoconf
```


### Fetch the dfd project and some third dependencies code

```
git clone https://github.com/dfdchain/dfd_project
cd dfd_project
git submodule update --init --recursive
```

### Build third dependencies

* Build miniupnpc
```
cd miniupnp/miniupnpc/
cmake .
make
```

* Build leveldb
```
cd leveldb
chmod a+x ./build_detect_platform
make
```

* Build openssl
```
cd openssl
chmod a+x ./config
./config
make
```

* Build fc
```
export OPENSSL_ROOT_DIR=<absolute path of openssl>
cd fc
cmake .
chmod a+x /root/dfd_project/fc/vendor/secp256k1-zkp/autogen.sh
make
```

### Build DFD
```
cd dfd
cmake .
make
```


# WiKi

https://github.com/dfdchain/dfd_project/wiki/
