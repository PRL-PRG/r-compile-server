fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2630871216;
    st aspell_find_dictionaries = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2630871216(dictionaries, dirnames) {
  (reg dictionaries:*, reg dirnames:*) -+> V { var dictionaries:*, var dirnames:*, reg dirnames_isMissing:L, reg dirnames_orDefault:*, reg character:cls, reg r:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg dictionaries1:*, reg dictionaries2:V, reg as_character:cls, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg dictionaries3:*, reg dictionaries4:V, reg length:cls, reg r7:V, reg r8:V, reg c:L, reg character1:cls, reg r9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg file_path:cls, reg R_home:cls, reg r14:V, reg p1:p(V +), reg r16:V, reg dirnames1:*, reg dirnames2:V, reg c1:cls, reg r17:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg r19:V, reg endsWith:cls, reg dictionaries5:*, reg dictionaries6:V, reg p2:p(V +), reg r21:V, reg r22:V, reg any:cls, reg r23:V, reg c2:L, reg sprintf:cls, reg dictionaries7:*, reg dictionaries8:V, reg c3:L, reg dictionaries10:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ind:*, reg ind1:V, reg __:cls, reg r24:V, reg p3:p(V +), reg r26:V, reg l:*, reg c4:L, reg r28:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg r30:V, reg dx3:V, reg ind2:*, reg ind3:V, reg ___:cls, reg r31:V, reg character2:cls, reg n:*, reg n1:V, reg p4:p(V +), reg r34:V, reg grepl:cls, reg _Platform:*, reg _Platform1:V, reg c5:L, reg _Platform3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r35:V, reg p5:p(V +), reg dictionaries11:*, reg dictionaries12:V, reg p6:p(V +), reg r38:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r39:V, reg r40:V, reg which:cls, reg ind4:*, reg ind5:V, reg p7:p(V +), reg r42:V, reg length1:cls, reg r43:V, reg c6:L, reg pos:*, reg pos1:V, reg c7:L, reg pos3:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg file_test:cls, reg dictionaries13:*, reg dictionaries14:V, reg c8:L, reg dictionaries16:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg pos4:*, reg pos5:V, reg __1:cls, reg r44:V, reg p8:p(V +), reg r46:V, reg __2:cls, reg r47:V, reg normalizePath:cls, reg dictionaries17:*, reg dictionaries18:V, reg c9:L, reg dictionaries20:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg pos6:*, reg pos7:V, reg __3:cls, reg r48:V, reg p9:p(V +), reg r50:V, reg l3:*, reg c10:L, reg r52:V, reg l5:*, reg dr12:V, reg dc6:L, reg dx12:V, reg r54:V, reg dx13:V, reg pos8:*, reg pos9:V, reg ___1:cls, reg r55:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r57:V, reg r58:V, reg which1:cls, reg ind6:*, reg ind7:V, reg r59:V, reg p10:p(V +), reg r61:V, reg length2:cls, reg r62:V, reg c11:L, reg find_files_in_directories:cls, reg dictionaries21:*, reg dictionaries22:V, reg c12:L, reg dictionaries24:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg pos10:*, reg pos11:V, reg __4:cls, reg r63:V, reg p11:p(V +), reg dirnames3:*, reg dirnames4:V, reg p12:p(V +), reg r66:V, reg l6:*, reg c13:L, reg r68:V, reg l8:*, reg dr16:V, reg dc8:L, reg dx16:V, reg r70:V, reg dx17:V, reg pos12:*, reg pos13:V, reg ___2:cls, reg r71:V, reg out:*, reg out1:V |
    mkenv;
    st dictionaries = dictionaries;
    dirnames_isMissing = missing.0(dirnames);
    if dirnames_isMissing then L0() else L1(dirnames);
  L0():
    p = prom<V +>{
      character = ldf character;
      r = dyn character();
      return r;
    };
    goto L1(p);
  L1(dirnames_orDefault):
    st dirnames = dirnames_orDefault;
    sym = ldf `as.character`;
    base = ldf `as.character` in base;
    guard = `==`.4(sym, base);
    if guard then L20() else L21();
  L2(r3):
    st dictionaries = r3;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L24() else L25();
  L20():
    dictionaries1 = ld dictionaries;
    check L22() else D0();
  L21():
    r2 = dyn base(<sym dictionaries>);
    goto L2(r2);
  D0():
    deopt 2 [dictionaries1];
  L3(r6):
    st n = r6;
    r8 = `!`(r6);
    c = `as.logical`(r8);
    if c then L28() else L4();
  L22():
    dictionaries2 = force? dictionaries1;
    checkMissing(dictionaries2);
    as_character = ldf `as.character` in base;
    r4 = dyn as_character(dictionaries2);
    check L23() else D1();
  L24():
    dictionaries3 = ld dictionaries;
    check L26() else D2();
  L25():
    r5 = dyn base1(<sym dictionaries>);
    goto L3(r5);
  D1():
    deopt 5 [r4];
  D2():
    deopt 9 [dictionaries3];
  L4():
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L33() else L34();
  L23():
    goto L2(r4);
  L26():
    dictionaries4 = force? dictionaries3;
    checkMissing(dictionaries4);
    length = ldf length in base;
    r7 = dyn length(dictionaries4);
    check L27() else D3();
  L28():
    character1 = ldf character;
    check L29() else D4();
  D3():
    deopt 12 [r7];
  D4():
    deopt 16 [];
  L6(r13):
    st dirnames = r13;
    sym3 = ldf any;
    base3 = ldf any in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L39() else L40();
  L27():
    goto L3(r7);
  L29():
    r9 = dyn character1();
    check L30() else D5();
  L33():
    file_path = ldf `file.path`;
    check L35() else D6();
  L34():
    r12 = dyn base2(<lang file.path(R.home("share"), "dictionaries")>, <sym dirnames>);
    goto L6(r12);
  D5():
    deopt 17 [r9];
  D6():
    deopt 24 [];
  L7(r19):
    c2 = `as.logical`(r19);
    if c2 then L44() else L8();
  L30():
    popenv;
    return r9;
  L35():
    p1 = prom<V +>{
      R_home = ldf `R.home`;
      r14 = dyn R_home("share");
      return r14;
    };
    r16 = dyn file_path(p1, "dictionaries");
    check L36() else D7();
  L39():
    endsWith = ldf endsWith;
    check L41() else D10();
  L40():
    r18 = dyn base3(<lang `<-`(ind, `!`(endsWith(dictionaries, ".rds")))>);
    goto L7(r18);
  D7():
    deopt 27 [r16];
  D10():
    deopt 36 [];
  L8():
    goto L10();
  L10():
    character2 = ldf character;
    check L52() else D16();
  L36():
    dirnames1 = ld dirnames;
    check L37() else D8();
  L41():
    p2 = prom<V +>{
      dictionaries5 = ld dictionaries;
      dictionaries6 = force? dictionaries5;
      checkMissing(dictionaries6);
      return dictionaries6;
    };
    r21 = dyn endsWith(p2, ".rds");
    check L42() else D11();
  L44():
    sprintf = ldf sprintf;
    check L45() else D13();
  D8():
    deopt 28 [dirnames1];
  D11():
    deopt 39 [r21];
  D13():
    deopt 45 [];
  D16():
    deopt 57 [];
  L37():
    dirnames2 = force? dirnames1;
    checkMissing(dirnames2);
    c1 = ldf c in base;
    r17 = dyn c1(r16, dirnames2);
    check L38() else D9();
  L42():
    r22 = `!`(r21);
    st ind = r22;
    any = ldf any in base;
    r23 = dyn any(r22);
    check L43() else D12();
  L45():
    p3 = prom<V +>{
      dictionaries7 = ld dictionaries;
      dictionaries8 = force? dictionaries7;
      checkMissing(dictionaries8);
      c3 = `is.object`(dictionaries8);
      if c3 then L1() else L2(dictionaries8);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", dictionaries8);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(dictionaries10):
      ind = ld ind;
      ind1 = force? ind;
      __ = ldf `[` in base;
      r24 = dyn __(dictionaries10, ind1);
      goto L0(r24);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r26 = dyn sprintf("%s.rds", p3);
    check L46() else D14();
  L52():
    p4 = prom<V +>{
      n = ld n;
      n1 = force? n;
      checkMissing(n1);
      return n1;
    };
    r34 = dyn character2(p4);
    check L53() else D17();
  D9():
    deopt 31 [r17];
  D12():
    deopt 43 [r23];
  D14():
    deopt 48 [r26];
  D17():
    deopt 59 [r34];
  L38():
    goto L6(r17);
  L43():
    goto L7(r23);
  L46():
    l = ld dictionaries;
    c4 = `is.object`(l);
    if c4 then L47() else L48(r26, l);
  L53():
    st out = r34;
    grepl = ldf grepl;
    check L54() else D18();
  D18():
    deopt 62 [];
  L9(r30, dx3):
    st dictionaries = dx3;
    goto L10();
  L47():
    dr2 = tryDispatchBuiltin.0("[<-", l, r26);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L49() else L48(r26, dr2);
  L48(r28, l2):
    ind2 = ld ind;
    check L50() else D15();
  L54():
    p5 = prom<V +>{
      _Platform = ld `.Platform`;
      _Platform1 = force? _Platform;
      checkMissing(_Platform1);
      c5 = `is.object`(_Platform1);
      if c5 then L1() else L2(_Platform1);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("$", _Platform1);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(_Platform3):
      r35 = `$`(_Platform3, <sym file.sep>);
      goto L0(r35);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p6 = prom<V +>{
      dictionaries11 = ld dictionaries;
      dictionaries12 = force? dictionaries11;
      checkMissing(dictionaries12);
      return dictionaries12;
    };
    r38 = dyn grepl[, , fixed](p5, p6, TRUE);
    check L55() else D19();
  D15():
    deopt 50 [r28, l2, r26, ind2];
  D19():
    deopt 67 [r38];
  L49():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L9(r26, dx2);
  L50():
    ind3 = force? ind2;
    ___ = ldf `[<-` in base;
    r31 = dyn ___(l2, r26, ind3);
    goto L9(r28, r31);
  L55():
    st ind = r38;
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L56() else L57();
  L11(r40):
    c6 = `as.logical`(r40);
    if c6 then L61() else L12();
  L56():
    which = ldf which;
    check L58() else D20();
  L57():
    r39 = dyn base4(<lang `<-`(pos, which(ind))>);
    goto L11(r39);
  D20():
    deopt 72 [];
  L12():
    goto L15();
  L15():
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L75() else L76();
  L58():
    p7 = prom<V +>{
      ind4 = ld ind;
      ind5 = force? ind4;
      checkMissing(ind5);
      return ind5;
    };
    r42 = dyn which(p7);
    check L59() else D21();
  L61():
    pos = ld pos;
    check L62() else D23();
  D21():
    deopt 74 [r42];
  D23():
    deopt 78 [pos];
  L16(r58):
    c11 = `as.logical`(r58);
    if c11 then L80() else L17();
  L59():
    st pos = r42;
    length1 = ldf length in base;
    r43 = dyn length1(r42);
    check L60() else D22();
  L62():
    pos1 = force? pos;
    checkMissing(pos1);
    c7 = `is.object`(pos1);
    if c7 then L63() else L64(pos1);
  L75():
    which1 = ldf which;
    check L77() else D29();
  L76():
    r57 = dyn base5(<lang `<-`(pos, which(`!`(ind)))>);
    goto L16(r57);
  D22():
    deopt 77 [r43];
  D29():
    deopt 102 [];
  L13(dx7):
    st pos = dx7;
    normalizePath = ldf normalizePath;
    check L68() else D26();
  L17():
    goto L19();
  L19():
    out = ld out;
    check L88() else D35();
  L60():
    goto L11(r43);
  L63():
    dr6 = tryDispatchBuiltin.1("[", pos1);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L65() else L64(dr6);
  L64(pos3):
    file_test = ldf file_test;
    check L66() else D24();
  L77():
    p10 = prom<V +>{
      ind6 = ld ind;
      ind7 = force? ind6;
      checkMissing(ind7);
      r59 = `!`(ind7);
      return r59;
    };
    r61 = dyn which1(p10);
    check L78() else D30();
  L80():
    find_files_in_directories = ldf find_files_in_directories;
    check L81() else D32();
  D24():
    deopt 81 [pos3];
  D26():
    deopt 88 [];
  D30():
    deopt 104 [r61];
  D32():
    deopt 109 [];
  D35():
    deopt 120 [out];
  L65():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L13(dx6);
  L66():
    p8 = prom<V +>{
      dictionaries13 = ld dictionaries;
      dictionaries14 = force? dictionaries13;
      checkMissing(dictionaries14);
      c8 = `is.object`(dictionaries14);
      if c8 then L1() else L2(dictionaries14);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("[", dictionaries14);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(dictionaries16):
      pos4 = ld pos;
      pos5 = force? pos4;
      __1 = ldf `[` in base;
      r44 = dyn __1(dictionaries16, pos5);
      goto L0(r44);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    r46 = dyn file_test("-f", p8);
    check L67() else D25();
  L68():
    p9 = prom<V +>{
      dictionaries17 = ld dictionaries;
      dictionaries18 = force? dictionaries17;
      checkMissing(dictionaries18);
      c9 = `is.object`(dictionaries18);
      if c9 then L1() else L2(dictionaries18);
    L0(dx11):
      return dx11;
    L1():
      dr10 = tryDispatchBuiltin.1("[", dictionaries18);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(dictionaries20):
      pos6 = ld pos;
      pos7 = force? pos6;
      __3 = ldf `[` in base;
      r48 = dyn __3(dictionaries20, pos7);
      goto L0(r48);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx10);
    };
    r50 = dyn normalizePath(p9, "/");
    check L69() else D27();
  L78():
    st pos = r61;
    length2 = ldf length in base;
    r62 = dyn length2(r61);
    check L79() else D31();
  L81():
    p11 = prom<V +>{
      dictionaries21 = ld dictionaries;
      dictionaries22 = force? dictionaries21;
      checkMissing(dictionaries22);
      c12 = `is.object`(dictionaries22);
      if c12 then L1() else L2(dictionaries22);
    L0(dx15):
      return dx15;
    L1():
      dr14 = tryDispatchBuiltin.1("[", dictionaries22);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2(dr14);
    L2(dictionaries24):
      pos10 = ld pos;
      pos11 = force? pos10;
      __4 = ldf `[` in base;
      r63 = dyn __4(dictionaries24, pos11);
      goto L0(r63);
    L3():
      dx14 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx14);
    };
    p12 = prom<V +>{
      dirnames3 = ld dirnames;
      dirnames4 = force? dirnames3;
      checkMissing(dirnames4);
      return dirnames4;
    };
    r66 = dyn find_files_in_directories(p11, p12);
    check L82() else D33();
  L88():
    out1 = force? out;
    checkMissing(out1);
    popenv;
    return out1;
  D25():
    deopt 84 [pos3, r46];
  D27():
    deopt 91 [r50];
  D31():
    deopt 107 [r62];
  D33():
    deopt 112 [r66];
  L67():
    __2 = ldf `[` in base;
    r47 = dyn __2(pos3, r46);
    goto L13(r47);
  L69():
    l3 = ld out;
    c10 = `is.object`(l3);
    if c10 then L70() else L71(r50, l3);
  L79():
    goto L16(r62);
  L82():
    l6 = ld out;
    c13 = `is.object`(l6);
    if c13 then L83() else L84(r66, l6);
  L14(r54, dx13):
    st out = dx13;
    goto L15();
  L18(r70, dx17):
    st out = dx17;
    goto L19();
  L70():
    dr12 = tryDispatchBuiltin.0("[<-", l3, r50);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L72() else L71(r50, dr12);
  L71(r52, l5):
    pos8 = ld pos;
    check L73() else D28();
  L83():
    dr16 = tryDispatchBuiltin.0("[<-", l6, r66);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L85() else L84(r66, dr16);
  L84(r68, l8):
    pos12 = ld pos;
    check L86() else D34();
  D28():
    deopt 93 [r52, l5, r50, pos8];
  D34():
    deopt 114 [r68, l8, r66, pos12];
  L72():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L14(r50, dx12);
  L73():
    pos9 = force? pos8;
    ___1 = ldf `[<-` in base;
    r55 = dyn ___1(l5, r50, pos9);
    goto L14(r52, r55);
  L85():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L18(r66, dx16);
  L86():
    pos13 = force? pos12;
    ___2 = ldf `[<-` in base;
    r71 = dyn ___2(l8, r66, pos13);
    goto L18(r68, r71);
  }
}