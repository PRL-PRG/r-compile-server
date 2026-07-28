#? stdlib
`Rprof_memory_summary` <- function (con, chunksize = 5000, label = c(1, -1), aggregate = 0, 
    diff = FALSE, exclude = NULL, sample.interval) 
{
    memcounts <- NULL
    firsts <- NULL
    labels <- vector("list", length(label))
    index <- NULL
    repeat {
        chunk <- readLines(con, n = chunksize)
        if (!length(chunk)) 
            break
        memprefix <- attr(regexpr(":[0-9]+:[0-9]+:[0-9]+:[0-9]+:", 
            chunk), "match.length")
        memstuff <- substr(chunk, 2L, memprefix - 1L)
        mcnt <- rbind(t(sapply(strsplit(memstuff, ":"), as.numeric)))
        mcnt <- cbind(mcnt[, 1L:2L, drop = FALSE] * 8, mcnt[, 
            3L:4L, drop = FALSE])
        chunk <- substr(chunk, memprefix + 1, nchar(chunk, "c"))
        if (any(c0 <- nchar(chunk, "c") == 0L)) {
            mcnt <- mcnt[!c0, ]
            chunk <- chunk[!c0]
        }
        if (!length(chunk)) 
            next
        memcounts <- rbind(memcounts, mcnt)
        chunk <- strsplit(chunk, " ")
        if (length(exclude)) 
            chunk <- lapply(chunk, function(l) l[!(l %in% exclude)])
        len.pos <- lengths(chunk) > 0L
        newfirsts <- sapply(chunk[len.pos], `[[`, 1L)
        firsts <- c(firsts, newfirsts)
        if (!aggregate && length(label)) {
            for (i in seq_along(label)) {
                labels[[i]] <- c(labels[[i]], if (label[i] == 
                  1) newfirsts else if (label[i] > 1) sapply(chunk, 
                  function(line) paste(rev(line)[1L:min(label[i], 
                    length(line))], collapse = ":")) else sapply(chunk, 
                  function(line) paste(line[1L:min(-label[i], 
                    length(line))], collapse = ":")))
            }
        }
        else if (aggregate) {
            index <- c(index, sapply(chunk, if (aggregate > 0) function(line) paste(rev(line)[1L:min(aggregate, 
                length(line))], collapse = ":") else function(line) paste(line[1L:min(-aggregate, 
                length(line))], collapse = ":")))
        }
        if (length(chunk) < chunksize) 
            break
    }
    if (length(memcounts) == 0L) 
        stop("no events were recorded")
    memcounts <- as.data.frame(memcounts)
    names(memcounts) <- c("vsize.small", "vsize.large", "nodes", 
        "duplications")
    if (!aggregate) {
        rownames(memcounts) <- (1L:nrow(memcounts)) * sample.interval
        names(labels) <- paste0("stack:", label)
        memcounts <- cbind(memcounts, labels)
    }
    if (diff) 
        memcounts[-1L, 1L:3L] <- pmax(0L, apply(memcounts[, 1L:3L], 
            2L, diff))
    if (aggregate) 
        by(memcounts, index, function(these) with(these, round(c(vsize.small = mean(vsize.small), 
            max.vsize.small = max(vsize.small), vsize.large = mean(vsize.large), 
            max.vsize.large = max(vsize.large), nodes = mean(nodes), 
            max.nodes = max(nodes), duplications = mean(duplications), 
            tot.duplications = sum(duplications), samples = nrow(these)))))
    else memcounts
}
