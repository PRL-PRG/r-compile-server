#? stdlib
`.read_description` <- function (dfile, keep.white = .keep_white_description_fields) 
{
    if (!file_test("-f", dfile)) 
        stop(gettextf("file '%s' does not exist", dfile), domain = NA)
    out <- tryCatch(read.dcf(dfile, keep.white = keep.white), 
        error = function(e) stop(gettextf("file '%s' is not in valid DCF format", 
            dfile), domain = NA, call. = FALSE))
    if (nrow(out) != 1L) 
        stop("contains a blank line", call. = FALSE)
    out <- out[1L, ]
    if (!is.na(encoding <- out["Encoding"])) {
        if (encoding == "UTF-8") {
            Encoding(out) <- "UTF-8"
            ind <- validUTF8(out)
            if (!all(ind)) {
                pos <- which(!ind)
                out[pos] <- iconv(out[pos], "UTF-8", "UTF-8", 
                  sub = "byte")
            }
        }
        else if (encoding == "latin1") 
            Encoding(out) <- "latin1"
        else out <- iconv(out, encoding, "", sub = "byte")
    }
    out
}
