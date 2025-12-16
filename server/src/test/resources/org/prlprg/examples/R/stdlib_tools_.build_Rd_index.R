#? stdlib
`.build_Rd_index` <- function (contents, type = NULL) 
{
    keywords <- contents[, "Keywords"]
    if (!is.null(type)) {
        idx <- contents[, "Type"] %in% type
        if (type == "data") 
            idx <- idx | keywords == "datasets"
        contents <- contents[idx, , drop = FALSE]
        keywords <- keywords[idx]
    }
    idx <- (vapply(keywords, function(x) match("internal", x, 
        0L), 0L) == 0L)
    topic <- as.character(unlist(Map(.Rd_topic_for_display, contents[idx, 
        "Name"], contents[idx, "Aliases"])))
    index <- data.frame(Topic = topic, Title = contents[idx, 
        "Title"])
    if (nrow(index)) {
        index$Topic[is.na(index$Topic)] <- ""
        index <- index[order(index$Topic), ]
    }
    index
}
