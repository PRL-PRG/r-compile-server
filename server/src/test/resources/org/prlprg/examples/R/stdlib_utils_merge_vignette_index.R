#? stdlib
`merge_vignette_index` <- function (hDB, path, pkg) 
{
    if (file.exists(v_file <- file.path(path, "Meta", "vignette.rds")) && 
        !is.null(vDB <- readRDS(v_file)) && nrow(vDB)) {
        base <- matrix("", nrow = nrow(vDB), ncol = 8L)
        colnames(base) <- colnames(hDB[[1L]])
        base[, "Package"] <- pkg
        base[, "LibPath"] <- path
        id <- as.character(1:nrow(vDB) + NROW(hDB[[1L]]))
        base[, "ID"] <- id
        base[, "Name"] <- tools::file_path_sans_ext(basename(vDB$PDF))
        base[, "Topic"] <- base[, "Name"]
        base[, "Title"] <- vDB$Title
        base[, "Type"] <- "vignette"
        hDB[[1L]] <- rbind(hDB[[1L]], base)
        aliases <- matrix("", nrow = nrow(vDB), ncol = 3L)
        colnames(aliases) <- colnames(hDB[[2L]])
        aliases[, "Alias"] <- base[, "Name"]
        aliases[, "ID"] <- id
        aliases[, "Package"] <- pkg
        hDB[[2L]] <- rbind(hDB[[2L]], aliases)
        nkeywords <- sum(lengths(vDB$Keywords))
        if (nkeywords) {
            keywords <- matrix("", nrow = nkeywords, ncol = 3L)
            colnames(keywords) <- colnames(hDB[[4L]])
            keywords[, "Concept"] <- unlist(vDB$Keywords)
            keywords[, "ID"] <- unlist(lapply(1:nrow(vDB), function(i) rep.int(id[i], 
                length(vDB$Keywords[[i]]))))
            keywords[, "Package"] <- pkg
            hDB[[4L]] <- rbind(hDB[[4L]], keywords)
        }
    }
    hDB
}
