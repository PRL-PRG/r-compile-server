fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3754818390;
    st RtangleWritedoc = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3754818390(object, chunk) {
  (reg object:*, reg chunk:*) -+> V { var object:*, var chunk:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg grep:cls, reg object1:*, reg object2:V, reg c:L, reg object4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg c1:L, reg dx3:V, reg dr2:V, reg dc1:L, reg dx4:V, reg dx5:V, reg r3:V, reg p:p(V +), reg chunk1:*, reg chunk2:V, reg p1:p(V +), reg r6:V, reg length:cls, reg r7:V, reg c2:L, reg sub:cls, reg paste0:cls, reg object5:*, reg object6:V, reg c3:L, reg object8:V, reg dr4:V, reg dc2:L, reg dx6:V, reg dx7:V, reg r8:V, reg c4:L, reg dx9:V, reg dr6:V, reg dc3:L, reg dx10:V, reg dx11:V, reg r9:V, reg p2:p(V +), reg r11:V, reg p3:p(V +), reg chunk3:*, reg chunk4:V, reg c5:L, reg chunk6:V, reg dr8:V, reg dc4:L, reg dx12:V, reg dx13:V, reg pos:*, reg pos1:V, reg c6:L, reg chunk8:V, reg pos3:V, reg dr10:V, reg dc5:L, reg dx14:V, reg chunk10:V, reg dx15:V, reg __:cls, reg r13:V, reg __1:cls, reg r14:V, reg p4:p(V +), reg r16:V, reg SweaveParseOptions:cls, reg opts:*, reg opts1:V, reg p5:p(V +), reg object9:*, reg object10:V, reg c7:L, reg object12:V, reg dr12:V, reg dc6:L, reg dx16:V, reg dx17:V, reg r18:V, reg p6:p(V +), reg RweaveLatexOptions:*, reg RweaveLatexOptions1:V, reg p7:p(V +), reg r21:V, reg l:*, reg c8:L, reg r23:V, reg l2:*, reg dr14:V, reg dc7:L, reg dx18:V, reg dx19:V, reg r26:V, reg sub1:cls, reg object13:*, reg object14:V, reg c9:L, reg object16:V, reg dr16:V, reg dc8:L, reg dx20:V, reg dx21:V, reg r27:V, reg c10:L, reg dx23:V, reg dr18:V, reg dc9:L, reg dx24:V, reg dx25:V, reg r28:V, reg p8:p(V +), reg chunk11:*, reg chunk12:V, reg c11:L, reg chunk14:V, reg dr20:V, reg dc10:L, reg dx26:V, reg dx27:V, reg pos4:*, reg pos5:V, reg c12:L, reg chunk16:V, reg pos7:V, reg dr22:V, reg dc11:L, reg dx28:V, reg chunk18:V, reg dx29:V, reg __2:cls, reg r30:V, reg __3:cls, reg r31:V, reg p9:p(V +), reg r33:V, reg l3:*, reg c13:L, reg r35:V, reg l5:*, reg dr24:V, reg dc12:L, reg dx30:V, reg dx31:V, reg pos8:*, reg pos9:V, reg c14:L, reg r40:V, reg l7:*, reg r41:V, reg pos11:V, reg dr26:V, reg dc13:L, reg dx32:V, reg r44:V, reg l9:*, reg r45:V, reg dx33:V, reg __4:cls, reg r46:V, reg ___:cls, reg r47:V, reg object17:*, reg object18:V |
    mkenv;
    st object = object;
    st chunk = chunk;
    goto L4();
  L4():
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r1):
    c2 = `as.logical`(r1);
    if c2 then L10() else L1();
  L5():
    grep = ldf grep;
    check L7() else D0();
  L6():
    r = dyn base(<lang `<-`(pos, grep(`$`(`$`(object, syntax), docopt), chunk))>);
    goto L0(r);
  D0():
    deopt 3 [];
  L1():
    object17 = ld object;
    check L29() else D10();
  L7():
    p = prom<V +>{
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      c = `is.object`(object2);
      if c then L1() else L2(object2);
    L0(dx1):
      c1 = `is.object`(dx1);
      if c1 then L5() else L6(dx1);
    L1():
      dr = tryDispatchBuiltin.1("$", object2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(object4):
      r2 = `$`(object4, <sym syntax>);
      goto L0(r2);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    L4(dx5):
      return dx5;
    L5():
      dr2 = tryDispatchBuiltin.1("$", dx1);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L7() else L6(dr2);
    L6(dx3):
      r3 = `$`(dx3, <sym docopt>);
      goto L4(r3);
    L7():
      dx4 = getTryDispatchBuiltinValue(dr2);
      goto L4(dx4);
    };
    p1 = prom<V +>{
      chunk1 = ld chunk;
      chunk2 = force? chunk1;
      checkMissing(chunk2);
      return chunk2;
    };
    r6 = dyn grep(p, p1);
    check L8() else D1();
  L10():
    sub = ldf sub;
    check L11() else D3();
  D1():
    deopt 6 [r6];
  D3():
    deopt 11 [];
  D10():
    deopt 43 [object17];
  L8():
    st pos = r6;
    length = ldf length in base;
    r7 = dyn length(r6);
    check L9() else D2();
  L11():
    p3 = prom<V +>{
      paste0 = ldf paste0;
      p2 = prom<V +>{
        object5 = ld object;
        object6 = force? object5;
        checkMissing(object6);
        c3 = `is.object`(object6);
        if c3 then L1() else L2(object6);
      L0(dx7):
        c4 = `is.object`(dx7);
        if c4 then L5() else L6(dx7);
      L1():
        dr4 = tryDispatchBuiltin.1("$", object6);
        dc2 = getTryDispatchBuiltinDispatched(dr4);
        if dc2 then L3() else L2(dr4);
      L2(object8):
        r8 = `$`(object8, <sym syntax>);
        goto L0(r8);
      L3():
        dx6 = getTryDispatchBuiltinValue(dr4);
        goto L0(dx6);
      L4(dx11):
        return dx11;
      L5():
        dr6 = tryDispatchBuiltin.1("$", dx7);
        dc3 = getTryDispatchBuiltinDispatched(dr6);
        if dc3 then L7() else L6(dr6);
      L6(dx9):
        r9 = `$`(dx9, <sym docopt>);
        goto L4(r9);
      L7():
        dx10 = getTryDispatchBuiltinValue(dr6);
        goto L4(dx10);
      };
      r11 = dyn paste0(".*", p2, ".*");
      return r11;
    };
    p4 = prom<V +>{
      chunk3 = ld chunk;
      chunk4 = force? chunk3;
      checkMissing(chunk4);
      c5 = `is.object`(chunk4);
      if c5 then L2() else L3(chunk4);
    L0(dx13):
      return dx13;
    L2():
      dr8 = tryDispatchBuiltin.1("[", chunk4);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L4() else L3(dr8);
    L3(chunk6):
      pos = ld pos;
      pos1 = force? pos;
      checkMissing(pos1);
      c6 = `is.object`(pos1);
      if c6 then L5() else L6(chunk6, pos1);
    L1(chunk10, dx15):
      __1 = ldf `[` in base;
      r14 = dyn __1(chunk10, dx15);
      goto L0(r14);
    L4():
      dx12 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx12);
    L5():
      dr10 = tryDispatchBuiltin.1("[", pos1);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L7() else L6(chunk6, dr10);
    L6(chunk8, pos3):
      __ = ldf `[` in base;
      r13 = dyn __(pos3, 1);
      goto L1(chunk8, r13);
    L7():
      dx14 = getTryDispatchBuiltinValue(dr10);
      goto L1(chunk6, dx14);
    };
    r16 = dyn sub(p3, "\\1", p4);
    check L12() else D4();
  L29():
    object18 = force? object17;
    checkMissing(object18);
    popenv;
    return object18;
  D2():
    deopt 9 [r7];
  D4():
    deopt 15 [r16];
  L9():
    goto L0(r7);
  L12():
    st opts = r16;
    SweaveParseOptions = ldf SweaveParseOptions;
    check L13() else D5();
  D5():
    deopt 18 [];
  L13():
    p5 = prom<V +>{
      opts = ld opts;
      opts1 = force? opts;
      checkMissing(opts1);
      return opts1;
    };
    p6 = prom<V +>{
      object9 = ld object;
      object10 = force? object9;
      checkMissing(object10);
      c7 = `is.object`(object10);
      if c7 then L1() else L2(object10);
    L0(dx17):
      return dx17;
    L1():
      dr12 = tryDispatchBuiltin.1("$", object10);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(object12):
      r18 = `$`(object12, <sym options>);
      goto L0(r18);
    L3():
      dx16 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx16);
    };
    p7 = prom<V +>{
      RweaveLatexOptions = ld RweaveLatexOptions;
      RweaveLatexOptions1 = force? RweaveLatexOptions;
      checkMissing(RweaveLatexOptions1);
      return RweaveLatexOptions1;
    };
    r21 = dyn SweaveParseOptions(p5, p6, p7);
    check L14() else D6();
  D6():
    deopt 22 [r21];
  L14():
    l = ld object;
    c8 = `is.object`(l);
    if c8 then L16() else L17(r21, l);
  L15(dx19):
    st object = dx19;
    sub1 = ldf sub;
    check L19() else D7();
  L16():
    dr14 = tryDispatchBuiltin.0("$<-", l, r21);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L18() else L17(r21, dr14);
  L17(r23, l2):
    r26 = `$<-`(l2, <sym options>, r21);
    goto L15(r26);
  D7():
    deopt 27 [];
  L18():
    dx18 = getTryDispatchBuiltinValue(dr14);
    goto L15(dx18);
  L19():
    p8 = prom<V +>{
      object13 = ld object;
      object14 = force? object13;
      checkMissing(object14);
      c9 = `is.object`(object14);
      if c9 then L1() else L2(object14);
    L0(dx21):
      c10 = `is.object`(dx21);
      if c10 then L5() else L6(dx21);
    L1():
      dr16 = tryDispatchBuiltin.1("$", object14);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2(dr16);
    L2(object16):
      r27 = `$`(object16, <sym syntax>);
      goto L0(r27);
    L3():
      dx20 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx20);
    L4(dx25):
      return dx25;
    L5():
      dr18 = tryDispatchBuiltin.1("$", dx21);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L7() else L6(dr18);
    L6(dx23):
      r28 = `$`(dx23, <sym docopt>);
      goto L4(r28);
    L7():
      dx24 = getTryDispatchBuiltinValue(dr18);
      goto L4(dx24);
    };
    p9 = prom<V +>{
      chunk11 = ld chunk;
      chunk12 = force? chunk11;
      checkMissing(chunk12);
      c11 = `is.object`(chunk12);
      if c11 then L2() else L3(chunk12);
    L0(dx27):
      return dx27;
    L2():
      dr20 = tryDispatchBuiltin.1("[", chunk12);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L4() else L3(dr20);
    L3(chunk14):
      pos4 = ld pos;
      pos5 = force? pos4;
      checkMissing(pos5);
      c12 = `is.object`(pos5);
      if c12 then L5() else L6(chunk14, pos5);
    L1(chunk18, dx29):
      __3 = ldf `[` in base;
      r31 = dyn __3(chunk18, dx29);
      goto L0(r31);
    L4():
      dx26 = getTryDispatchBuiltinValue(dr20);
      goto L0(dx26);
    L5():
      dr22 = tryDispatchBuiltin.1("[", pos5);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L7() else L6(chunk14, dr22);
    L6(chunk16, pos7):
      __2 = ldf `[` in base;
      r30 = dyn __2(pos7, 1);
      goto L1(chunk16, r30);
    L7():
      dx28 = getTryDispatchBuiltinValue(dr22);
      goto L1(chunk14, dx28);
    };
    r33 = dyn sub1(p8, "", p9);
    check L20() else D8();
  D8():
    deopt 31 [r33];
  L20():
    l3 = ld chunk;
    c13 = `is.object`(l3);
    if c13 then L21() else L22(r33, l3);
  L2(dx31):
    st chunk = dx31;
    goto L4();
  L21():
    dr24 = tryDispatchBuiltin.0("[<-", l3, r33);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L23() else L22(r33, dr24);
  L22(r35, l5):
    pos8 = ld pos;
    check L24() else D9();
  D9():
    deopt 33 [r35, l5, r33, pos8];
  L23():
    dx30 = getTryDispatchBuiltinValue(dr24);
    goto L2(dx30);
  L24():
    pos9 = force? pos8;
    checkMissing(pos9);
    c14 = `is.object`(pos9);
    if c14 then L25() else L26(r35, l5, r33, pos9);
  L3(r44, l9, r45, dx33):
    ___ = ldf `[<-` in base;
    r47 = dyn ___(l9, r45, dx33);
    goto L2(r47);
  L25():
    dr26 = tryDispatchBuiltin.1("[", pos9);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L27() else L26(r35, l5, r33, dr26);
  L26(r40, l7, r41, pos11):
    __4 = ldf `[` in base;
    r46 = dyn __4(pos11, 1);
    goto L3(r40, l7, r41, r46);
  L27():
    dx32 = getTryDispatchBuiltinValue(dr26);
    goto L3(r35, l5, r33, dx32);
  }
}