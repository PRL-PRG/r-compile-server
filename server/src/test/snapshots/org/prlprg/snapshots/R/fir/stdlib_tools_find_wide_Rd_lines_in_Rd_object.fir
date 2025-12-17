fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3159632791;
    st find_wide_Rd_lines_in_Rd_object = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3159632791(x, limit, installed) {
  (reg x:*, reg limit:*, reg installed:*) -+> V { var x:*, var limit:*, reg limit_isMissing:L, reg limit_orDefault:*, var installed:*, reg installed_isMissing:L, reg installed_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg limit1:*, reg limit2:V, reg c:V, reg c1:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r4:V, reg r5:V, reg c2:cls, reg r6:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r7:V, reg r8:V, reg c3:cls, reg r9:V, reg list:cls, reg r10:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r12:V, reg r13:V, reg limit3:*, reg limit4:V, reg names:cls, reg r14:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r15:V, reg r16:V, reg sections:*, reg sections1:V, reg c4:V, reg c5:L, reg stop:cls, reg r17:V, reg installed1:*, reg installed2:V, reg c6:L, reg prepare_Rd:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r20:V, reg Map:cls, reg r22:cls, reg p1:p(V +), reg paste0:cls, reg sections2:*, reg sections3:V, reg p2:p(V +), reg r25:V, reg p3:p(V +), reg limit5:*, reg limit6:V, reg p4:p(V +), reg r28:V, reg sections4:*, reg sections5:V, reg l:*, reg names__:cls, reg r29:V, reg Filter:cls, reg length:*, reg length1:V, reg p5:p(V +), reg y:*, reg y1:V, reg p6:p(V +), reg r32:V |
    mkenv;
    st x = x;
    limit_isMissing = missing.0(limit);
    if limit_isMissing then L0(NULL) else L0(limit);
  L0(limit_orDefault):
    st limit = limit_orDefault;
    installed_isMissing = missing.0(installed);
    if installed_isMissing then L1(FALSE) else L1(installed);
  L1(installed_orDefault):
    st installed = installed_orDefault;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L14() else L15();
  L2(r1):
    c1 = `as.logical`(r1);
    if c1 then L17() else L3();
  L14():
    limit1 = ld limit;
    check L16() else D0();
  L15():
    r = dyn base(<sym limit>);
    goto L2(r);
  D0():
    deopt 1 [limit1];
  L3():
    goto L7();
  L7():
    sym4 = ldf names;
    base4 = ldf names in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L28() else L29();
  L16():
    limit2 = force? limit1;
    checkMissing(limit2);
    c = `==`(limit2, NULL);
    goto L2(c);
  L17():
    sym1 = ldf list;
    base1 = ldf list in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L18() else L19();
  L4(r3):
    st limit = r3;
    goto L7();
  L8(r13):
    st sections = r13;
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L32() else L33();
  L18():
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L20() else L21();
  L19():
    r2 = dyn base1[usage, examples](<lang c(79.0, 95.0)>, <lang c(87.0, 105.0)>);
    goto L4(r2);
  L28():
    limit3 = ld limit;
    check L30() else D4();
  L29():
    r12 = dyn base4(<sym limit>);
    goto L8(r12);
  D4():
    deopt 27 [limit3];
  L5(r5):
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L23() else L24();
  L9(r16):
    c5 = `as.logical`(r16);
    if c5 then L35() else L10();
  L20():
    c2 = ldf c in base;
    r6 = dyn c2(79.0, 95.0);
    check L22() else D1();
  L21():
    r4 = dyn base2(79.0, 95.0);
    goto L5(r4);
  L30():
    limit4 = force? limit3;
    checkMissing(limit4);
    names = ldf names in base;
    r14 = dyn names(limit4);
    check L31() else D5();
  L32():
    sections = ld sections;
    check L34() else D6();
  L33():
    r15 = dyn base5(<sym sections>);
    goto L9(r15);
  D1():
    deopt 11 [r6];
  D5():
    deopt 30 [r14];
  D6():
    deopt 33 [sections];
  L6(r8):
    list = ldf list in base;
    r10 = dyn list(r5, r8);
    check L26() else D3();
  L10():
    goto L11();
  L11():
    installed1 = ld installed;
    check L39() else D9();
  L22():
    goto L5(r6);
  L23():
    c3 = ldf c in base;
    r9 = dyn c3(87.0, 105.0);
    check L25() else D2();
  L24():
    r7 = dyn base3(87.0, 105.0);
    goto L6(r7);
  L31():
    goto L8(r14);
  L34():
    sections1 = force? sections;
    checkMissing(sections1);
    c4 = `==`(sections1, NULL);
    goto L9(c4);
  L35():
    stop = ldf stop;
    check L36() else D7();
  D2():
    deopt 18 [r9];
  D3():
    deopt 21 [r10];
  D7():
    deopt 37 [];
  D9():
    deopt 42 [installed1];
  L25():
    goto L6(r9);
  L26():
    goto L4(r10);
  L36():
    r17 = dyn stop("no Rd sections specified");
    check L37() else D8();
  L39():
    installed2 = force? installed1;
    checkMissing(installed2);
    c6 = `as.logical`(installed2);
    if c6 then L40() else L12();
  D8():
    deopt 39 [r17];
  L12():
    goto L13();
  L13():
    Map = ldf Map;
    check L44() else D12();
  L37():
    goto L11();
  L40():
    prepare_Rd = ldf prepare_Rd;
    check L41() else D10();
  D10():
    deopt 45 [];
  D12():
    deopt 54 [];
  L41():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r20 = dyn prepare_Rd[, stages](p, "render");
    check L42() else D11();
  L44():
    p1 = prom<V +>{
      r22 = clos inner2149868421;
      return r22;
    };
    p3 = prom<V +>{
      paste0 = ldf paste0;
      p2 = prom<V +>{
        sections2 = ld sections;
        sections3 = force? sections2;
        checkMissing(sections3);
        return sections3;
      };
      r25 = dyn paste0("\\", p2);
      return r25;
    };
    p4 = prom<V +>{
      limit5 = ld limit;
      limit6 = force? limit5;
      checkMissing(limit6);
      return limit6;
    };
    r28 = dyn Map(p1, p3, p4);
    check L45() else D13();
  D11():
    deopt 49 [r20];
  D13():
    deopt 58 [r28];
  L42():
    st x = r20;
    goto L13();
  L45():
    st y = r28;
    sections4 = ld sections;
    check L46() else D14();
  D14():
    deopt 60 [sections4];
  L46():
    sections5 = force? sections4;
    checkMissing(sections5);
    l = ld y;
    names__ = ldf `names<-`;
    check L47() else D15();
  D15():
    deopt 63 [sections5, l, sections5];
  L47():
    r29 = dyn names__(l, NULL, sections5);
    check L48() else D16();
  D16():
    deopt 65 [sections5, r29];
  L48():
    st y = r29;
    Filter = ldf Filter;
    check L49() else D17();
  D17():
    deopt 68 [];
  L49():
    p5 = prom<V +>{
      length = ld length;
      length1 = force? length;
      checkMissing(length1);
      return length1;
    };
    p6 = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      return y1;
    };
    r32 = dyn Filter(p5, p6);
    check L50() else D18();
  D18():
    deopt 71 [r32];
  L50():
    popenv;
    return r32;
  }
}
fun inner2149868421(s, l) {
  (reg s:*, reg l:*) -+> V { var s:*, var l:*, reg textConnection:cls, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg on_exit:cls, reg r3:V, reg which:cls, reg RdTags:cls, reg x:*, reg x1:V, reg p:p(V +), reg r5:V, reg s1:*, reg s2:V, reg r6:V, reg p1:p(V +), reg r8:V, reg Rd2txt:cls, reg x2:*, reg x3:V, reg c:L, reg x5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg pos:*, reg pos1:V, reg c1:L, reg x7:V, reg pos3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg x9:V, reg dx3:V, reg __:cls, reg r9:V, reg __1:cls, reg r10:V, reg p2:p(V +), reg zz:*, reg zz1:V, reg p3:p(V +), reg r13:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r14:V, reg r15:V, reg sub:cls, reg out:*, reg out1:V, reg p4:p(V +), reg r17:V, reg nchar:cls, reg r18:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r19:V, reg r20:V, reg l1:*, reg l2:V, reg length:cls, reg r21:V, reg r22:V, reg c2:L, reg nc:*, reg nc1:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r23:V, reg nc4:V, reg r24:V, reg l3:*, reg l4:V, reg max:cls, reg r25:V, reg r26:V, reg nc5:*, reg nc6:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r27:V, reg nc9:V, reg r28:V, reg l5:*, reg l6:V, reg min:cls, reg r29:V, reg r30:V, reg ind_warn:*, reg ind_warn1:V, reg r31:V, reg r32:V, reg Filter:cls, reg length1:*, reg length2:V, reg p5:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r34:V, reg r35:V, reg out2:*, reg out3:V, reg c3:L, reg out5:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg ind_warn2:*, reg ind_warn3:V, reg __2:cls, reg r36:V, reg out6:*, reg out7:V, reg c4:L, reg out9:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg ind_note:*, reg ind_note1:V, reg __3:cls, reg r37:V, reg list:cls, reg r38:V, reg p6:p(V +), reg r40:V, reg out10:*, reg out11:V, reg c5:L, reg out13:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg nc10:*, reg nc11:V, reg l7:*, reg l8:V, reg r41:V, reg __4:cls, reg r42:V |
    mkenv;
    st s = s;
    st l = l;
    st out = NULL;
    textConnection = ldf textConnection;
    check L7() else D0();
  D0():
    deopt 4 [];
  L7():
    r = dyn textConnection[, , local]("out", "w", TRUE);
    check L8() else D1();
  D1():
    deopt 9 [r];
  L8():
    st zz = r;
    sym = ldf `on.exit`;
    base = ldf `on.exit` in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L0():
    which = ldf which;
    check L11() else D2();
  L9():
    on_exit = ldf `on.exit` in base;
    r3 = dyn on_exit(<lang close(zz)>);
    goto L0();
  L10():
    r1 = dyn base(<lang close(zz)>);
    goto L0();
  D2():
    deopt 15 [];
  L11():
    p1 = prom<V +>{
      RdTags = ldf RdTags;
      p = prom<V +>{
        x = ld x;
        x1 = force? x;
        checkMissing(x1);
        return x1;
      };
      r5 = dyn RdTags(p);
      s1 = ld s;
      s2 = force? s1;
      checkMissing(s2);
      r6 = `==`(r5, s2);
      return r6;
    };
    r8 = dyn which(p1);
    check L12() else D3();
  D3():
    deopt 17 [r8];
  L12():
    st pos = r8;
    Rd2txt = ldf Rd2txt;
    check L13() else D4();
  D4():
    deopt 20 [];
  L13():
    p2 = prom<V +>{
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      c = `is.object`(x3);
      if c then L2() else L3(x3);
    L0(dx1):
      return dx1;
    L2():
      dr = tryDispatchBuiltin.1("[", x3);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L4() else L3(dr);
    L3(x5):
      pos = ld pos;
      pos1 = force? pos;
      checkMissing(pos1);
      c1 = `is.object`(pos1);
      if c1 then L5() else L6(x5, pos1);
    L1(x9, dx3):
      __1 = ldf `[` in base;
      r10 = dyn __1(x9, dx3);
      goto L0(r10);
    L4():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    L5():
      dr2 = tryDispatchBuiltin.1("[", pos1);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L7() else L6(x5, dr2);
    L6(x7, pos3):
      __ = ldf `[` in base;
      r9 = dyn __(pos3, 1);
      goto L1(x7, r9);
    L7():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L1(x5, dx2);
    };
    p3 = prom<V +>{
      zz = ld zz;
      zz1 = force? zz;
      checkMissing(zz1);
      return zz1;
    };
    r13 = dyn Rd2txt[, out, fragment, outputEncoding](p2, p3, TRUE, "UTF-8");
    check L14() else D5();
  D5():
    deopt 28 [r13];
  L14():
    sym1 = ldf nchar;
    base1 = ldf nchar in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L15() else L16();
  L1(r15):
    st nc = r15;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L20() else L21();
  L15():
    sub = ldf sub;
    check L17() else D6();
  L16():
    r14 = dyn base1(<lang sub("[ \t]+$", "", out)>);
    goto L1(r14);
  D6():
    deopt 32 [];
  L2(r20):
    r22 = `>`(r20, 1);
    c2 = `as.logical`(r22);
    if c2 then L24() else L3();
  L17():
    p4 = prom<V +>{
      out = ld out;
      out1 = force? out;
      checkMissing(out1);
      return out1;
    };
    r17 = dyn sub("[ \t]+$", "", p4);
    check L18() else D7();
  L20():
    l1 = ld l;
    check L22() else D9();
  L21():
    r19 = dyn base2(<sym l>);
    goto L2(r19);
  D7():
    deopt 36 [r17];
  D9():
    deopt 45 [l1];
  L3():
    out10 = ld out;
    check L39() else D20();
  L18():
    nchar = ldf nchar in base;
    r18 = dyn nchar(r17, "chars", FALSE, NA_LGL);
    check L19() else D8();
  L22():
    l2 = force? l1;
    checkMissing(l2);
    length = ldf length in base;
    r21 = dyn length(l2);
    check L23() else D10();
  L24():
    nc = ld nc;
    check L25() else D11();
  D8():
    deopt 41 [r18];
  D10():
    deopt 48 [r21];
  D11():
    deopt 51 [nc];
  D20():
    deopt 77 [out10];
  L19():
    goto L1(r18);
  L23():
    goto L2(r21);
  L25():
    nc1 = force? nc;
    checkMissing(nc1);
    sym3 = ldf max;
    base3 = ldf max in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L26() else L27();
  L39():
    out11 = force? out10;
    checkMissing(out11);
    c5 = `is.object`(out11);
    if c5 then L40() else L41(out11);
  L4(nc4, r24):
    r26 = `>`(nc4, r24);
    st ind_warn = r26;
    nc5 = ld nc;
    check L30() else D14();
  L6(dx9):
    popenv;
    return dx9;
  L26():
    l3 = ld l;
    check L28() else D12();
  L27():
    r23 = dyn base3(<sym l>);
    goto L4(nc1, r23);
  L40():
    dr8 = tryDispatchBuiltin.1("[", out11);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L42() else L41(dr8);
  L41(out13):
    nc10 = ld nc;
    check L43() else D21();
  D12():
    deopt 54 [nc1, l3];
  D14():
    deopt 60 [nc5];
  D21():
    deopt 79 [out13, nc10];
  L28():
    l4 = force? l3;
    checkMissing(l4);
    max = ldf max in base;
    r25 = dyn max(l4);
    check L29() else D13();
  L30():
    nc6 = force? nc5;
    checkMissing(nc6);
    sym4 = ldf min;
    base4 = ldf min in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L31() else L32();
  L42():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L6(dx8);
  L43():
    nc11 = force? nc10;
    checkMissing(nc11);
    l7 = ld l;
    check L44() else D22();
  D13():
    deopt 57 [nc1, r25];
  D22():
    deopt 80 [out13, nc11, l7];
  L5(nc9, r28):
    r30 = `>`(nc9, r28);
    ind_warn = ld ind_warn;
    check L35() else D17();
  L29():
    goto L4(nc1, r25);
  L31():
    l5 = ld l;
    check L33() else D15();
  L32():
    r27 = dyn base4(<sym l>);
    goto L5(nc6, r27);
  L44():
    l8 = force? l7;
    checkMissing(l8);
    r41 = `>`(nc11, l8);
    __4 = ldf `[` in base;
    r42 = dyn __4(out13, r41);
    goto L6(r42);
  D15():
    deopt 63 [nc6, l5];
  D17():
    deopt 67 [r30, ind_warn];
  L33():
    l6 = force? l5;
    checkMissing(l6);
    min = ldf min in base;
    r29 = dyn min(l6);
    check L34() else D16();
  L35():
    ind_warn1 = force? ind_warn;
    checkMissing(ind_warn1);
    r31 = `!`(ind_warn1);
    r32 = `&&`(r30, r31);
    st ind_note = r32;
    Filter = ldf Filter;
    check L36() else D18();
  D16():
    deopt 66 [nc6, r29];
  D18():
    deopt 73 [];
  L34():
    goto L5(nc6, r29);
  L36():
    p5 = prom<V +>{
      length1 = ld length;
      length2 = force? length1;
      checkMissing(length2);
      return length2;
    };
    p6 = prom<V +>{
      sym5 = ldf list;
      base5 = ldf list in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L3() else L4();
    L0(r35):
      return r35;
    L3():
      out2 = ld out;
      out3 = force? out2;
      checkMissing(out3);
      c3 = `is.object`(out3);
      if c3 then L5() else L6(out3);
    L4():
      r34 = dyn base5[warn, note](<lang `[`(out, ind_warn)>, <lang `[`(out, ind_note)>);
      goto L0(r34);
    L1(dx5):
      out6 = ld out;
      out7 = force? out6;
      checkMissing(out7);
      c4 = `is.object`(out7);
      if c4 then L8() else L9(out7);
    L5():
      dr4 = tryDispatchBuiltin.1("[", out3);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L7() else L6(dr4);
    L6(out5):
      ind_warn2 = ld ind_warn;
      ind_warn3 = force? ind_warn2;
      __2 = ldf `[` in base;
      r36 = dyn __2(out5, ind_warn3);
      goto L1(r36);
    L2(dx7):
      list = ldf list in base;
      r38 = dyn list(dx5, dx7);
      goto L0(r38);
    L7():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L1(dx4);
    L8():
      dr6 = tryDispatchBuiltin.1("[", out7);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L10() else L9(dr6);
    L9(out9):
      ind_note = ld ind_note;
      ind_note1 = force? ind_note;
      __3 = ldf `[` in base;
      r37 = dyn __3(out9, ind_note1);
      goto L2(r37);
    L10():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L2(dx6);
    };
    r40 = dyn Filter(p5, p6);
    check L37() else D19();
  D19():
    deopt 76 [r40];
  L37():
    popenv;
    return r40;
  }
}