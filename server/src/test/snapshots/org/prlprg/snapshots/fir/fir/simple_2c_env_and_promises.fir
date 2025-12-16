fun main() {
  () --> I { var x:I?, reg stored:I?, reg stored0:I, reg prom:p(I -), reg forced:I, reg ret:I |
    mkenv;
    prom = prom<I ->{
      return 37;
    };
    forced = force prom;
    st x = forced;
    stored = ld x;
    stored0 = stored as I;
    popenv;
    ret = `+`.1(stored0, 5);
    return ret;
  }
}