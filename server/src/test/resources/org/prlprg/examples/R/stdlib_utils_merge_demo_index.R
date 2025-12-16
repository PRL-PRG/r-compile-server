#? stdlib
`merge_demo_index` <- function (hDB, path, pkg) 
{
    if (file.exists(d_file <- file.path(path, "Meta", "demo.rds")) && 
        !is.null(dDB <- readRDS(d_file)) && nrow(dDB)) {
        base <- matrix("", nrow = nrow(dDB), ncol = 8L)
        colnames(base) <- colnames(hDB[[1]])
        base[, "Package"] <- pkg
        base[, "LibPath"] <- path
        id <- as.character(1:nrow(dDB) + NROW(hDB[[1L]]))
        base[, "ID"] <- id
        base[, "Name"] <- dDB[, 1L]
        base[, "Topic"] <- base[, "Name"]
        base[, "Title"] <- dDB[, 2L]
        base[, "Type"] <- "demo"
        hDB[[1L]] <- rbind(hDB[[1L]], base)
        aliases <- matrix("", nrow = nrow(dDB), ncol = 3L)
        colnames(aliases) <- colnames(hDB[[2L]])
        aliases[, "Alias"] <- base[, "Name"]
        aliases[, "ID"] <- id
        aliases[, "Package"] <- pkg
        hDB[[2L]] <- rbind(hDB[[2L]], aliases)
    }
    hDB
}
