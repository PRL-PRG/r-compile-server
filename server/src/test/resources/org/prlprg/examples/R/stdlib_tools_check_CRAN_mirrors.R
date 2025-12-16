#? stdlib
`check_CRAN_mirrors` <- function (mirrors = NULL, verbose = FALSE) 
{
    retry_upon_error <- function(expr, n = 3L) {
        i <- 1L
        repeat {
            y <- tryCatch(expr, error = identity)
            if (!inherits(y, "error") || (i >= n)) 
                break
            i <- i + 1L
        }
        y
    }
    read_package_db <- function(baseurl) {
        path <- sprintf("%ssrc/contrib/PACKAGES.gz", baseurl)
        db <- retry_upon_error({
            con <- gzcon(url(path, "rb"))
            on.exit(close(con))
            readLines(con)
        })
        if (inherits(db, "error")) {
            msg <- sprintf("Reading %s failed with message: %s", 
                path, conditionMessage(db))
            return(simpleError(msg))
        }
        db
    }
    read_timestamp <- function(baseurl, path) {
        path <- sprintf("%s%s", baseurl, path)
        ts <- retry_upon_error(readLines(path))
        if (inherits(ts, "error")) {
            msg <- sprintf("Reading %s failed with message: %s", 
                path, conditionMessage(ts))
            return(simpleError(msg))
        }
        as.POSIXct(as.numeric(ts), origin = "1970-01-01")
    }
    if_ok <- function(u, v) if (inherits(u, "error")) 
        u
    else v
    check_mirror <- function(mirror) {
        mirror_packages <- read_package_db(mirror)
        mirror_ts1 <- read_timestamp(mirror, path_ts1)
        mirror_ts2 <- read_timestamp(mirror, path_ts2)
        mirror_ts3 <- read_timestamp(mirror, path_ts3)
        list(PACKAGES = if_ok(mirror_packages, c(Delta_master_mirror = sprintf("%d/%d", 
            length(setdiff(master_packages, mirror_packages)), 
            length(master_packages)), Delta_mirror_master = sprintf("%d/%d", 
            length(setdiff(mirror_packages, master_packages)), 
            length(mirror_packages)))), TIME = if_ok(mirror_ts1, 
            difftime(master_ts1, mirror_ts1)), `TIME_r-release` = if_ok(mirror_ts2, 
            difftime(master_ts2, mirror_ts2)), `TIME_r-old-release` = if_ok(mirror_ts3, 
            difftime(master_ts3, mirror_ts3)))
    }
    master <- "https://CRAN.R-project.org/"
    path_ts1 <- "TIME"
    path_ts2 <- "bin/windows/contrib/r-release/TIME_r-release"
    path_ts3 <- "bin/windows/contrib/r-old-release/TIME_r-old-release"
    master_packages <- read_package_db(master)
    master_ts1 <- read_timestamp(master, path_ts1)
    master_ts2 <- read_timestamp(master, path_ts2)
    master_ts3 <- read_timestamp(master, path_ts3)
    if (is.null(mirrors)) {
        mirrors <- as.character(utils::getCRANmirrors(all = TRUE)$URL)
    }
    results <- lapply(mirrors, function(m) {
        if (verbose) 
            message(sprintf("Checking %s", m))
        suppressWarnings(tryCatch(check_mirror(m), error = identity))
    })
    names(results) <- mirrors
    results
}
