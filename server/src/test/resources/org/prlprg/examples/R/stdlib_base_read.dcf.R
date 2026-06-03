#? stdlib
`read.dcf` <- function (file, fields = NULL, all = FALSE, keep.white = NULL) 
{
    if (is.character(file)) {
        file <- gzfile(file)
        on.exit(close(file))
    }
    if (!inherits(file, "connection")) 
        stop("'file' must be a character string or connection")
    if (!all) 
        return(.Internal(readDCF(file, fields, keep.white)))
    .assemble_things_into_a_data_frame <- function(tags, vals, 
        nums) {
        tf <- factor(tags, levels = unique(tags))
        cnts <- table(nums, tf)
        out <- array(NA_character_, dim = dim(cnts), dimnames = list(NULL, 
            levels(tf)))
        if (all(cnts <= 1L)) {
            out[cbind(nums, tf)] <- vals
            out <- as.data.frame(out, optional = TRUE, stringsAsFactors = FALSE)
        }
        else {
            levs <- colSums(cnts > 1L) == 0L
            if (any(levs)) {
                inds <- tf %in% levels(tf)[levs]
                out[cbind(nums[inds], tf[inds])] <- vals[inds]
            }
            out <- as.data.frame(out, optional = TRUE, stringsAsFactors = FALSE)
            for (l in levels(tf)[!levs]) {
                out[[l]] <- rep.int(list(NA_character_), nrow(cnts))
                i <- tf == l
                out[[l]][unique(nums[i])] <- split(vals[i], nums[i])
            }
        }
        out
    }
    ascii_blank <- " \t"
    ascii_space <- " \f\n\r\t\v"
    lines <- readLines(file, skipNul = TRUE, encoding = "bytes")
    ind <- grep(paste0("^[^", ascii_blank, "][^:]*$"), lines)
    if (length(ind)) {
        lines <- substr(lines[ind], 1L, 0.7 * getOption("width"))
        stop(gettextf("Invalid DCF format.\nRegular lines must have a tag.\nOffending lines start with:\n%s", 
            paste0("  ", lines, collapse = "\n")), domain = NA)
    }
    line_is_not_empty <- !grepl(paste0("^[", ascii_space, "]*$"), 
        lines)
    nums <- cumsum(diff(c(FALSE, line_is_not_empty) > 0L) > 0L)
    nums <- nums[line_is_not_empty]
    lines <- lines[line_is_not_empty]
    line_is_escaped_blank <- grepl(paste0("^[", ascii_space, 
        "]+\\.[", ascii_space, "]*$"), lines)
    if (any(line_is_escaped_blank)) 
        lines[line_is_escaped_blank] <- ""
    line_has_tag <- grepl(paste0("^[^", ascii_blank, "][^:]*:"), 
        lines)
    pos <- c(1L, which(diff(nums) > 0L) + 1L)
    ind <- !line_has_tag[pos]
    if (any(ind)) {
        lines <- substr(lines[pos[ind]], 1L, 0.7 * getOption("width"))
        stop(gettextf("Invalid DCF format.\nContinuation lines must not start a record.\nOffending lines start with:\n%s", 
            paste0("  ", lines, collapse = "\n")), domain = NA)
    }
    lengths <- rle(cumsum(line_has_tag))$lengths
    pos <- cumsum(lengths)
    tags <- sub(":.*", "", lines[line_has_tag])
    lines[line_has_tag] <- sub(paste0("[^:]*:[", ascii_space, 
        "]*"), "", lines[line_has_tag])
    fold <- is.na(match(tags, keep.white))
    foldable <- rep.int(fold, lengths)
    lines[foldable] <- sub("^[[:space:]]*", "", lines[foldable])
    lines[foldable] <- sub("[[:space:]]*$", "", lines[foldable])
    vals <- mapply(function(from, to) paste(lines[from:to], collapse = "\n"), 
        c(1L, pos[-length(pos)] + 1L), pos)
    vals[fold] <- trimws(vals[fold])
    Encoding(vals) <- "unknown"
    Encoding(tags) <- "unknown"
    out <- .assemble_things_into_a_data_frame(tags, vals, nums[pos])
    if (!is.null(fields)) 
        out <- out[fields]
    out
}
