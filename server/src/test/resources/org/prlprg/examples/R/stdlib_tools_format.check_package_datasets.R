#? stdlib
`format.check_package_datasets` <- function (x, ...) 
{
    iconv0 <- function(x, ...) paste0("'", iconv(x, ...), "'")
    suppress_notes <- config_val_to_logical(Sys.getenv("_R_CHECK_PACKAGE_DATASETS_SUPPRESS_NOTES_", 
        "FALSE"))
    c(character(), if ((n <- x$latin1) && !suppress_notes) {
        sprintf(ngettext(n, "Note: found %d marked Latin-1 string", 
            "Note: found %d marked Latin-1 strings"), n)
    }, if ((n <- x$utf8) && !suppress_notes) {
        sprintf(ngettext(n, "Note: found %d marked UTF-8 string", 
            "Note: found %d marked UTF-8 strings"), n)
    }, if ((n <- x$bytes) && !suppress_notes) {
        sprintf(ngettext(n, "Note: found %d string marked as \"bytes\"", 
            "Note: found %d strings marked as \"bytes\""), n)
    }, if (nr <- nrow(x$unknown)) {
        msg <- ngettext(nr, "Warning: found non-ASCII string", 
            "Warning: found non-ASCII strings", domain = NA)
        c(msg, paste0(iconv0(x$unknown[, 1L], "", "ASCII", sub = "byte"), 
            " in object '", x$unknown[, 2L], "'"))
    })
}
