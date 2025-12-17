fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3391276322;
    st find_files_in_directories = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3391276322(basenames, dirnames) {
  (reg basenames:*, reg dirnames:*) -+> V { var basenames:*, var dirnames:*, reg dirnames1:*, reg dirnames2:V, reg c:L, reg dirnames4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg dir_exists:cls, reg dirnames5:*, reg dirnames6:V, reg p:p(V +), reg r1:V, reg __:cls, reg r2:V, reg normalizePath:cls, reg dirnames7:*, reg dirnames8:V, reg p1:p(V +), reg r4:V, reg character:cls, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg basenames1:*, reg basenames2:V, reg length:cls, reg r7:V, reg p2:p(V +), reg r9:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg out:*, reg out1:V, reg r12:I, reg dirnames9:*, reg dirnames10:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c1:L, reg x:V, reg file_path:cls, reg dir:*, reg dir1:V, reg p3:p(V +), reg basenames3:*, reg basenames4:V, reg c2:L, reg basenames6:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg pos:*, reg pos1:V, reg __1:cls, reg r14:V, reg p4:p(V +), reg r16:V, reg file_test:cls, reg paths:*, reg paths1:V, reg p5:p(V +), reg r18:V, reg paths2:*, reg paths3:V, reg c3:L, reg i6:I, reg paths5:V, reg dr4:V, reg dc2:L, reg dx4:V, reg i8:I, reg dx5:V, reg ind:*, reg ind1:V, reg __2:cls, reg r19:V, reg l1:*, reg c4:L, reg i10:I, reg dx7:V, reg l3:*, reg dr6:V, reg dc3:L, reg dx9:V, reg i12:I, reg dx11:V, reg pos2:*, reg pos3:V, reg c5:L, reg i14:I, reg dx14:V, reg l5:*, reg dx15:V, reg pos5:V, reg dr8:V, reg dc4:L, reg dx18:V, reg i16:I, reg dx19:V, reg l7:*, reg dx20:V, reg dx21:V, reg ind2:*, reg ind3:V, reg __3:cls, reg r20:V, reg ___:cls, reg r21:V, reg pos6:*, reg pos7:V, reg c6:L, reg i18:I, reg pos9:V, reg dr10:V, reg dc5:L, reg dx22:V, reg i20:I, reg dx23:V, reg ind4:*, reg ind5:V, reg r22:V, reg __4:cls, reg r23:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r24:V, reg i23:I, reg r25:V, reg pos10:*, reg pos11:V, reg length1:cls, reg r26:V, reg r27:V, reg c7:L, reg out2:*, reg out3:V |
    mkenv;
    st basenames = basenames;
    st dirnames = dirnames;
    dirnames1 = ld dirnames;
    check L12() else D0();
  D0():
    deopt 0 [dirnames1];
  L12():
    dirnames2 = force? dirnames1;
    checkMissing(dirnames2);
    c = `is.object`(dirnames2);
    if c then L13() else L14(dirnames2);
  L0(dx1):
    st dirnames = dx1;
    normalizePath = ldf normalizePath;
    check L18() else D3();
  L13():
    dr = tryDispatchBuiltin.1("[", dirnames2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L15() else L14(dr);
  L14(dirnames4):
    dir_exists = ldf `dir.exists`;
    check L16() else D1();
  D1():
    deopt 3 [dirnames4];
  D3():
    deopt 9 [];
  L15():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L16():
    p = prom<V +>{
      dirnames5 = ld dirnames;
      dirnames6 = force? dirnames5;
      checkMissing(dirnames6);
      return dirnames6;
    };
    r1 = dyn dir_exists(p);
    check L17() else D2();
  L18():
    p1 = prom<V +>{
      dirnames7 = ld dirnames;
      dirnames8 = force? dirnames7;
      checkMissing(dirnames8);
      return dirnames8;
    };
    r4 = dyn normalizePath(p1, "/");
    check L19() else D4();
  D2():
    deopt 5 [dirnames4, r1];
  D4():
    deopt 12 [r4];
  L17():
    __ = ldf `[` in base;
    r2 = dyn __(dirnames4, r1);
    goto L0(r2);
  L19():
    st dirnames = r4;
    character = ldf character;
    check L20() else D5();
  D5():
    deopt 15 [];
  L20():
    p2 = prom<V +>{
      sym = ldf length;
      base = ldf length in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r6):
      return r6;
    L1():
      basenames1 = ld basenames;
      basenames2 = force? basenames1;
      checkMissing(basenames2);
      length = ldf length in base;
      r7 = dyn length(basenames2);
      goto L0(r7);
    L2():
      r5 = dyn base(<sym basenames>);
      goto L0(r5);
    };
    r9 = dyn character(p2);
    check L21() else D6();
  D6():
    deopt 17 [r9];
  L21():
    st out = r9;
    sym1 = ldf seq_along;
    base1 = ldf seq_along in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L22() else L23();
  L1(r11):
    st pos = r11;
    dirnames9 = ld dirnames;
    check L25() else D8();
  L22():
    out = ld out;
    check L24() else D7();
  L23():
    r10 = dyn base1(<sym out>);
    goto L1(r10);
  D7():
    deopt 20 [out];
  D8():
    deopt 24 [dirnames9];
  L24():
    out1 = force? out;
    checkMissing(out1);
    r12 = seq_along(out1);
    goto L1(r12);
  L25():
    dirnames10 = force? dirnames9;
    checkMissing(dirnames10);
    s = toForSeq(dirnames10);
    l = length(s);
    i = 0;
    goto L2(i);
  L2(i1):
    i2 = `+`.1(i1, 1);
    c1 = `<`.1(l, i2);
    if c1 then L26() else L11();
  L9():
    out2 = ld out;
    check L56() else D21();
  L11():
    x = `[[`(s, i2, NULL, TRUE);
    st dir = x;
    file_path = ldf `file.path`;
    check L27() else D9();
  L26():
    goto L9();
  D9():
    deopt 27 [i2];
  D21():
    deopt 72 [out2];
  L27():
    p3 = prom<V +>{
      dir = ld dir;
      dir1 = force? dir;
      checkMissing(dir1);
      return dir1;
    };
    p4 = prom<V +>{
      basenames3 = ld basenames;
      basenames4 = force? basenames3;
      checkMissing(basenames4);
      c2 = `is.object`(basenames4);
      if c2 then L1() else L2(basenames4);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", basenames4);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(basenames6):
      pos = ld pos;
      pos1 = force? pos;
      __1 = ldf `[` in base;
      r14 = dyn __1(basenames6, pos1);
      goto L0(r14);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r16 = dyn file_path(p3, p4);
    check L28() else D10();
  L56():
    out3 = force? out2;
    checkMissing(out3);
    popenv;
    return out3;
  D10():
    deopt 30 [i2, r16];
  L28():
    st paths = r16;
    file_test = ldf file_test;
    check L29() else D11();
  D11():
    deopt 33 [i2];
  L29():
    p5 = prom<V +>{
      paths = ld paths;
      paths1 = force? paths;
      checkMissing(paths1);
      return paths1;
    };
    r18 = dyn file_test("-f", p5);
    check L30() else D12();
  D12():
    deopt 36 [i2, r18];
  L30():
    st ind = r18;
    paths2 = ld paths;
    check L31() else D13();
  D13():
    deopt 38 [i2, paths2];
  L31():
    paths3 = force? paths2;
    checkMissing(paths3);
    c3 = `is.object`(paths3);
    if c3 then L32() else L33(i2, paths3);
  L3(i8, dx5):
    l1 = ld out;
    c4 = `is.object`(l1);
    if c4 then L36() else L37(i8, dx5, l1);
  L32():
    dr4 = tryDispatchBuiltin.1("[", paths3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L34() else L33(i2, dr4);
  L33(i6, paths5):
    ind = ld ind;
    check L35() else D14();
  D14():
    deopt 40 [i6, paths5, ind];
  L4(i12, dx11):
    st out = dx11;
    pos6 = ld pos;
    check L44() else D17();
  L34():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L3(i2, dx4);
  L35():
    ind1 = force? ind;
    __2 = ldf `[` in base;
    r19 = dyn __2(paths5, ind1);
    goto L3(i6, r19);
  L36():
    dr6 = tryDispatchBuiltin.0("[<-", l1, dx5);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L38() else L37(i8, dx5, dr6);
  L37(i10, dx7, l3):
    pos2 = ld pos;
    check L39() else D15();
  D15():
    deopt 44 [i10, dx7, l3, dx5, pos2];
  D17():
    deopt 51 [i12, pos6];
  L38():
    dx9 = getTryDispatchBuiltinValue(dr6);
    goto L4(i8, dx9);
  L39():
    pos3 = force? pos2;
    checkMissing(pos3);
    c5 = `is.object`(pos3);
    if c5 then L40() else L41(i10, dx7, l3, dx5, pos3);
  L44():
    pos7 = force? pos6;
    checkMissing(pos7);
    c6 = `is.object`(pos7);
    if c6 then L45() else L46(i12, pos7);
  L5(i16, dx19, l7, dx20, dx21):
    ___ = ldf `[<-` in base;
    r21 = dyn ___(l7, dx20, dx21);
    goto L4(i16, r21);
  L6(i20, dx23):
    st pos = dx23;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L49() else L50();
  L40():
    dr8 = tryDispatchBuiltin.1("[", pos3);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L42() else L41(i10, dx7, l3, dx5, dr8);
  L41(i14, dx14, l5, dx15, pos5):
    ind2 = ld ind;
    check L43() else D16();
  L45():
    dr10 = tryDispatchBuiltin.1("[", pos7);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L47() else L46(i12, dr10);
  L46(i18, pos9):
    ind4 = ld ind;
    check L48() else D18();
  D16():
    deopt 46 [i14, dx14, l5, dx15, pos5, ind2];
  D18():
    deopt 53 [i18, pos9, ind4];
  L7(i23, r25):
    r27 = `!`(r25);
    c7 = `as.logical`(r27);
    if c7 then L53() else L8();
  L42():
    dx18 = getTryDispatchBuiltinValue(dr8);
    goto L5(i10, dx7, l3, dx5, dx18);
  L43():
    ind3 = force? ind2;
    __3 = ldf `[` in base;
    r20 = dyn __3(pos5, ind3);
    goto L5(i14, dx14, l5, dx15, r20);
  L47():
    dx22 = getTryDispatchBuiltinValue(dr10);
    goto L6(i12, dx22);
  L48():
    ind5 = force? ind4;
    checkMissing(ind5);
    r22 = `!`(ind5);
    __4 = ldf `[` in base;
    r23 = dyn __4(pos9, r22);
    goto L6(i18, r23);
  L49():
    pos10 = ld pos;
    check L51() else D19();
  L50():
    r24 = dyn base2(<sym pos>);
    goto L7(i20, r24);
  D19():
    deopt 60 [i20, pos10];
  L8():
    goto L2(i23);
  L51():
    pos11 = force? pos10;
    checkMissing(pos11);
    length1 = ldf length in base;
    r26 = dyn length1(pos11);
    check L52() else D20();
  L53():
    goto L9();
  D20():
    deopt 63 [i20, r26];
  L52():
    goto L7(i20, r26);
  }
}