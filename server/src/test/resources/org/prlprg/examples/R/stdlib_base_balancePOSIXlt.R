#? stdlib
`balancePOSIXlt` <- function (x, fill.only = FALSE, classed = TRUE) 
.Internal(balancePOSIXlt(x, fill.only, classed))

# Examples
## FIXME: this should also work for regular (non-UTC) time zones.
TZ <-"UTC"
# Could be
# d1 <- as.POSIXlt("2000-01-02 3:45", tz = TZ)
# on systems (almost all) which have tm_zone.
oldTZ <- Sys.getenv('TZ', unset = "unset")
Sys.setenv(TZ = "UTC")
d1 <- as.POSIXlt("2000-01-02 3:45")
d1$min <- d1$min + (0:16)*20L
(f1 <- format(d1))
str(unclass(d1))      # only $min is of length > 1
df <- balancePOSIXlt(d1, fill.only = TRUE) # a "POSIXlt" object
str(unclass(df))      # all of length 17; 'min' unchanged
db <- balancePOSIXlt(d1, classed = FALSE)  # a list
stopifnot(identical(
    unCfillPOSIXlt(d1),
    balancePOSIXlt(d1, fill.only = TRUE, classed = FALSE)))
str(db) # of length 17 *and* in range

stopifnot(exprs = {
    identical(f1, format(df))
    all.equal(as.POSIXct(d1), as.POSIXct(df))
    identical(f1, format(.POSIXlt(db)))
    identical(as.POSIXct(d1, TZ), as.POSIXct(.POSIXlt(db, TZ)))
})
if(oldTZ == "unset") Sys.unsetenv('TZ') else Sys.setenv(TZ = oldTZ)

