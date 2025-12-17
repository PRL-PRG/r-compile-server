fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2733360753;
    st `transform.bibentry` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2733360753(_data, `...`) {
  (reg _data:*, reg ddd:dots) -+> V { var _data:*, var `...`:dots?, reg unique:cls, reg unlist:cls, reg lapply:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg _data1:*, reg _data2:V, reg unclass:cls, reg r2:V, reg p:p(V +), reg names:*, reg names1:V, reg p1:p(V +), reg r5:V, reg p2:p(V +), reg r7:V, reg p3:p(V +), reg r9:V, reg lapply1:cls, reg tags:*, reg tags1:V, reg p4:p(V +), reg r11:cls, reg p5:p(V +), reg r13:V, reg tags2:*, reg tags3:V, reg l:*, reg names__:cls, reg r14:V, reg eval:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r15:V, reg r16:V, reg substitute:cls, reg r17:V, reg p6:p(V +), reg vals:*, reg vals1:V, reg p7:p(V +), reg parent_frame:cls, reg r20:V, reg p8:p(V +), reg r22:V, reg setdiff:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r23:V, reg r24:V, reg e:*, reg e1:V, reg names2:cls, reg r25:V, reg p9:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r27:V, reg r28:V, reg c:cls, reg r29:V, reg p10:p(V +), reg r31:V, reg s:V, reg l1:I, reg i:I, reg i1:I, reg i2:I, reg c1:L, reg x:V, reg eval1:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r32:V, reg r33:V, reg call:cls, reg r34:V, reg p11:p(V +), reg r36:V, reg _in_:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r37:V, reg r38:V, reg e2:*, reg e3:V, reg names3:cls, reg r39:V, reg p12:p(V +), reg r41:V, reg c2:L, reg e4:*, reg e5:V, reg c3:L, reg e7:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r42:V, reg l2:*, reg attr__:cls, reg r43:V, reg _in_1:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r44:V, reg r45:V, reg e8:*, reg e9:V, reg names4:cls, reg r46:V, reg p13:p(V +), reg r48:V, reg c4:L, reg e10:*, reg e11:V, reg c5:L, reg e13:V, reg dr2:V, reg dc1:L, reg dx3:V, reg dx4:V, reg __1:cls, reg r49:V, reg l3:*, reg attr__1:cls, reg r50:V, reg _data3:*, reg _data4:V |
    mkenv;
    st _data = _data;
    st `...` = ddd;
    unique = ldf unique;
    check L10() else D0();
  D0():
    deopt 1 [];
  L10():
    p3 = prom<V +>{
      unlist = ldf unlist;
      p2 = prom<V +>{
        lapply = ldf lapply;
        p = prom<V +>{
          sym = ldf unclass;
          base = ldf unclass in base;
          guard = `==`.4(sym, base);
          if guard then L1() else L2();
        L0(r1):
          return r1;
        L1():
          _data1 = ld _data;
          _data2 = force? _data1;
          checkMissing(_data2);
          unclass = ldf unclass in base;
          r2 = dyn unclass(_data2);
          goto L0(r2);
        L2():
          r = dyn base(<sym _data>);
          goto L0(r);
        };
        p1 = prom<V +>{
          names = ld names;
          names1 = force? names;
          checkMissing(names1);
          return names1;
        };
        r5 = dyn lapply(p, p1);
        return r5;
      };
      r7 = dyn unlist(p2);
      return r7;
    };
    r9 = dyn unique(p3);
    check L11() else D1();
  D1():
    deopt 3 [r9];
  L11():
    st tags = r9;
    lapply1 = ldf lapply;
    check L12() else D2();
  D2():
    deopt 6 [];
  L12():
    p4 = prom<V +>{
      tags = ld tags;
      tags1 = force? tags;
      checkMissing(tags1);
      return tags1;
    };
    p5 = prom<V +>{
      r11 = clos inner3708401697;
      return r11;
    };
    r13 = dyn lapply1(p4, p5);
    check L13() else D3();
  D3():
    deopt 9 [r13];
  L13():
    st vals = r13;
    tags2 = ld tags;
    check L14() else D4();
  D4():
    deopt 11 [tags2];
  L14():
    tags3 = force? tags2;
    checkMissing(tags3);
    l = ld vals;
    names__ = ldf `names<-`;
    check L15() else D5();
  D5():
    deopt 14 [tags3, l, tags3];
  L15():
    r14 = dyn names__(l, NULL, tags3);
    check L16() else D6();
  D6():
    deopt 16 [tags3, r14];
  L16():
    st vals = r14;
    eval = ldf eval;
    check L17() else D7();
  D7():
    deopt 19 [];
  L17():
    p6 = prom<V +>{
      sym1 = ldf substitute;
      base1 = ldf substitute in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r16):
      return r16;
    L1():
      substitute = ldf substitute in base;
      r17 = dyn substitute(<lang list(...)>);
      goto L0(r17);
    L2():
      r15 = dyn base1(<lang list(...)>);
      goto L0(r15);
    };
    p7 = prom<V +>{
      vals = ld vals;
      vals1 = force? vals;
      checkMissing(vals1);
      return vals1;
    };
    p8 = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r20 = dyn parent_frame();
      return r20;
    };
    r22 = dyn eval(p6, p7, p8);
    check L18() else D8();
  D8():
    deopt 23 [r22];
  L18():
    st e = r22;
    setdiff = ldf setdiff;
    check L19() else D9();
  D9():
    deopt 26 [];
  L19():
    p9 = prom<V +>{
      sym2 = ldf names;
      base2 = ldf names in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r24):
      return r24;
    L1():
      e = ld e;
      e1 = force? e;
      checkMissing(e1);
      names2 = ldf names in base;
      r25 = dyn names2(e1);
      goto L0(r25);
    L2():
      r23 = dyn base2(<sym e>);
      goto L0(r23);
    };
    p10 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r28):
      return r28;
    L1():
      c = ldf c in base;
      r29 = dyn c("mheader", "mfooter");
      goto L0(r29);
    L2():
      r27 = dyn base3("mheader", "mfooter");
      goto L0(r27);
    };
    r31 = dyn setdiff(p9, p10);
    check L20() else D10();
  D10():
    deopt 29 [r31];
  L20():
    s = toForSeq(r31);
    l1 = length(s);
    i = 0;
    goto L2(i);
  L2(i1):
    i2 = `+`.1(i1, 1);
    c1 = `<`.1(l1, i2);
    if c1 then L1() else L3();
  L1():
    _in_ = ldf `%in%`;
    check L23() else D13();
  L3():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    eval1 = ldf eval;
    check L21() else D11();
  D11():
    deopt 33 [i2];
  D13():
    deopt 42 [];
  L21():
    p11 = prom<V +>{
      sym4 = ldf call;
      base4 = ldf call in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r33):
      return r33;
    L1():
      call = ldf call in base;
      r34 = dyn call("$<-", <sym _data>, <sym i>, <lang `[[`(e, i)>);
      goto L0(r34);
    L2():
      r32 = dyn base4("$<-", <sym _data>, <sym i>, <lang `[[`(e, i)>);
      goto L0(r32);
    };
    r36 = dyn eval1(p11);
    check L22() else D12();
  L23():
    p12 = prom<V +>{
      sym5 = ldf names;
      base5 = ldf names in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r38):
      return r38;
    L1():
      e2 = ld e;
      e3 = force? e2;
      checkMissing(e3);
      names3 = ldf names in base;
      r39 = dyn names3(e3);
      goto L0(r39);
    L2():
      r37 = dyn base5(<sym e>);
      goto L0(r37);
    };
    r41 = dyn _in_("mheader", p12);
    check L24() else D14();
  D12():
    deopt 35 [i2, r36];
  D14():
    deopt 45 [r41];
  L22():
    st _data = r36;
    goto L2(i2);
  L24():
    c2 = `as.logical`(r41);
    if c2 then L25() else L4();
  L4():
    goto L6();
  L6():
    _in_1 = ldf `%in%`;
    check L33() else D18();
  L25():
    e4 = ld e;
    check L26() else D15();
  D15():
    deopt 46 [e4];
  D18():
    deopt 60 [];
  L26():
    e5 = force? e4;
    checkMissing(e5);
    c3 = `is.object`(e5);
    if c3 then L27() else L28(e5);
  L33():
    p13 = prom<V +>{
      sym6 = ldf names;
      base6 = ldf names in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r45):
      return r45;
    L1():
      e8 = ld e;
      e9 = force? e8;
      checkMissing(e9);
      names4 = ldf names in base;
      r46 = dyn names4(e9);
      goto L0(r46);
    L2():
      r44 = dyn base6(<sym e>);
      goto L0(r44);
    };
    r48 = dyn _in_1("mfooter", p13);
    check L34() else D19();
  D19():
    deopt 63 [r48];
  L5(dx1):
    l2 = ld _data;
    attr__ = ldf `attr<-`;
    check L30() else D16();
  L27():
    dr = tryDispatchBuiltin.1("[[", e5);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L29() else L28(dr);
  L28(e7):
    __ = ldf `[[` in base;
    r42 = dyn __(e7, "mheader");
    goto L5(r42);
  L34():
    c4 = `as.logical`(r48);
    if c4 then L35() else L7();
  D16():
    deopt 52 [dx1, l2, dx1];
  L7():
    goto L9();
  L9():
    _data3 = ld _data;
    check L43() else D23();
  L29():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(dx);
  L30():
    r43 = dyn attr__(l2, NULL, "mheader", dx1);
    check L31() else D17();
  L35():
    e10 = ld e;
    check L36() else D20();
  D17():
    deopt 55 [dx1, r43];
  D20():
    deopt 64 [e10];
  D23():
    deopt 77 [_data3];
  L31():
    st _data = r43;
    goto L6();
  L36():
    e11 = force? e10;
    checkMissing(e11);
    c5 = `is.object`(e11);
    if c5 then L37() else L38(e11);
  L43():
    _data4 = force? _data3;
    checkMissing(_data4);
    popenv;
    return _data4;
  L8(dx4):
    l3 = ld _data;
    attr__1 = ldf `attr<-`;
    check L40() else D21();
  L37():
    dr2 = tryDispatchBuiltin.1("[[", e11);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L39() else L38(dr2);
  L38(e13):
    __1 = ldf `[[` in base;
    r49 = dyn __1(e13, "mfooter");
    goto L8(r49);
  D21():
    deopt 70 [dx4, l3, dx4];
  L39():
    dx3 = getTryDispatchBuiltinValue(dr2);
    goto L8(dx3);
  L40():
    r50 = dyn attr__1(l3, NULL, "mfooter", dx4);
    check L41() else D22();
  D22():
    deopt 73 [dx4, r50];
  L41():
    st _data = r50;
    goto L9();
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg eval:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg call:cls, reg r2:V, reg p:p(V +), reg r4:V |
    mkenv;
    st e = e;
    eval = ldf eval;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      sym = ldf call;
      base = ldf call in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      call = ldf call in base;
      r2 = dyn call("$", <sym _data>, <sym e>);
      goto L0(r2);
    L2():
      r = dyn base("$", <sym _data>, <sym e>);
      goto L0(r);
    };
    r4 = dyn eval(p);
    check L1() else D1();
  D1():
    deopt 3 [r4];
  L1():
    popenv;
    return r4;
  }
}