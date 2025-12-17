fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3043347847;
    st `.resolveSuperclasses` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3043347847(classDef, ext, where, conflicts) {
  (reg classDef:*, reg ext:*, reg where:*, reg conflicts:*) -+> V { var classDef:*, var ext:*, var where:*, var conflicts:*, reg conflicts_isMissing:L, reg conflicts_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg ext1:*, reg ext2:V, reg attr:cls, reg r2:V, reg p:p(V +), reg r4:cls, reg r5:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg ext3:*, reg ext4:V, reg names:cls, reg r8:V, reg unique:cls, reg what:*, reg what1:V, reg c:L, reg what3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg duplicated:cls, reg what4:*, reg what5:V, reg p1:p(V +), reg r10:V, reg __:cls, reg r11:V, reg p2:p(V +), reg r13:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg r15:V, reg dups:*, reg dups1:V, reg length:cls, reg r16:V, reg r17:V, reg c1:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg r19:V, reg what6:*, reg what7:V, reg dups2:*, reg dups3:V, reg match:cls, reg r20:V, reg r21:V, reg _condExts:cls, reg ext5:*, reg ext6:V, reg p3:p(V +), reg r23:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r24:V, reg r25:V, reg conditionals:*, reg conditionals1:V, reg any:cls, reg r26:V, reg c2:L, reg l:*, reg c3:L, reg r28:L, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg conditionals2:*, reg conditionals3:V, reg ___:cls, reg r31:V, reg what8:*, reg what9:V, reg c4:L, reg what11:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg affected:*, reg affected1:V, reg __1:cls, reg r32:V, reg unique1:cls, reg what12:*, reg what13:V, reg c5:L, reg what15:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg duplicated1:cls, reg what16:*, reg what17:V, reg p4:p(V +), reg r34:V, reg __2:cls, reg r35:V, reg p5:p(V +), reg r37:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r38:V, reg r39:V, reg dups4:*, reg dups5:V, reg length1:cls, reg r40:V, reg r41:V, reg c6:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r42:V, reg r43:V, reg conflicts1:*, reg conflicts2:V, reg length2:cls, reg r44:V, reg r45:V, reg c7:L, reg unique2:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r46:V, reg r47:V, reg conflicts3:*, reg conflicts4:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r48:V, reg r49:V, reg ext7:*, reg ext8:V, reg attr1:cls, reg r50:V, reg c8:cls, reg r51:V, reg p6:p(V +), reg r53:V, reg l3:*, reg attr__:cls, reg r54:V, reg ext9:*, reg ext10:V, reg vapply:cls, reg __3:cls, reg r59:V, reg p7:p(V +), reg r61:cls, reg p8:p(V +), reg r63:V, reg unique3:cls, reg sym9:cls, reg base9:cls, reg guard9:L, reg r64:V, reg r65:V, reg __4:cls, reg r66:V, reg c9:L, reg r68:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg directSupers:*, reg directSupers1:V, reg __5:cls, reg r69:V, reg names1:cls, reg r70:V, reg p9:p(V +), reg r72:V, reg lapply:cls, reg directSupers2:*, reg directSupers3:V, reg p10:p(V +), reg _noncondExtsClass:*, reg _noncondExtsClass1:V, reg p11:p(V +), reg r75:V, reg directSupers4:*, reg directSupers5:V, reg l4:*, reg names__:cls, reg r76:V, reg _choosePos:cls, reg __6:cls, reg r77:V, reg p12:p(V +), reg what18:*, reg what19:V, reg p13:p(V +), reg superExts:*, reg superExts1:V, reg p14:p(V +), reg affected2:*, reg affected3:V, reg p15:p(V +), reg r82:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r83:V, reg r84:V, reg retain:*, reg retain1:V, reg is_list:cls, reg r85:V, reg c10:L, reg retain2:*, reg retain3:V, reg c11:L, reg retain5:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg __7:cls, reg r86:V, reg unique4:cls, reg sym11:cls, reg base11:cls, reg guard11:L, reg r87:V, reg r88:V, reg conflicts5:*, reg conflicts6:V, reg these:*, reg these1:V, reg c12:cls, reg r89:V, reg p16:p(V +), reg r91:V, reg retain6:*, reg retain7:V, reg c13:L, reg retain9:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg __8:cls, reg r92:V, reg l5:*, reg c14:L, reg r94:L, reg l7:*, reg dr14:V, reg dc7:L, reg dx15:V, reg dx16:V, reg retain10:*, reg retain11:V, reg ___1:cls, reg r97:V, reg ext11:*, reg ext12:V, reg c15:L, reg ext14:V, reg dr16:V, reg dc8:L, reg dx17:V, reg dx18:V, reg affected4:*, reg affected5:V, reg r98:V, reg __9:cls, reg r99:V, reg conflicts7:*, reg conflicts8:V, reg l8:*, reg attr__1:cls, reg r100:V, reg ext15:*, reg ext16:V |
    mkenv;
    st classDef = classDef;
    st ext = ext;
    st where = where;
    conflicts_isMissing = missing.0(conflicts);
    if conflicts_isMissing then L0() else L1(conflicts);
  L0():
    p = prom<V +>{
      sym = ldf attr;
      base = ldf attr in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      ext1 = ld ext;
      ext2 = force? ext1;
      checkMissing(ext2);
      attr = ldf attr in base;
      r2 = dyn attr(ext2, "conflicts");
      goto L0(r2);
    L2():
      r = dyn base(<sym ext>, "conflicts");
      goto L0(r);
    };
    goto L1(p);
  L1(conflicts_orDefault):
    st conflicts = conflicts_orDefault;
    r4 = clos inner1215298303;
    st `.condExts` = r4;
    r5 = clos inner3618118985;
    st `.noncondExtsClass` = r5;
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L25() else L26();
  L2(r7):
    st what = r7;
    unique = ldf unique;
    check L29() else D2();
  L25():
    ext3 = ld ext;
    check L27() else D0();
  L26():
    r6 = dyn base1(<sym ext>);
    goto L2(r6);
  D0():
    deopt 8 [ext3];
  D2():
    deopt 14 [];
  L27():
    ext4 = force? ext3;
    checkMissing(ext4);
    names = ldf names in base;
    r8 = dyn names(ext4);
    check L28() else D1();
  L29():
    p2 = prom<V +>{
      what = ld what;
      what1 = force? what;
      checkMissing(what1);
      c = `is.object`(what1);
      if c then L1() else L2(what1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", what1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(what3):
      duplicated = ldf duplicated;
      p1 = prom<V +>{
        what4 = ld what;
        what5 = force? what4;
        checkMissing(what5);
        return what5;
      };
      r10 = dyn duplicated(p1);
      __ = ldf `[` in base;
      r11 = dyn __(what3, r10);
      goto L0(r11);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r13 = dyn unique(p2);
    check L30() else D3();
  D1():
    deopt 11 [r8];
  D3():
    deopt 16 [r13];
  L28():
    goto L2(r8);
  L30():
    st dups = r13;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L31() else L32();
  L3(r15):
    r17 = `>`(r15, 0.0);
    c1 = `as.logical`(r17);
    if c1 then L35() else L4();
  L31():
    dups = ld dups;
    check L33() else D4();
  L32():
    r14 = dyn base2(<sym dups>);
    goto L3(r14);
  D4():
    deopt 20 [dups];
  L4():
    goto L24();
  L24():
    conflicts7 = ld conflicts;
    check L115() else D47();
  L33():
    dups1 = force? dups;
    checkMissing(dups1);
    length = ldf length in base;
    r16 = dyn length(dups1);
    check L34() else D5();
  L35():
    sym3 = ldf match;
    base3 = ldf match in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L36() else L37();
  D5():
    deopt 23 [r16];
  D47():
    deopt 177 [conflicts7];
  L5(r19):
    r21 = `>`(r19, 0.0);
    st affected = r21;
    _condExts = ldf `.condExts`;
    check L41() else D9();
  L34():
    goto L3(r16);
  L36():
    what6 = ld what;
    check L38() else D6();
  L37():
    r18 = dyn base3(<sym what>, <sym dups>, 0.0);
    goto L5(r18);
  L115():
    conflicts8 = force? conflicts7;
    checkMissing(conflicts8);
    l8 = ld ext;
    attr__1 = ldf `attr<-`;
    check L116() else D48();
  D6():
    deopt 28 [what6];
  D9():
    deopt 40 [];
  D48():
    deopt 180 [conflicts8, l8, conflicts8];
  L38():
    what7 = force? what6;
    checkMissing(what7);
    dups2 = ld dups;
    check L39() else D7();
  L41():
    p3 = prom<V +>{
      ext5 = ld ext;
      ext6 = force? ext5;
      checkMissing(ext6);
      return ext6;
    };
    r23 = dyn _condExts(p3);
    check L42() else D10();
  L116():
    r100 = dyn attr__1(l8, NULL, "conflicts", conflicts8);
    check L117() else D49();
  D7():
    deopt 30 [dups2];
  D10():
    deopt 42 [r23];
  D49():
    deopt 183 [conflicts8, r100];
  L39():
    dups3 = force? dups2;
    checkMissing(dups3);
    match = ldf match in base;
    r20 = dyn match(what7, dups3, 0.0, NULL);
    check L40() else D8();
  L42():
    st conditionals = r23;
    sym4 = ldf any;
    base4 = ldf any in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L43() else L44();
  L117():
    st ext = r100;
    ext15 = ld ext;
    check L118() else D50();
  D8():
    deopt 35 [r20];
  D50():
    deopt 185 [ext15];
  L6(r25):
    c2 = `as.logical`(r25);
    if c2 then L47() else L7();
  L40():
    goto L5(r20);
  L43():
    conditionals = ld conditionals;
    check L45() else D11();
  L44():
    r24 = dyn base4(<sym conditionals>);
    goto L6(r24);
  L118():
    ext16 = force? ext15;
    checkMissing(ext16);
    popenv;
    return ext16;
  D11():
    deopt 46 [conditionals];
  L7():
    goto L16();
  L16():
    vapply = ldf vapply;
    check L78() else D27();
  L45():
    conditionals1 = force? conditionals;
    checkMissing(conditionals1);
    any = ldf any in base;
    r26 = dyn any(conditionals1);
    check L46() else D12();
  L47():
    l = ld affected;
    c3 = `is.object`(l);
    if c3 then L48() else L49(FALSE, l);
  D12():
    deopt 49 [r26];
  D27():
    deopt 104 [];
  L8(dx3):
    st affected = dx3;
    what8 = ld what;
    check L52() else D14();
  L46():
    goto L6(r26);
  L48():
    dr2 = tryDispatchBuiltin.0("[<-", l, FALSE);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L50() else L49(FALSE, dr2);
  L49(r28, l2):
    conditionals2 = ld conditionals;
    check L51() else D13();
  L78():
    p7 = prom<V +>{
      __3 = ldf `@` in base;
      r59 = dyn __3(<sym classDef>, <sym contains>);
      return r59;
    };
    p8 = prom<V +>{
      r61 = clos inner2501545716;
      return r61;
    };
    r63 = dyn vapply(p7, p8, NA_LGL);
    check L79() else D28();
  D13():
    deopt 53 [r28, l2, FALSE, conditionals2];
  D14():
    deopt 57 [what8];
  D28():
    deopt 108 [r63];
  L50():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L8(dx2);
  L51():
    conditionals3 = force? conditionals2;
    ___ = ldf `[<-` in base;
    r31 = dyn ___(l2, FALSE, conditionals3);
    goto L8(r31);
  L52():
    what9 = force? what8;
    checkMissing(what9);
    c4 = `is.object`(what9);
    if c4 then L53() else L54(what9);
  L79():
    st directSupers = r63;
    unique3 = ldf unique;
    check L80() else D29();
  D29():
    deopt 111 [];
  L9(dx5):
    st what2 = dx5;
    unique1 = ldf unique;
    check L57() else D16();
  L53():
    dr4 = tryDispatchBuiltin.1("[", what9);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L55() else L54(dr4);
  L54(what11):
    affected = ld affected;
    check L56() else D15();
  L80():
    p9 = prom<V +>{
      sym9 = ldf names;
      base9 = ldf names in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L2() else L3();
    L0(r65):
      return r65;
    L2():
      __4 = ldf `@` in base;
      r66 = dyn __4(<sym classDef>, <sym contains>);
      c9 = `is.object`(r66);
      if c9 then L4() else L5(r66);
    L3():
      r64 = dyn base9(<lang `[`(`@`(classDef, contains), directSupers)>);
      goto L0(r64);
    L1(dx9):
      names1 = ldf names in base;
      r70 = dyn names1(dx9);
      goto L0(r70);
    L4():
      dr8 = tryDispatchBuiltin.1("[", r66);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L6() else L5(dr8);
    L5(r68):
      directSupers = ld directSupers;
      directSupers1 = force? directSupers;
      __5 = ldf `[` in base;
      r69 = dyn __5(r68, directSupers1);
      goto L1(r69);
    L6():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L1(dx8);
    };
    r72 = dyn unique3(p9);
    check L81() else D30();
  D15():
    deopt 59 [what11, affected];
  D16():
    deopt 64 [];
  D30():
    deopt 113 [r72];
  L55():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L9(dx4);
  L56():
    affected1 = force? affected;
    __1 = ldf `[` in base;
    r32 = dyn __1(what11, affected1);
    goto L9(r32);
  L57():
    p5 = prom<V +>{
      what12 = ld what2;
      what13 = force? what12;
      checkMissing(what13);
      c5 = `is.object`(what13);
      if c5 then L1() else L2(what13);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[", what13);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(what15):
      duplicated1 = ldf duplicated;
      p4 = prom<V +>{
        what16 = ld what2;
        what17 = force? what16;
        checkMissing(what17);
        return what17;
      };
      r34 = dyn duplicated1(p4);
      __2 = ldf `[` in base;
      r35 = dyn __2(what15, r34);
      goto L0(r35);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r37 = dyn unique1(p5);
    check L58() else D17();
  L81():
    st directSupers = r72;
    lapply = ldf lapply;
    check L82() else D31();
  D17():
    deopt 66 [r37];
  D31():
    deopt 116 [];
  L58():
    st dups = r37;
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L59() else L60();
  L82():
    p10 = prom<V +>{
      directSupers2 = ld directSupers;
      directSupers3 = force? directSupers2;
      checkMissing(directSupers3);
      return directSupers3;
    };
    p11 = prom<V +>{
      _noncondExtsClass = ld `.noncondExtsClass`;
      _noncondExtsClass1 = force? _noncondExtsClass;
      checkMissing(_noncondExtsClass1);
      return _noncondExtsClass1;
    };
    r75 = dyn lapply(p10, p11);
    check L83() else D32();
  D32():
    deopt 119 [r75];
  L10(r39):
    r41 = `==`(r39, 0.0);
    c6 = `as.logical`(r41);
    if c6 then L63() else L11();
  L59():
    dups4 = ld dups;
    check L61() else D18();
  L60():
    r38 = dyn base5(<sym dups>);
    goto L10(r38);
  L83():
    st superExts = r75;
    directSupers4 = ld directSupers;
    check L84() else D33();
  D18():
    deopt 70 [dups4];
  D33():
    deopt 121 [directSupers4];
  L11():
    goto L16();
  L61():
    dups5 = force? dups4;
    checkMissing(dups5);
    length1 = ldf length in base;
    r40 = dyn length1(dups5);
    check L62() else D19();
  L63():
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L64() else L65();
  L84():
    directSupers5 = force? directSupers4;
    checkMissing(directSupers5);
    l4 = ld superExts;
    names__ = ldf `names<-`;
    check L85() else D34();
  D19():
    deopt 73 [r40];
  D34():
    deopt 124 [directSupers5, l4, directSupers5];
  L12(r43):
    r45 = `>`(r43, 0.0);
    c7 = `as.logical`(r45);
    if c7 then L68() else L13();
  L62():
    goto L10(r40);
  L64():
    conflicts1 = ld conflicts;
    check L66() else D20();
  L65():
    r42 = dyn base6(<sym conflicts>);
    goto L12(r42);
  L85():
    r76 = dyn names__(l4, NULL, directSupers5);
    check L86() else D35();
  D20():
    deopt 78 [conflicts1];
  D35():
    deopt 126 [directSupers5, r76];
  L13():
    goto L14();
  L14():
    ext9 = ld ext;
    check L74() else D26();
  L66():
    conflicts2 = force? conflicts1;
    checkMissing(conflicts2);
    length2 = ldf length in base;
    r44 = dyn length2(conflicts2);
    check L67() else D21();
  L68():
    unique2 = ldf unique;
    check L69() else D22();
  L86():
    st superExts = r76;
    _choosePos = ldf `.choosePos`;
    check L87() else D36();
  D21():
    deopt 81 [r44];
  D22():
    deopt 85 [];
  D26():
    deopt 96 [ext9];
  D36():
    deopt 129 [];
  L67():
    goto L12(r44);
  L69():
    p6 = prom<V +>{
      sym7 = ldf c;
      base7 = ldf c in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L2() else L3();
    L0(r47):
      return r47;
    L2():
      conflicts3 = ld conflicts;
      conflicts4 = force? conflicts3;
      checkMissing(conflicts4);
      sym8 = ldf attr;
      base8 = ldf attr in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L4() else L5();
    L3():
      r46 = dyn base7(<sym conflicts>, <lang attr(ext, "conflicts")>);
      goto L0(r46);
    L1(r49):
      c8 = ldf c in base;
      r51 = dyn c8(conflicts4, r49);
      goto L0(r51);
    L4():
      ext7 = ld ext;
      ext8 = force? ext7;
      checkMissing(ext8);
      attr1 = ldf attr in base;
      r50 = dyn attr1(ext8, "conflicts");
      goto L1(r50);
    L5():
      r48 = dyn base8(<sym ext>, "conflicts");
      goto L1(r48);
    };
    r53 = dyn unique2(p6);
    check L70() else D23();
  L74():
    ext10 = force? ext9;
    checkMissing(ext10);
    popenv;
    return ext10;
  L87():
    p12 = prom<V +>{
      __6 = ldf `@` in base;
      r77 = dyn __6(<sym classDef>, <sym className>);
      return r77;
    };
    p13 = prom<V +>{
      what18 = ld what;
      what19 = force? what18;
      checkMissing(what19);
      return what19;
    };
    p14 = prom<V +>{
      superExts = ld superExts;
      superExts1 = force? superExts;
      checkMissing(superExts1);
      return superExts1;
    };
    p15 = prom<V +>{
      affected2 = ld affected;
      affected3 = force? affected2;
      checkMissing(affected3);
      return affected3;
    };
    r82 = dyn _choosePos(p12, p13, p14, p15);
    check L88() else D37();
  D23():
    deopt 87 [r53];
  D37():
    deopt 134 [r82];
  L70():
    l3 = ld ext;
    attr__ = ldf `attr<-`;
    check L71() else D24();
  L88():
    st retain = r82;
    sym10 = ldf `is.list`;
    base10 = ldf `is.list` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L89() else L90();
  D24():
    deopt 89 [r53, l3, r53];
  L17(r84):
    c10 = `as.logical`(r84);
    if c10 then L93() else L18();
  L71():
    r54 = dyn attr__(l3, NULL, "conflicts", r53);
    check L72() else D25();
  L89():
    retain = ld retain;
    check L91() else D38();
  L90():
    r83 = dyn base10(<sym retain>);
    goto L17(r83);
  D25():
    deopt 92 [r53, r54];
  D38():
    deopt 138 [retain];
  L18():
    goto L21();
  L21():
    l5 = ld affected;
    c14 = `is.object`(l5);
    if c14 then L105() else L106(FALSE, l5);
  L72():
    st ext = r54;
    goto L14();
  L91():
    retain1 = force? retain;
    checkMissing(retain1);
    is_list = ldf `is.list` in base;
    r85 = dyn is_list(retain1);
    check L92() else D39();
  L93():
    retain2 = ld retain;
    check L94() else D40();
  D39():
    deopt 141 [r85];
  D40():
    deopt 142 [retain2];
  L22(dx16):
    st affected = dx16;
    ext11 = ld ext;
    check L109() else D45();
  L92():
    goto L17(r85);
  L94():
    retain3 = force? retain2;
    checkMissing(retain3);
    c11 = `is.object`(retain3);
    if c11 then L95() else L96(retain3);
  L105():
    dr14 = tryDispatchBuiltin.0("[<-", l5, FALSE);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L107() else L106(FALSE, dr14);
  L106(r94, l7):
    retain10 = ld retain;
    check L108() else D44();
  D44():
    deopt 164 [r94, l7, FALSE, retain10];
  D45():
    deopt 168 [ext11];
  L19(dx11):
    st these = dx11;
    unique4 = ldf unique;
    check L98() else D41();
  L95():
    dr10 = tryDispatchBuiltin.1("[[", retain3);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L97() else L96(dr10);
  L96(retain5):
    __7 = ldf `[[` in base;
    r86 = dyn __7(retain5, 2.0);
    goto L19(r86);
  L107():
    dx15 = getTryDispatchBuiltinValue(dr14);
    goto L22(dx15);
  L108():
    retain11 = force? retain10;
    ___1 = ldf `[<-` in base;
    r97 = dyn ___1(l7, FALSE, retain11);
    goto L22(r97);
  L109():
    ext12 = force? ext11;
    checkMissing(ext12);
    c15 = `is.object`(ext12);
    if c15 then L110() else L111(ext12);
  D41():
    deopt 149 [];
  L23(dx18):
    st ext = dx18;
    goto L24();
  L97():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L19(dx10);
  L98():
    p16 = prom<V +>{
      sym11 = ldf c;
      base11 = ldf c in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L1() else L2();
    L0(r88):
      return r88;
    L1():
      conflicts5 = ld conflicts;
      conflicts6 = force? conflicts5;
      checkMissing(conflicts6);
      these = ld these;
      these1 = force? these;
      checkMissing(these1);
      c12 = ldf c in base;
      r89 = dyn c12(conflicts6, these1);
      goto L0(r89);
    L2():
      r87 = dyn base11(<sym conflicts>, <sym these>);
      goto L0(r87);
    };
    r91 = dyn unique4(p16);
    check L99() else D42();
  L110():
    dr16 = tryDispatchBuiltin.1("[", ext12);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L112() else L111(dr16);
  L111(ext14):
    affected4 = ld affected;
    check L113() else D46();
  D42():
    deopt 151 [r91];
  D46():
    deopt 170 [ext14, affected4];
  L99():
    st conflicts = r91;
    retain6 = ld retain;
    check L100() else D43();
  L112():
    dx17 = getTryDispatchBuiltinValue(dr16);
    goto L23(dx17);
  L113():
    affected5 = force? affected4;
    checkMissing(affected5);
    r98 = `!`(affected5);
    __9 = ldf `[` in base;
    r99 = dyn __9(ext14, r98);
    goto L23(r99);
  D43():
    deopt 153 [retain6];
  L100():
    retain7 = force? retain6;
    checkMissing(retain7);
    c13 = `is.object`(retain7);
    if c13 then L101() else L102(retain7);
  L20(dx13):
    st retain = dx13;
    goto L21();
  L101():
    dr12 = tryDispatchBuiltin.1("[[", retain7);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L103() else L102(dr12);
  L102(retain9):
    __8 = ldf `[[` in base;
    r92 = dyn __8(retain9, 1.0);
    goto L20(r92);
  L103():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L20(dx12);
  }
}
fun inner1215298303(contains) {
  (reg contains:*) -+> V { var contains:*, reg vapply:cls, reg contains1:*, reg contains2:V, reg p:p(V +), reg r1:cls, reg p1:p(V +), reg r3:V |
    mkenv;
    st contains = contains;
    vapply = ldf vapply;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      contains1 = ld contains;
      contains2 = force? contains1;
      checkMissing(contains2);
      return contains2;
    };
    p1 = prom<V +>{
      r1 = clos inner2501545716;
      return r1;
    };
    r3 = dyn vapply(p, p1, NA_LGL);
    check L1() else D1();
  D1():
    deopt 5 [r3];
  L1():
    popenv;
    return r3;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg is:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V |
    mkenv;
    st x = x;
    is = ldf is;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn is(p, "conditionalExtension");
    check L1() else D1();
  D1():
    deopt 4 [r1];
  L1():
    popenv;
    return r1;
  }
}
fun inner3618118985(cl) {
  (reg cl:*) -+> V { var cl:*, reg isClass:cls, reg cl1:*, reg cl2:V, reg p:p(V +), reg where:*, reg where1:V, reg p1:p(V +), reg r2:V, reg c:L, reg __:cls, reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg contains:*, reg contains1:V, reg names:cls, reg r6:V, reg c1:L, reg r8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg _condExts:cls, reg contains2:*, reg contains3:V, reg p2:p(V +), reg r10:V, reg r11:V, reg __1:cls, reg r12:V, reg cl3:*, reg cl4:V |
    mkenv;
    st cl = cl;
    isClass = ldf isClass;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    p = prom<V +>{
      cl1 = ld cl;
      cl2 = force? cl1;
      checkMissing(cl2);
      return cl2;
    };
    p1 = prom<V +>{
      where = ld where;
      where1 = force? where;
      checkMissing(where1);
      return where1;
    };
    r2 = dyn isClass[, where](p, p1);
    check L4() else D1();
  D1():
    deopt 5 [r2];
  L4():
    c = `as.logical`(r2);
    if c then L5() else L0();
  L0():
    cl3 = ld cl;
    check L16() else D6();
  L5():
    __ = ldf `@` in base;
    r3 = dyn __(<lang getClass(cl, where=where)>, <sym contains>);
    st contains = r3;
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  D6():
    deopt 21 [cl3];
  L1(r5):
    c1 = `is.object`(r5);
    if c1 then L10() else L11(r5);
  L6():
    contains = ld contains;
    check L8() else D2();
  L7():
    r4 = dyn base(<sym contains>);
    goto L1(r4);
  L16():
    cl4 = force? cl3;
    checkMissing(cl4);
    popenv;
    return cl4;
  D2():
    deopt 11 [contains];
  L2(dx1):
    popenv;
    return dx1;
  L8():
    contains1 = force? contains;
    checkMissing(contains1);
    names = ldf names in base;
    r6 = dyn names(contains1);
    check L9() else D3();
  L10():
    dr = tryDispatchBuiltin.1("[", r5);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L12() else L11(dr);
  L11(r8):
    _condExts = ldf `.condExts`;
    check L13() else D4();
  D3():
    deopt 14 [r6];
  D4():
    deopt 16 [r8];
  L9():
    goto L1(r6);
  L12():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L13():
    p2 = prom<V +>{
      contains2 = ld contains;
      contains3 = force? contains2;
      checkMissing(contains3);
      return contains3;
    };
    r10 = dyn _condExts(p2);
    check L14() else D5();
  D5():
    deopt 18 [r8, r10];
  L14():
    r11 = `!`(r10);
    __1 = ldf `[` in base;
    r12 = dyn __1(r8, r11);
    goto L2(r12);
  }
}