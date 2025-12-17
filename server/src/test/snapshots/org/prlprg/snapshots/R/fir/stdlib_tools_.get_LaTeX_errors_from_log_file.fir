fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4061399855;
    st `.get_LaTeX_errors_from_log_file` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4061399855(con, n) {
  (reg con:*, reg n:*) -+> V { var con:*, var n:*, reg n_isMissing:L, reg n_orDefault:*, reg readLines:cls, reg con1:*, reg con2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg lines:*, reg lines1:V, reg nchar:cls, reg r8:V, reg is_na:cls, reg r9:V, reg any:cls, reg r10:V, reg c:L, reg iconv:cls, reg lines2:*, reg lines3:V, reg c1:L, reg lines5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ind:*, reg ind1:V, reg __:cls, reg r11:V, reg p1:p(V +), reg r13:V, reg l:*, reg c2:L, reg r15:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg r17:V, reg dx3:V, reg ind2:*, reg ind3:V, reg ___:cls, reg r18:V, reg grep:cls, reg lines6:*, reg lines7:V, reg p2:p(V +), reg r21:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r22:V, reg r23:V, reg pos:*, reg pos1:V, reg length:cls, reg r24:V, reg r25:V, reg c3:L, reg character:cls, reg r26:V, reg mapply:cls, reg r29:cls, reg p3:p(V +), reg pos2:*, reg pos3:V, reg p4:p(V +), reg pmin:cls, reg pos4:*, reg pos5:V, reg n1:*, reg n2:V, reg r32:V, reg p5:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r34:V, reg r35:V, reg pos6:*, reg pos7:V, reg c4:L, reg pos9:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __1:cls, reg r36:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r37:V, reg r38:V, reg lines8:*, reg lines9:V, reg length1:cls, reg r39:V, reg c5:cls, reg r40:V, reg p6:p(V +), reg r42:V, reg p7:p(V +), reg r44:V |
    mkenv;
    st con = con;
    n_isMissing = missing.0(n);
    if n_isMissing then L0(4) else L0(n);
  L0(n_orDefault):
    st n = n_orDefault;
    readLines = ldf readLines;
    check L10() else D0();
  D0():
    deopt 1 [];
  L10():
    p = prom<V +>{
      con1 = ld con;
      con2 = force? con1;
      checkMissing(con2);
      return con2;
    };
    r1 = dyn readLines[, warn](p, FALSE);
    check L11() else D1();
  D1():
    deopt 5 [r1];
  L11():
    st lines = r1;
    sym = ldf any;
    base = ldf any in base;
    guard = `==`.4(sym, base);
    if guard then L12() else L13();
  L1(r3):
    c = `as.logical`(r3);
    if c then L22() else L4();
  L12():
    sym1 = ldf `is.na`;
    base1 = ldf `is.na` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L14() else L15();
  L13():
    r2 = dyn base(<lang `<-`(ind, is.na(nchar(lines, allowNA=TRUE)))>);
    goto L1(r2);
  L2(r5):
    st ind = r5;
    any = ldf any in base;
    r10 = dyn any(r5);
    check L21() else D5();
  L4():
    goto L6();
  L6():
    grep = ldf grep;
    check L30() else D9();
  L14():
    sym2 = ldf nchar;
    base2 = ldf nchar in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L16() else L17();
  L15():
    r4 = dyn base1(<lang nchar(lines, allowNA=TRUE)>);
    goto L2(r4);
  L22():
    iconv = ldf iconv;
    check L23() else D6();
  D5():
    deopt 24 [r10];
  D6():
    deopt 26 [];
  D9():
    deopt 41 [];
  L3(r7):
    is_na = ldf `is.na` in base;
    r9 = dyn is_na(r7);
    check L20() else D4();
  L16():
    lines = ld lines;
    check L18() else D2();
  L17():
    r6 = dyn base2[, allowNA](<sym lines>, TRUE);
    goto L3(r6);
  L21():
    goto L1(r10);
  L23():
    p1 = prom<V +>{
      lines2 = ld lines;
      lines3 = force? lines2;
      checkMissing(lines3);
      c1 = `is.object`(lines3);
      if c1 then L1() else L2(lines3);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", lines3);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(lines5):
      ind = ld ind;
      ind1 = force? ind;
      __ = ldf `[` in base;
      r11 = dyn __(lines5, ind1);
      goto L0(r11);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r13 = dyn iconv[, , , sub](p1, "", "", "byte");
    check L24() else D7();
  L30():
    p2 = prom<V +>{
      lines6 = ld lines;
      lines7 = force? lines6;
      checkMissing(lines7);
      return lines7;
    };
    r21 = dyn grep("(^! |^!pdfTeX error:|:[0123456789]+:.*[Ee]rror)", p2);
    check L31() else D10();
  D2():
    deopt 13 [lines];
  D4():
    deopt 21 [r9];
  D7():
    deopt 32 [r13];
  D10():
    deopt 44 [r21];
  L18():
    lines1 = force? lines;
    checkMissing(lines1);
    nchar = ldf nchar in base;
    r8 = dyn nchar(lines1, "chars", TRUE, NA_LGL);
    check L19() else D3();
  L20():
    goto L2(r9);
  L24():
    l = ld lines;
    c2 = `is.object`(l);
    if c2 then L25() else L26(r13, l);
  L31():
    st pos = r21;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L32() else L33();
  D3():
    deopt 19 [r8];
  L5(r17, dx3):
    st lines = dx3;
    goto L6();
  L7(r23):
    r25 = `!`(r23);
    c3 = `as.logical`(r25);
    if c3 then L36() else L8();
  L19():
    goto L3(r8);
  L25():
    dr2 = tryDispatchBuiltin.0("[<-", l, r13);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L27() else L26(r13, dr2);
  L26(r15, l2):
    ind2 = ld ind;
    check L28() else D8();
  L32():
    pos = ld pos;
    check L34() else D11();
  L33():
    r22 = dyn base3(<sym pos>);
    goto L7(r22);
  D8():
    deopt 34 [r15, l2, r13, ind2];
  D11():
    deopt 48 [pos];
  L8():
    mapply = ldf mapply;
    check L41() else D15();
  L27():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L5(r13, dx2);
  L28():
    ind3 = force? ind2;
    ___ = ldf `[<-` in base;
    r18 = dyn ___(l2, r13, ind3);
    goto L5(r15, r18);
  L34():
    pos1 = force? pos;
    checkMissing(pos1);
    length = ldf length in base;
    r24 = dyn length(pos1);
    check L35() else D12();
  L36():
    character = ldf character;
    check L37() else D13();
  D12():
    deopt 51 [r24];
  D13():
    deopt 54 [];
  D15():
    deopt 60 [];
  L35():
    goto L7(r24);
  L37():
    r26 = dyn character();
    check L38() else D14();
  L41():
    p3 = prom<V +>{
      r29 = clos inner838351097;
      return r29;
    };
    p4 = prom<V +>{
      pos2 = ld pos;
      pos3 = force? pos2;
      checkMissing(pos3);
      return pos3;
    };
    p7 = prom<V +>{
      pmin = ldf pmin;
      p5 = prom<V +>{
        pos4 = ld pos;
        pos5 = force? pos4;
        checkMissing(pos5);
        n1 = ld n;
        n2 = force? n1;
        checkMissing(n2);
        r32 = `+`(pos5, n2);
        return r32;
      };
      p6 = prom<V +>{
        sym4 = ldf c;
        base4 = ldf c in base;
        guard4 = `==`.4(sym4, base4);
        if guard4 then L3() else L4();
      L0(r35):
        return r35;
      L3():
        pos6 = ld pos;
        pos7 = force? pos6;
        checkMissing(pos7);
        c4 = `is.object`(pos7);
        if c4 then L5() else L6(pos7);
      L4():
        r34 = dyn base4(<lang `[`(pos, `-`(1))>, <lang length(lines)>);
        goto L0(r34);
      L1(dx5):
        sym5 = ldf length;
        base5 = ldf length in base;
        guard5 = `==`.4(sym5, base5);
        if guard5 then L8() else L9();
      L5():
        dr4 = tryDispatchBuiltin.1("[", pos7);
        dc2 = getTryDispatchBuiltinDispatched(dr4);
        if dc2 then L7() else L6(dr4);
      L6(pos9):
        __1 = ldf `[` in base;
        r36 = dyn __1(pos9, -1);
        goto L1(r36);
      L2(r38):
        c5 = ldf c in base;
        r40 = dyn c5(dx5, r38);
        goto L0(r40);
      L7():
        dx4 = getTryDispatchBuiltinValue(dr4);
        goto L1(dx4);
      L8():
        lines8 = ld lines;
        lines9 = force? lines8;
        checkMissing(lines9);
        length1 = ldf length in base;
        r39 = dyn length1(lines9);
        goto L2(r39);
      L9():
        r37 = dyn base5(<sym lines>);
        goto L2(r37);
      };
      r42 = dyn pmin(p5, p6);
      return r42;
    };
    r44 = dyn mapply(p3, p4, p7);
    check L42() else D16();
  D14():
    deopt 55 [r26];
  D16():
    deopt 64 [r44];
  L38():
    popenv;
    return r26;
  L42():
    popenv;
    return r44;
  }
}
fun inner838351097(from, to) {
  (reg from:*, reg to:*) -+> V { var from:*, var to:*, reg paste:cls, reg lines:*, reg lines1:V, reg c:L, reg lines3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg from1:*, reg from2:V, reg to1:*, reg to2:V, reg r:V, reg __:cls, reg r1:V, reg p:p(V +), reg r3:V |
    mkenv;
    st from = from;
    st to = to;
    paste = ldf paste;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      lines = ld lines;
      lines1 = force? lines;
      checkMissing(lines1);
      c = `is.object`(lines1);
      if c then L1() else L2(lines1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", lines1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(lines3):
      from1 = ld from;
      from2 = force? from1;
      checkMissing(from2);
      to1 = ld to;
      to2 = force? to1;
      checkMissing(to2);
      r = `:`(from2, to2);
      __ = ldf `[` in base;
      r1 = dyn __(lines3, r);
      goto L0(r1);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r3 = dyn paste[, collapse](p, "\n");
    check L1() else D1();
  D1():
    deopt 5 [r3];
  L1():
    popenv;
    return r3;
  }
}