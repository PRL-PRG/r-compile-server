fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `format.check_Rd_metadata` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg character:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r5:V, reg length:cls, reg r6:V, reg c1:L, reg unlist:cls, reg lapply:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg bad:*, reg bad1:V, reg names:cls, reg r9:V, reg p:p(V +), reg r11:cls, reg p1:p(V +), reg r13:V, reg p2:p(V +), reg r15:V, reg r16:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r17:V, reg r18:V, reg x5:*, reg x6:V, reg c2:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r19:V, reg length1:cls, reg r20:V, reg c3:L, reg unlist1:cls, reg lapply1:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r21:V, reg r22:V, reg bad2:*, reg bad3:V, reg names1:cls, reg r23:V, reg p3:p(V +), reg r25:cls, reg p4:p(V +), reg r27:V, reg p5:p(V +), reg r29:V, reg r30:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r31:V, reg r32:V, reg x9:*, reg x10:V, reg c4:L, reg x12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r33:V, reg length2:cls, reg r34:V, reg c5:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r35:V, reg r36:V, reg gettext:cls, reg r37:V, reg _pretty_format:cls, reg bad4:*, reg bad5:V, reg p6:p(V +), reg r39:V, reg c6:cls, reg r40:V, reg r41:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r42:V, reg r43:V, reg x13:*, reg x14:V, reg c7:L, reg x16:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r44:V, reg length3:cls, reg r45:V, reg c8:L, reg unlist2:cls, reg lapply2:cls, reg sym8:cls, reg base8:cls, reg guard8:L, reg r46:V, reg r47:V, reg bad6:*, reg bad7:V, reg names2:cls, reg r48:V, reg p7:p(V +), reg r50:cls, reg p8:p(V +), reg r52:V, reg p9:p(V +), reg r54:V, reg r55:V, reg c9:cls, reg r56:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L14() else L15();
  L0(r1):
    popenv;
    return r1;
  L14():
    character = ldf character;
    check L16() else D0();
  L15():
    r = dyn base(<lang character()>, <lang if(length(`<-`(bad, `$`(x, files_with_duplicated_name))), {
        unlist(lapply(names(bad), function((nm=), {
                c(gettextf("Rd files with duplicated name '%s':", nm), .pretty_format(`[[`(bad, nm)))
              }, NULL)))
      })>, <lang if(length(`<-`(bad, `$`(x, files_with_duplicated_aliases))), {
        unlist(lapply(names(bad), function((nm=), {
                c(gettextf("Rd files with duplicated alias '%s':", nm), .pretty_format(`[[`(bad, nm)))
              }, NULL)))
      })>, <lang if(length(`<-`(bad, `$`(x, files_without_aliases))), {
        c(gettext("Rd files without \\alias:"), .pretty_format(bad))
      })>, <lang if(length(`<-`(bad, `$`(x, files_with_bad_package_aliases))), {
        unlist(lapply(names(bad), function((nm=), {
                c(gettextf("Invalid package aliases in Rd file '%s':", nm), .pretty_format(`[[`(bad, nm)))
              }, NULL)))
      })>);
    goto L0(r);
  D0():
    deopt 3 [];
  L16():
    r2 = dyn character();
    check L17() else D1();
  D1():
    deopt 4 [r2];
  L17():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L18() else L19();
  L1(r4):
    c1 = `as.logical`(r4);
    if c1 then L26() else L2();
  L18():
    x1 = ld x;
    check L20() else D2();
  L19():
    r3 = dyn base1(<lang `<-`(bad, `$`(x, files_with_duplicated_name))>);
    goto L1(r3);
  D2():
    deopt 7 [x1];
  L2():
    goto L3(NULL);
  L3(r16):
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L30() else L31();
  L20():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.object`(x2);
    if c then L22() else L23(x2);
  L26():
    unlist = ldf unlist;
    check L27() else D4();
  D4():
    deopt 14 [];
  L4(r18):
    c3 = `as.logical`(r18);
    if c3 then L38() else L5();
  L21(dx1):
    st bad = dx1;
    length = ldf length in base;
    r6 = dyn length(dx1);
    check L25() else D3();
  L22():
    dr = tryDispatchBuiltin.1("$", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L24() else L23(dr);
  L23(x4):
    r5 = `$`(x4, <sym files_with_duplicated_name>);
    goto L21(r5);
  L27():
    p2 = prom<V +>{
      lapply = ldf lapply;
      p = prom<V +>{
        sym2 = ldf names;
        base2 = ldf names in base;
        guard2 = `==`.4(sym2, base2);
        if guard2 then L1() else L2();
      L0(r8):
        return r8;
      L1():
        bad = ld bad;
        bad1 = force? bad;
        checkMissing(bad1);
        names = ldf names in base;
        r9 = dyn names(bad1);
        goto L0(r9);
      L2():
        r7 = dyn base2(<sym bad>);
        goto L0(r7);
      };
      p1 = prom<V +>{
        r11 = clos inner3369547807;
        return r11;
      };
      r13 = dyn lapply(p, p1);
      return r13;
    };
    r15 = dyn unlist(p2);
    check L28() else D5();
  L30():
    x5 = ld x;
    check L32() else D6();
  L31():
    r17 = dyn base3(<lang `<-`(bad, `$`(x, files_with_duplicated_aliases))>);
    goto L4(r17);
  D3():
    deopt 12 [r6];
  D5():
    deopt 16 [r15];
  D6():
    deopt 21 [x5];
  L5():
    goto L6(NULL);
  L6(r30):
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L42() else L43();
  L24():
    dx = getTryDispatchBuiltinValue(dr);
    goto L21(dx);
  L25():
    goto L1(r6);
  L28():
    goto L3(r15);
  L32():
    x6 = force? x5;
    checkMissing(x6);
    c2 = `is.object`(x6);
    if c2 then L34() else L35(x6);
  L38():
    unlist1 = ldf unlist;
    check L39() else D8();
  D8():
    deopt 28 [];
  L7(r32):
    c5 = `as.logical`(r32);
    if c5 then L50() else L8();
  L33(dx3):
    st bad = dx3;
    length1 = ldf length in base;
    r20 = dyn length1(dx3);
    check L37() else D7();
  L34():
    dr2 = tryDispatchBuiltin.1("$", x6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L36() else L35(dr2);
  L35(x8):
    r19 = `$`(x8, <sym files_with_duplicated_aliases>);
    goto L33(r19);
  L39():
    p5 = prom<V +>{
      lapply1 = ldf lapply;
      p3 = prom<V +>{
        sym4 = ldf names;
        base4 = ldf names in base;
        guard4 = `==`.4(sym4, base4);
        if guard4 then L1() else L2();
      L0(r22):
        return r22;
      L1():
        bad2 = ld bad;
        bad3 = force? bad2;
        checkMissing(bad3);
        names1 = ldf names in base;
        r23 = dyn names1(bad3);
        goto L0(r23);
      L2():
        r21 = dyn base4(<sym bad>);
        goto L0(r21);
      };
      p4 = prom<V +>{
        r25 = clos inner3369547807;
        return r25;
      };
      r27 = dyn lapply1(p3, p4);
      return r27;
    };
    r29 = dyn unlist1(p5);
    check L40() else D9();
  L42():
    x9 = ld x;
    check L44() else D10();
  L43():
    r31 = dyn base5(<lang `<-`(bad, `$`(x, files_without_aliases))>);
    goto L7(r31);
  D7():
    deopt 26 [r20];
  D9():
    deopt 30 [r29];
  D10():
    deopt 35 [x9];
  L8():
    goto L10(NULL);
  L10(r41):
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L59() else L60();
  L36():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L33(dx2);
  L37():
    goto L4(r20);
  L40():
    goto L6(r29);
  L44():
    x10 = force? x9;
    checkMissing(x10);
    c4 = `is.object`(x10);
    if c4 then L46() else L47(x10);
  L50():
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L51() else L52();
  L9(r36):
    goto L10(r36);
  L11(r43):
    c8 = `as.logical`(r43);
    if c8 then L67() else L12();
  L45(dx5):
    st bad = dx5;
    length2 = ldf length in base;
    r34 = dyn length2(dx5);
    check L49() else D11();
  L46():
    dr4 = tryDispatchBuiltin.1("$", x10);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L48() else L47(dr4);
  L47(x12):
    r33 = `$`(x12, <sym files_without_aliases>);
    goto L45(r33);
  L51():
    gettext = ldf gettext;
    check L53() else D12();
  L52():
    r35 = dyn base6(<lang gettext("Rd files without \\alias:")>, <lang .pretty_format(bad)>);
    goto L9(r35);
  L59():
    x13 = ld x;
    check L61() else D17();
  L60():
    r42 = dyn base7(<lang `<-`(bad, `$`(x, files_with_bad_package_aliases))>);
    goto L11(r42);
  D11():
    deopt 40 [r34];
  D12():
    deopt 44 [];
  D17():
    deopt 57 [x13];
  L12():
    goto L13(NULL);
  L13(r55):
    c9 = ldf c in base;
    r56 = dyn c9(r2, r16, r30, r41, r55);
    check L71() else D21();
  L48():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L45(dx4);
  L49():
    goto L7(r34);
  L53():
    r37 = dyn gettext("Rd files without \\alias:");
    check L54() else D13();
  L61():
    x14 = force? x13;
    checkMissing(x14);
    c7 = `is.object`(x14);
    if c7 then L63() else L64(x14);
  L67():
    unlist2 = ldf unlist;
    check L68() else D19();
  D13():
    deopt 46 [r37];
  D19():
    deopt 64 [];
  D21():
    deopt 70 [r56];
  L54():
    _pretty_format = ldf `.pretty_format`;
    check L55() else D14();
  L62(dx7):
    st bad = dx7;
    length3 = ldf length in base;
    r45 = dyn length3(dx7);
    check L66() else D18();
  L63():
    dr6 = tryDispatchBuiltin.1("$", x14);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L65() else L64(dr6);
  L64(x16):
    r44 = `$`(x16, <sym files_with_bad_package_aliases>);
    goto L62(r44);
  L68():
    p9 = prom<V +>{
      lapply2 = ldf lapply;
      p7 = prom<V +>{
        sym8 = ldf names;
        base8 = ldf names in base;
        guard8 = `==`.4(sym8, base8);
        if guard8 then L1() else L2();
      L0(r47):
        return r47;
      L1():
        bad6 = ld bad;
        bad7 = force? bad6;
        checkMissing(bad7);
        names2 = ldf names in base;
        r48 = dyn names2(bad7);
        goto L0(r48);
      L2():
        r46 = dyn base8(<sym bad>);
        goto L0(r46);
      };
      p8 = prom<V +>{
        r50 = clos inner3369547807;
        return r50;
      };
      r52 = dyn lapply2(p7, p8);
      return r52;
    };
    r54 = dyn unlist2(p9);
    check L69() else D20();
  L71():
    goto L0(r56);
  D14():
    deopt 48 [];
  D18():
    deopt 62 [r45];
  D20():
    deopt 66 [r54];
  L55():
    p6 = prom<V +>{
      bad4 = ld bad;
      bad5 = force? bad4;
      checkMissing(bad5);
      return bad5;
    };
    r39 = dyn _pretty_format(p6);
    check L56() else D15();
  L65():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L62(dx6);
  L66():
    goto L11(r45);
  L69():
    goto L13(r54);
  D15():
    deopt 50 [r39];
  L56():
    c6 = ldf c in base;
    r40 = dyn c6(r37, r39);
    check L57() else D16();
  D16():
    deopt 52 [r40];
  L57():
    goto L9(r40);
  }
}
fun inner3369547807(nm) {
  (reg nm:*) -+> V { var nm:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg gettextf:cls, reg nm1:*, reg nm2:V, reg p:p(V +), reg r3:V, reg _pretty_format:cls, reg bad:*, reg bad1:V, reg c:L, reg bad3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg nm3:*, reg nm4:V, reg __:cls, reg r4:V, reg p1:p(V +), reg r6:V, reg c1:cls, reg r7:V |
    mkenv;
    st nm = nm;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    gettextf = ldf gettextf;
    check L3() else D0();
  L2():
    r = dyn base(<lang gettextf("Rd files with duplicated name '%s':", nm)>, <lang .pretty_format(`[[`(bad, nm))>);
    goto L0(r);
  D0():
    deopt 3 [];
  L3():
    p = prom<V +>{
      nm1 = ld nm;
      nm2 = force? nm1;
      checkMissing(nm2);
      return nm2;
    };
    r3 = dyn gettextf("Rd files with duplicated name '%s':", p);
    check L4() else D1();
  D1():
    deopt 6 [r3];
  L4():
    _pretty_format = ldf `.pretty_format`;
    check L5() else D2();
  D2():
    deopt 8 [];
  L5():
    p1 = prom<V +>{
      bad = ld bad;
      bad1 = force? bad;
      checkMissing(bad1);
      c = `is.object`(bad1);
      if c then L1() else L2(bad1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", bad1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(bad3):
      nm3 = ld nm;
      nm4 = force? nm3;
      __ = ldf `[[` in base;
      r4 = dyn __(bad3, nm4);
      goto L0(r4);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r6 = dyn _pretty_format(p1);
    check L6() else D3();
  D3():
    deopt 10 [r6];
  L6():
    c1 = ldf c in base;
    r7 = dyn c1(r3, r6);
    check L7() else D4();
  D4():
    deopt 12 [r7];
  L7():
    goto L0(r7);
  }
}