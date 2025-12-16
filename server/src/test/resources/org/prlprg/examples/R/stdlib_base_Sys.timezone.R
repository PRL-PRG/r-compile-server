#? stdlib
`Sys.timezone` <- function (location = TRUE) 
{
    if (!location) 
        .Deprecated(msg = "Sys.timezone(location = FALSE) is defunct and ignored")
    if (!is.na(tz <- get0(".sys.timezone", baseenv(), mode = "character", 
        inherits = FALSE, ifnotfound = NA_character_))) 
        return(tz)
    cacheIt <- function(tz) {
        unlockBinding(".sys.timezone", baseenv())
        assign(".sys.timezone", tz, baseenv())
        lockBinding(".sys.timezone", baseenv())
    }
    tz <- Sys.getenv("TZ")
    if (nzchar(tz)) 
        return(tz)
    if (.Platform$OS.type == "windows") 
        return(.Internal(tzone_name()))
    if (!nzchar(Sys.getenv("TZDIR")) && grepl("darwin", R.Version()$os) && 
        dir.exists(zp <- file.path(R.home("share"), "zoneinfo"))) {
        veri <- tryCatch(readLines(file.path(zp, "VERSION")), 
            error = function(e) e)
        vers <- tryCatch(readLines("/var/db/timezone/zoneinfo/+VERSION"), 
            error = function(e) e)
        if (!inherits(veri, "error") && !inherits(vers, "error") && 
            vers != veri) {
            yri <- substr(veri, 1L, 4L)
            sufi <- substr(veri, 5, 5)
            yrs <- substr(vers, 1L, 4L)
            sufs <- substr(vers, 5, 5)
            if (yrs > yri || (yrs == yri && sufs > sufi)) 
                Sys.setenv(TZDIR = "macOS")
        }
    }
    if (Sys.getenv("TZDIR") == "macOS" && grepl("darwin", R.Version()$os)) 
        Sys.setenv(TZDIR = "/var/db/timezone/zoneinfo")
    tzdir <- Sys.getenv("TZDIR")
    if (nzchar(tzdir) && !dir.exists(tzdir)) 
        tzdir <- ""
    if (!nzchar(tzdir)) {
        if (dir.exists(tzdir <- "/usr/share/zoneinfo") || dir.exists(tzdir <- "/share/zoneinfo") || 
            dir.exists(tzdir <- "/usr/share/lib/zoneinfo") || 
            dir.exists(tzdir <- "/usr/lib/zoneinfo") || dir.exists(tzdir <- "/usr/local/etc/zoneinfo") || 
            dir.exists(tzdir <- "/etc/zoneinfo") || dir.exists(tzdir <- "/usr/etc/zoneinfo")) {
        }
        else tzdir <- ""
    }
    if (dir.exists("/run/systemd/system") && nzchar(Sys.which("timedatectl"))) {
        inf <- system("timedatectl", intern = TRUE)
        lines <- grep("Time zone: ", inf)
        if (length(lines)) {
            tz <- sub(" .*", "", sub(" *Time zone: ", "", inf[lines[1L]]))
            if (nzchar(tzdir)) {
                if (file.exists(file.path(tzdir, tz))) {
                  cacheIt(tz)
                  return(tz)
                }
                else warning(sprintf("%s indicates the non-existent timezone name %s", 
                  sQuote("timedatectl"), sQuote(tz)), call. = FALSE, 
                  immediate. = TRUE, domain = NA)
            }
            else {
                cacheIt(tz)
                return(tz)
            }
        }
    }
    if (grepl("linux", R.Version()$platform, ignore.case = TRUE) && 
        file.exists("/etc/timezone")) {
        tz0 <- try(readLines("/etc/timezone"))
        if (!inherits(tz0, "try-error") && length(tz0) == 1L) {
            tz <- trimws(tz0)
            if (nzchar(tzdir)) {
                if (file.exists(file.path(tzdir, tz))) {
                  cacheIt(tz)
                  return(tz)
                }
                else warning(sprintf("%s indicates the non-existent timezone name %s", 
                  sQuote("/etc/timezone"), sQuote(tz)), call. = FALSE, 
                  immediate. = TRUE, domain = NA)
            }
            else {
                cacheIt(tz)
                return(tz)
            }
        }
    }
    if ((file.exists(lt0 <- "/etc/localtime") || file.exists(lt0 <- "/usr/local/etc/localtime") || 
        file.exists(lt0 <- "/usr/local/etc/zoneinfo/localtime") || 
        file.exists(lt0 <- "/var/db/timezone/localtime")) && 
        !is.na(lt <- Sys.readlink(lt0)) && nzchar(lt)) {
        tz <- NA_character_
        if ((nzchar(tzdir) && grepl(pat <- paste0("^", tzdir, 
            "/"), lt)) || grepl(pat <- "^/usr/share/zoneinfo.default/", 
            lt)) 
            tz <- sub(pat, "", lt)
        else if (grepl(pat <- ".*/zoneinfo/(.*)", lt)) 
            tz <- sub(pat, "\\1", lt)
        if (!is.na(tz)) {
            cacheIt(tz)
            return(tz)
        }
        else message("unable to deduce timezone name from ", 
            sQuote(lt))
    }
    if (nzchar(tzdir) && (is.na(lt <- Sys.readlink(lt0)) || !nzchar(lt))) {
        warning(sprintf("Your system is mis-configured: %s is not a symlink", 
            sQuote(lt0)), call. = FALSE, immediate. = TRUE, domain = NA)
        if (nzchar(Sys.which("cmp"))) {
            known <- dir(tzdir, recursive = TRUE)
            for (tz in known) {
                status <- system2("cmp", c("-s", shQuote(lt0), 
                  shQuote(file.path(tzdir, tz))))
                if (status == 0L) {
                  cacheIt(tz)
                  warning(sprintf("It is strongly recommended to set envionment variable TZ to %s (or equivalent)", 
                    sQuote(tz)), call. = FALSE, immediate. = TRUE, 
                    domain = NA)
                  return(tz)
                }
            }
            warning(sprintf("%s is not identical to any known timezone file", 
                sQuote(lt0)), call. = FALSE, immediate. = TRUE, 
                domain = NA)
        }
    }
    NA_character_
}
