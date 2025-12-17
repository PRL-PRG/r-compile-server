fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1607025127;
    st `format.Date` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1607025127(x, format, `...`) {
  (reg x:*, reg format:*, reg ddd:dots) -+> V { var x:*, var format:*, reg format_isMissing:L, reg format_orDefault:*, var `...`:dots?, reg format1:cls, reg as_POSIXlt:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg format2:*, reg format3:V, reg p2:p(V +), reg ddd1:dots?, reg r4:V |
    mkenv;
    st x = x;
    format_isMissing = missing.0(format);
    if format_isMissing then L0("%Y-%m-%d") else L0(format);
  L0(format_orDefault):
    st format = format_orDefault;
    st `...` = ddd;
    format1 = ldf format;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p1 = prom<V +>{
      as_POSIXlt = ldf `as.POSIXlt`;
      p = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      r1 = dyn as_POSIXlt(p);
      return r1;
    };
    p2 = prom<V +>{
      format2 = ld format;
      format3 = force? format2;
      checkMissing(format3);
      return format3;
    };
    ddd1 = ld `...`;
    r4 = dyn format1[, format, `...`](p1, p2, ddd1);
    check L2() else D1();
  D1():
    deopt 6 [r4];
  L2():
    popenv;
    return r4;
  }
}