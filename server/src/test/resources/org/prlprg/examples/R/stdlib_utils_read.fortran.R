#? stdlib
`read.fortran` <- function (file, format, ..., as.is = TRUE, colClasses = NA) 
{
    processFormat <- function(format) {
        format <- toupper(format)
        template <- "^([0-9]*)([FXAI])([0-9]*)\\.?([0-9]*)"
        reps <- as.numeric(sub(template, "\\1", format))
        types <- sub(template, "\\2", format)
        lengths <- as.numeric(sub(template, "\\3", format))
        decimals <- as.numeric(sub(template, "\\4", format))
        reps[is.na(reps)] <- 1L
        lengths[is.na(lengths) & types == "X"] <- 1L
        charskip <- types == "X"
        lengths[charskip] <- reps[charskip] * lengths[charskip]
        reps[charskip] <- 1
        if (anyNA(lengths)) 
            stop("missing lengths for some fields")
        lengths <- rep.int(lengths, reps)
        types <- rep.int(types, reps)
        decimals <- rep.int(decimals, reps)
        types <- match(types, c("F", "D", "X", "A", "I"))
        if (any(!is.na(decimals) & types > 2L)) 
            stop("invalid format")
        colClasses <- c("numeric", "numeric", NA, if (as.is) "character" else NA, 
            "integer")[types]
        colClasses <- colClasses[!(types == 3L)]
        decimals <- decimals[!(types == 3L)]
        lengths[types == 3] <- -lengths[types == 3L]
        list(lengths, colClasses, decimals)
    }
    if (is.list(format)) {
        ff <- lapply(format, processFormat)
        widths <- lapply(ff, `[[`, 1L)
        if (is.na(colClasses)) 
            colClasses <- do.call(c, lapply(ff, `[[`, 2L))
        decimals <- do.call(c, lapply(ff, `[[`, 3L))
    }
    else {
        ff <- processFormat(format)
        widths <- ff[[1L]]
        if (is.na(colClasses)) 
            colClasses <- ff[[2L]]
        decimals <- ff[[3L]]
    }
    rval <- read.fwf(file, widths = widths, ..., colClasses = colClasses)
    for (i in which(!is.na(decimals))) rval[, i] <- rval[, i] * 
        (10^-decimals[i])
    rval
}

# Examples
ff <- tempfile()
cat(file = ff, "123456", "987654", sep = "\n")
read.fortran(ff, c("F2.1","F2.0","I2"))
read.fortran(ff, c("2F1.0","2X","2A1"))
unlink(ff)
cat(file = ff, "123456AB", "987654CD", sep = "\n")
read.fortran(ff, list(c("2F3.1","A2"), c("3I2","2X")))
unlink(ff)
# Note that the first number is read differently than Fortran would
# read it:
cat(file = ff, "12.3456", "1234567", sep = "\n")
read.fortran(ff, "F7.4")
unlink(ff)

