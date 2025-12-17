fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3541317879;
    st ccEclean = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3541317879(lines, pattern) {
  (reg lines:*, reg pattern:*) -+> V { var lines:*, var pattern:*, reg pattern_isMissing:L, reg pattern_orDefault:*, reg grepl:cls, reg lines1:*, reg lines2:V, reg p:p(V +), reg r1:V, reg grepl1:cls, reg pattern1:*, reg pattern2:V, reg p1:p(V +), reg lines3:*, reg lines4:V, reg c:L, reg lines6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg fline:*, reg fline1:V, reg __:cls, reg r3:V, reg p2:p(V +), reg r5:V, reg diff:cls, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg r7:V, reg which:cls, reg fline2:*, reg fline3:V, reg p3:p(V +), reg r9:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg lines7:*, reg lines8:V, reg length:cls, reg r12:V, reg r13:V, reg c1:cls, reg r14:V, reg p4:p(V +), reg r16:V, reg unlist:cls, reg mapply:cls, reg rep:*, reg rep1:V, reg p5:p(V +), reg keep:*, reg keep1:V, reg p6:p(V +), reg len:*, reg len1:V, reg p7:p(V +), reg r20:V, reg p8:p(V +), reg r22:V, reg lines9:*, reg lines10:V, reg c2:L, reg lines12:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg keep2:*, reg keep3:V, reg fline4:*, reg fline5:V, reg r23:V, reg r24:V, reg __1:cls, reg r25:V, reg lines13:*, reg lines14:V |
    mkenv;
    st lines = lines;
    pattern_isMissing = missing.0(pattern);
    if pattern_isMissing then L0("Rtmp") else L0(pattern);
  L0(pattern_orDefault):
    st pattern = pattern_orDefault;
    grepl = ldf grepl;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p = prom<V +>{
      lines1 = ld lines;
      lines2 = force? lines1;
      checkMissing(lines2);
      return lines2;
    };
    r1 = dyn grepl("^#", p);
    check L3() else D1();
  D1():
    deopt 4 [r1];
  L3():
    st fline = r1;
    grepl1 = ldf grepl;
    check L4() else D2();
  D2():
    deopt 7 [];
  L4():
    p1 = prom<V +>{
      pattern1 = ld pattern;
      pattern2 = force? pattern1;
      checkMissing(pattern2);
      return pattern2;
    };
    p2 = prom<V +>{
      lines3 = ld lines;
      lines4 = force? lines3;
      checkMissing(lines4);
      c = `is.object`(lines4);
      if c then L1() else L2(lines4);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", lines4);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(lines6):
      fline = ld fline;
      fline1 = force? fline;
      __ = ldf `[` in base;
      r3 = dyn __(lines6, fline1);
      goto L0(r3);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r5 = dyn grepl1(p1, p2);
    check L5() else D3();
  D3():
    deopt 10 [r5];
  L5():
    st keep = r5;
    diff = ldf diff;
    check L6() else D4();
  D4():
    deopt 13 [];
  L6():
    p4 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L2() else L3();
    L0(r7):
      return r7;
    L2():
      which = ldf which;
      p3 = prom<V +>{
        fline2 = ld fline;
        fline3 = force? fline2;
        checkMissing(fline3);
        return fline3;
      };
      r9 = dyn which(p3);
      sym1 = ldf length;
      base1 = ldf length in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L4() else L5();
    L3():
      r6 = dyn base(<lang which(fline)>, <lang `+`(length(lines), 1.0)>);
      goto L0(r6);
    L1(r11):
      r13 = `+`(r11, 1.0);
      c1 = ldf c in base;
      r14 = dyn c1(r9, r13);
      goto L0(r14);
    L4():
      lines7 = ld lines;
      lines8 = force? lines7;
      checkMissing(lines8);
      length = ldf length in base;
      r12 = dyn length(lines8);
      goto L1(r12);
    L5():
      r10 = dyn base1(<sym lines>);
      goto L1(r10);
    };
    r16 = dyn diff(p4);
    check L7() else D5();
  D5():
    deopt 15 [r16];
  L7():
    st len = r16;
    unlist = ldf unlist;
    check L8() else D6();
  D6():
    deopt 18 [];
  L8():
    p8 = prom<V +>{
      mapply = ldf mapply;
      p5 = prom<V +>{
        rep = ld rep;
        rep1 = force? rep;
        checkMissing(rep1);
        return rep1;
      };
      p6 = prom<V +>{
        keep = ld keep;
        keep1 = force? keep;
        checkMissing(keep1);
        return keep1;
      };
      p7 = prom<V +>{
        len = ld len;
        len1 = force? len;
        checkMissing(len1);
        return len1;
      };
      r20 = dyn mapply[, , , `USE.NAMES`](p5, p6, p7, FALSE);
      return r20;
    };
    r22 = dyn unlist(p8);
    check L9() else D7();
  D7():
    deopt 20 [r22];
  L9():
    st keep = r22;
    lines9 = ld lines;
    check L10() else D8();
  D8():
    deopt 22 [lines9];
  L10():
    lines10 = force? lines9;
    checkMissing(lines10);
    c2 = `is.object`(lines10);
    if c2 then L11() else L12(lines10);
  L1(dx3):
    st lines = dx3;
    lines13 = ld lines;
    check L16() else D11();
  L11():
    dr2 = tryDispatchBuiltin.1("[", lines10);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L13() else L12(dr2);
  L12(lines12):
    keep2 = ld keep;
    check L14() else D9();
  D9():
    deopt 24 [lines12, keep2];
  D11():
    deopt 31 [lines13];
  L13():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L1(dx2);
  L14():
    keep3 = force? keep2;
    checkMissing(keep3);
    fline4 = ld fline;
    check L15() else D10();
  L16():
    lines14 = force? lines13;
    checkMissing(lines14);
    popenv;
    return lines14;
  D10():
    deopt 25 [lines12, keep3, fline4];
  L15():
    fline5 = force? fline4;
    checkMissing(fline5);
    r23 = `!`(fline5);
    r24 = `&&`(keep3, r23);
    __1 = ldf `[` in base;
    r25 = dyn __1(lines12, r24);
    goto L1(r25);
  }
}