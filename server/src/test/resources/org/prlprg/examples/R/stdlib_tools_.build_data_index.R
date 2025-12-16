#? stdlib
`.build_data_index` <- function (dir, contents) 
{
    dataTopics <- list_data_in_pkg(dir = dir)
    if (!length(dataTopics)) 
        return(matrix("", 0L, 2L))
    names(dataTopics) <- paste0(names(dataTopics), "/")
    datasets <- unlist(dataTopics)
    if (!length(datasets)) 
        return(matrix("", 0L, 2L))
    names(datasets) <- sub("/[^/]*$", "", names(datasets))
    datasets <- sort(datasets)
    dataIndex <- cbind(datasets, "", deparse.level = 0L)
    dimnames(dataIndex) <- NULL
    if (length(datasets) && NROW(contents)) {
        aliasIndices <- rep.int(seq_len(NROW(contents)), lengths(contents$Aliases))
        idx <- match(datasets, unlist(contents$Aliases), 0L)
        dataIndex[which(idx != 0L), 2L] <- contents[aliasIndices[idx], 
            "Title"]
    }
    if (length(datasets)) 
        dataIndex[, 1L] <- as.vector(ifelse(datasets == names(datasets), 
            datasets, paste0(datasets, " (", names(datasets), 
                ")")))
    dataIndex
}
