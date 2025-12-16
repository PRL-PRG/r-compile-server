#? stdlib
`OlsonNames` <- function (tzdir = NULL) 
{
    if (is.null(tzdir)) {
        if (.Platform$OS.type == "windows") 
            tzdir <- Sys.getenv("TZDIR", file.path(R.home("share"), 
                "zoneinfo"))
        else {
            if (Sys.getenv("TZDIR") == "internal") 
                tzdir <- file.path(R.home("share"), "zoneinfo")
            else if (grepl("darwin", R.Version()$os) && Sys.getenv("TZDIR") == 
                "macOS") {
                tzdir <- "/var/db/timezone/zoneinfo"
            }
            else {
                tzdirs <- c(Sys.getenv("TZDIR"), file.path(R.home("share"), 
                  "zoneinfo"), "/usr/share/zoneinfo", "/share/zoneinfo", 
                  "/usr/share/lib/zoneinfo", "/usr/lib/zoneinfo", 
                  "/usr/local/etc/zoneinfo", "/etc/zoneinfo", 
                  "/usr/etc/zoneinfo")
                tzdirs <- tzdirs[file.exists(tzdirs)]
                if (!length(tzdirs)) {
                  warning("no Olson database found")
                  return(character())
                }
                else tzdir <- tzdirs[1L]
            }
        }
    }
    else if (!dir.exists(tzdir)) 
        stop(sprintf("%s is not a directory", sQuote(tzdir)), 
            domain = NA)
    x <- list.files(tzdir, recursive = TRUE)
    ver <- if (file.exists(vf <- file.path(tzdir, "VERSION"))) 
        readLines(vf, warn = FALSE)
    else if (file.exists(vf <- file.path(tzdir, "+VERSION"))) 
        readLines(vf, warn = FALSE)
    else if (file.exists(vf <- file.path(tzdir, "tzdata.zi"))) {
        l <- readLines(vf, n = 1L)
        patt <- "^# version "
        if (grepl(patt, l)) 
            sub(patt, "", l)
        else NULL
    }
    x <- setdiff(x, "VERSION")
    ans <- grep("^[ABCDEFGHIJKLMNOPQRSTUVWXYZ]", x, value = TRUE)
    if (!is.null(ver)) 
        attr(ans, "Version") <- ver
    ans
}
