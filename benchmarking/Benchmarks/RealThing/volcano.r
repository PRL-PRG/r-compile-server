bench_rays <- function(height.map = volcano, sun.angle = 45) {
    shadow <- matrix(1, ncol = ncol(height.map), nrow = nrow(height.map))
    sunangle <- sun.angle / 180 * pi
    angle <- -90 / 180 * pi
    diffangle <- 90 / 180 * pi
    numberangles <- 25
    # anglebreaks <- seq(angle, diffangle, length.out = numberangles)
    anglebreaks <- sapply(seq(angle, diffangle, length.out = numberangles), tan)
    maxdistance <- floor(sqrt(ncol(height.map)^2 + nrow(height.map)^2))
    sinsun <- sin(sunangle)
    cossun <- cos(sunangle)

    for (i in 1:nrow(height.map)) {
        for (j in 1:ncol(height.map)) {
            for (anglei in anglebreaks) {
                for (k in 1:maxdistance) {
                    # xcoord <- i + sin(sunangle) * k
                    xcoord <- i + sinsun * k
                    # ycoord <- j + cos(sunangle) * k
                    ycoord <- j + cossun * k

                    if (xcoord > nrow(height.map) ||
                        ycoord > ncol(height.map) ||
                        xcoord < 0 || ycoord < 0) break

                    # tanangheight <- height.map[i, j] + tan(anglei) * k
                    tanangheight <- height.map[i, j] + anglei * k

                    if (all(c(height.map[ceiling(xcoord), ceiling(ycoord)],
                              height.map[floor(xcoord),   ceiling(ycoord)],
                              height.map[ceiling(xcoord), floor(ycoord)],
                              height.map[floor(xcoord),   floor(ycoord)]) < tanangheight)) next

                    if (tanangheight < bilinear(height.map, xcoord, ycoord)) {
                        shadow[i, j] <- shadow[i, j] - 1 / length(anglebreaks)
                        break
                    }
                }
            }
        }
    }

    shadow
}

bilinear <- function(data, x0, y0) {
    i <- max(1, floor(x0))
    j <- max(1, floor(y0))
    XT <- (x0 - i)
    YT <- (y0 - j)
    result <- (1 - YT) * (1 - XT) * data[i, j]
    nx <- nrow(data)
    ny <- ncol(data)
    if (i + 1 <= nx) {
        result <- result + (1 - YT) * XT * data[i + 1, j]
    }
    if (j + 1 <= ny) {
        result <- result + YT * (1 - XT) * data[i, j + 1]
    }
    if (i + 1 <= nx && j + 1 <= ny) {
        result <- result + YT * XT * data[i + 1, j + 1]
    }
    result
}

points <- rep(181L, 10) # 181 takes the longest to compute

execute <- function(n) {
  s = 0
  for (j in 1:n) {
    for (i in points) {
      s = s+sum(bench_rays(height.map = volcano, sun.angle = i))
    }
  }
  print(s)
}
