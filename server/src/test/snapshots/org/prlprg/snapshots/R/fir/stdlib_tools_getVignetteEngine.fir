fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2187660294;
    st getVignetteEngine = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2187660294(filename, lines) {
  (reg filename:*, reg lines:*) -+> V { var filename:*, var lines:*, reg lines_isMissing:L, reg lines_orDefault:*, reg readLines:cls, reg filename1:*, reg filename2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg _get_vignette_metadata:cls, reg lines1:*, reg lines2:V, reg p2:p(V +), reg r6:V, reg c:cls, reg r7:V, reg c1:L, reg r9:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r10:V |
    mkenv;
    st filename = filename;
    lines_isMissing = missing.0(lines);
    if lines_isMissing then L0() else L1(lines);
  L0():
    p1 = prom<V +>{
      readLines = ldf readLines;
      p = prom<V +>{
        filename1 = ld filename;
        filename2 = force? filename1;
        checkMissing(filename2);
        return filename2;
      };
      r1 = dyn readLines[, warn](p, FALSE);
      return r1;
    };
    goto L1(p1);
  L1(lines_orDefault):
    st lines = lines_orDefault;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L2(r4):
    c1 = `is.object`(r4);
    if c1 then L9() else L10(r4);
  L4():
    _get_vignette_metadata = ldf `.get_vignette_metadata`;
    check L6() else D0();
  L5():
    r3 = dyn base(<lang .get_vignette_metadata(lines, "Engine")>, "utils::Sweave");
    goto L2(r3);
  D0():
    deopt 3 [];
  L3(dx1):
    popenv;
    return dx1;
  L6():
    p2 = prom<V +>{
      lines1 = ld lines;
      lines2 = force? lines1;
      checkMissing(lines2);
      return lines2;
    };
    r6 = dyn _get_vignette_metadata(p2, "Engine");
    check L7() else D1();
  L9():
    dr = tryDispatchBuiltin.1("[", r4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L11() else L10(dr);
  L10(r9):
    __ = ldf `[` in base;
    r10 = dyn __(r9, 1);
    goto L3(r10);
  D1():
    deopt 6 [r6];
  L7():
    c = ldf c in base;
    r7 = dyn c(r6, "utils::Sweave");
    check L8() else D2();
  L11():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  D2():
    deopt 9 [r7];
  L8():
    goto L2(r7);
  }
}