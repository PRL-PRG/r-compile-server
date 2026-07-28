#? stdlib
`is_data_for_dataset` <- function (e) 
length(e) >= 2L && e[[1L]] == quote(data) && e[[2L]] != quote(...) && 
    length(e) <= 4L
