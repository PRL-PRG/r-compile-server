#? stdlib
`extendDateTimeFormat` <- function (x, z) 
{
    if (length(z) > 1L) {
        formats <- vapply(z, function(zz) extendDateTimeFormat(x, 
            zz), "")
        return(formats[which.max(nchar(formats))])
    }
    format <- attr(grDevices:::prettyDate(x), "format")
    formatparts <- gsub("%", "", strsplit(format, " |:|-")[[1]])
    chz <- format(z, "%Y-%m-%d %H:%M:%OS6")
    chz <- as.numeric(strsplit(chz, "-| |:|\\.")[[1]])
    default <- c(1, 1, 1, 0, 0, 0, 0)
    names(chz) <- names(default) <- c("Y", if ("m" %in% formatparts) "m" else "b", 
        "d", "H", "M", "S", "OS6")
    if (any(w <- names(chz) %in% formatparts)) {
        if ((L <- max(which(w)) + 1) <= length(chz)) {
            add <- chz[L:length(chz)]
            if (chz[2] > default[2]) {
                if ("b" %in% names(add)) 
                  format <- paste(format, "%b")
                if ("m" %in% names(add)) 
                  format <- paste(format, "-%m")
            }
            if (chz[3] > default[3] && "d" %in% names(add)) {
                if ("Y" %in% formatparts & "b" %in% formatparts) 
                  format <- paste("%d", format)
                if ("Y" %in% formatparts & "m" %in% formatparts) 
                  format <- paste0(format, "-%d")
                if (!"Y" %in% formatparts) 
                  format <- paste0(format, if ("m" %in% formatparts) 
                    "-%d"
                  else " %d")
            }
            add <- add[add > 0L]
            if (length(add) && any(c("H", "M", "S", "OS6") %in% 
                names(add))) {
                if (!all(c("H", "M") %in% formatparts)) 
                  format <- paste(format, "%H:%M")
                if ("S" %in% names(add) & !"OS6" %in% names(add)) 
                  format <- paste0(format, ":%S")
                if ("OS6" %in% names(add)) 
                  format <- gsub(":%S", "", paste0(format, ":%OS6"))
            }
        }
    }
    format
}
