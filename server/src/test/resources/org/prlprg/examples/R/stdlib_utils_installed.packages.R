#? stdlib
`installed.packages` <- function (lib.loc = NULL, priority = NULL, noCache = FALSE, fields = NULL, 
    subarch = .Platform$r_arch, ...) 
{
    if (is.null(lib.loc)) 
        lib.loc <- .libPaths()
    if (!is.null(priority)) {
        if (!is.character(priority)) 
            stop("'priority' must be character or NULL")
        if (any(b <- priority %in% "high")) 
            priority <- c(priority[!b], "recommended", "base")
    }
    fields <- .instPkgFields(fields)
    retval <- matrix(character(), 0L, 2L + length(fields))
    for (lib in lib.loc) {
        if (noCache) {
            ret0 <- .readPkgDesc(lib, fields)
            if (length(ret0)) 
                retval <- rbind(retval, ret0, deparse.level = 0L)
        }
        else {
            base <- paste(c(lib, fields), collapse = ",")
            enc <- sprintf("%d_%s", nchar(base), .Call(C_crc64, 
                base))
            dest <- file.path(tempdir(), paste0("libloc_", enc, 
                ".rds"))
            test <- file.exists(dest) && file.mtime(dest) > file.mtime(lib) && 
                (val <- readRDS(dest))$base == base
            if (isTRUE(as.vector(test))) 
                retval <- rbind(retval, val$value)
            else {
                ret0 <- .readPkgDesc(lib, fields)
                if (length(ret0)) {
                  retval <- rbind(retval, ret0, deparse.level = 0L)
                  saveRDS(list(base = base, value = ret0), dest)
                }
                else unlink(dest)
            }
        }
    }
    .fixupPkgMat(retval, fields, priority, subarch)
}

# Examples
## confine search to .Library for speed
str(ip <- installed.packages(.Library, priority = "high"))
ip[, c(1,3:5)]
plic <- installed.packages(.Library, priority = "high", fields = "License")
## what licenses are there:
table( plic[, "License"] )

## Recommended setup (by many pros):
## Keep packages that come with R (priority="high") and all others separate!
## Consequently, .Library, R's "system" library, shouldn't have any
## non-"high"-priority packages :
pSys <- installed.packages(.Library, priority = NA_character_)
length(pSys) == 0 # TRUE under such a setup

