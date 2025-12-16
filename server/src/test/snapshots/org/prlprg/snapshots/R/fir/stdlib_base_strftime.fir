fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1235101665;
    st strftime = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1235101665(x, format, tz, usetz, `...`) {
  (reg x:*, reg format:*, reg tz:*, reg usetz:*, reg ddd:dots) -+> V { var x:*, var format:*, reg format_isMissing:L, reg format_orDefault:*, var tz:*, reg tz_isMissing:L, reg tz_orDefault:*, var usetz:*, reg usetz_isMissing:L, reg usetz_orDefault:*, var `...`:dots?, reg format1:cls, reg as_POSIXlt:cls, reg x1:*, reg x2:V, reg p:p(V +), reg tz1:*, reg tz2:V, reg p1:p(V +), reg r2:V, reg p2:p(V +), reg format2:*, reg format3:V, reg p3:p(V +), reg usetz1:*, reg usetz2:V, reg p4:p(V +), reg ddd1:dots?, reg r6:V |
    mkenv;
    st x = x;
    format_isMissing = missing.0(format);
    if format_isMissing then L0("") else L0(format);
  L0(format_orDefault):
    st format = format_orDefault;
    tz_isMissing = missing.0(tz);
    if tz_isMissing then L1("") else L1(tz);
  L1(tz_orDefault):
    st tz = tz_orDefault;
    usetz_isMissing = missing.0(usetz);
    if usetz_isMissing then L2(FALSE) else L2(usetz);
  L2(usetz_orDefault):
    st usetz = usetz_orDefault;
    st `...` = ddd;
    format1 = ldf format;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    p2 = prom<V +>{
      as_POSIXlt = ldf `as.POSIXlt`;
      p = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      p1 = prom<V +>{
        tz1 = ld tz;
        tz2 = force? tz1;
        checkMissing(tz2);
        return tz2;
      };
      r2 = dyn as_POSIXlt[, tz](p, p1);
      return r2;
    };
    p3 = prom<V +>{
      format2 = ld format;
      format3 = force? format2;
      checkMissing(format3);
      return format3;
    };
    p4 = prom<V +>{
      usetz1 = ld usetz;
      usetz2 = force? usetz1;
      checkMissing(usetz2);
      return usetz2;
    };
    ddd1 = ld `...`;
    r6 = dyn format1[, format, usetz, `...`](p2, p3, p4, ddd1);
    check L4() else D1();
  D1():
    deopt 8 [r6];
  L4():
    popenv;
    return r6;
  }
}