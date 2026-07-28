#? stdlib
`.fixupPkgMat` <- function (mat, fields, priority, subarch = NULL) 
{
    colnames(mat) <- c("Package", "LibPath", fields)
    if (length(mat) && !is.null(priority)) {
        keep <- !is.na(pmatch(mat[, "Priority"], priority, duplicates.ok = TRUE))
        mat <- mat[keep, , drop = FALSE]
    }
    if (length(mat) && !is.null(subarch) && nzchar(subarch)) {
        archs <- strsplit(mat[, "Archs"], ", ", fixed = TRUE)
        keep <- unlist(lapply(archs, function(x) is.na(x[1L]) || 
            subarch %in% x))
        mat <- mat[keep, , drop = FALSE]
    }
    if (length(mat)) 
        mat <- mat[, colnames(mat) != "Archs", drop = FALSE]
    if (length(mat)) 
        rownames(mat) <- mat[, "Package"]
    mat
}
