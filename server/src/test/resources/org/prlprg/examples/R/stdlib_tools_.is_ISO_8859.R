#? stdlib
`.is_ISO_8859` <- function (x) 
{
    raw_ub <- as.raw(127)
    raw_lb <- as.raw(160)
    vapply(as.character(x), function(txt) {
        raw <- charToRaw(txt)
        all(raw <= raw_ub | raw >= raw_lb)
    }, NA)
}
