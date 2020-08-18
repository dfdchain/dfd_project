#pragma once

#define DFD_WALLET_VERSION                                  uint32_t( 110 )

#define DFD_WALLET_MIN_PASSWORD_LENGTH                      8
#define DFD_WALLET_MIN_BRAINKEY_LENGTH                      32

#define DFD_WALLET_DEFAULT_UNLOCK_TIME_SEC                  ( 60 * 60 )

#define DFD_WALLET_DEFAULT_TRANSACTION_FEE                  (int64_t(1000)) // 

#define DFD_WALLET_DEFAULT_TRANSACTION_EXPIRATION_SEC       ( 60 * 60 )

#define WALLET_DEFAULT_MARKET_TRANSACTION_EXPIRATION_SEC    ( 60 * 10 )
