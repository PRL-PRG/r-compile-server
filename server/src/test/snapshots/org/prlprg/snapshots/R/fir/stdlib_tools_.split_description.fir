fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1194091442;
    st `.split_description` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1194091442(db, verbose) {
  (reg db:*, reg verbose:*) -+> V { var db:*, var verbose:*, reg verbose_isMissing:L, reg verbose_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg db1:*, reg db2:V, reg c:L, reg db4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r2:V, reg is_na:cls, reg r3:V, reg r4:V, reg c1:L, reg as_list:cls, reg strsplit:cls, reg Built:*, reg Built1:V, reg p:p(V +), reg r6:V, reg c2:L, reg r8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r9:V, reg p1:p(V +), reg r11:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg r13:V, reg Built2:*, reg Built3:V, reg length:cls, reg r14:V, reg r15:V, reg c3:L, reg warning:cls, reg gettextf:cls, reg db5:*, reg db6:V, reg c4:L, reg db8:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r16:V, reg p2:p(V +), reg r18:V, reg p3:p(V +), reg r20:V, reg r21:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r22:V, reg r23:V, reg c5:cls, reg r24:V, reg l:*, reg names__:cls, reg r25:V, reg R_system_version:cls, reg sub:cls, reg Built4:*, reg Built5:V, reg c6:L, reg Built7:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __3:cls, reg r26:V, reg p4:p(V +), reg r28:V, reg p5:p(V +), reg r30:V, reg l1:*, reg c7:L, reg r32:V, reg l3:*, reg dr8:V, reg dc4:L, reg dx8:V, reg r34:V, reg dx9:V, reg ____:cls, reg r35:V, reg _split_dependencies:cls, reg db9:*, reg db10:V, reg c8:L, reg db12:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg _in_:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r37:V, reg r38:V, reg db13:*, reg db14:V, reg names:cls, reg r39:V, reg p6:p(V +), reg r41:V, reg __4:cls, reg r42:V, reg p7:p(V +), reg r44:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r45:V, reg r46:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r47:V, reg r48:V, reg Depends:*, reg Depends1:V, reg names1:cls, reg r49:V, reg match:cls, reg r50:V, reg ind:*, reg ind1:V, reg c9:L, reg Depends2:*, reg Depends3:V, reg c10:L, reg Depends5:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg ind2:*, reg ind3:V, reg r51:V, reg __5:cls, reg r52:V, reg _in_1:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r53:V, reg r54:V, reg Depends6:*, reg Depends7:V, reg names2:cls, reg r55:V, reg p8:p(V +), reg r57:V, reg c11:L, reg Depends8:*, reg Depends9:V, reg c12:L, reg Depends11:V, reg dr14:V, reg dc7:L, reg dx15:V, reg dx16:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r60:V, reg Depends14:V, reg r61:S, reg r62:V, reg Depends15:*, reg Depends16:V, reg names3:cls, reg r63:V, reg r64:V, reg __6:cls, reg r65:V, reg l4:*, reg names__1:cls, reg r66:V, reg Depends17:*, reg Depends18:V, reg c13:L, reg dr16:V, reg dc8:L, reg dx17:V, reg dx18:V, reg __7:cls, reg r67:V, reg Depends21:*, reg Depends22:V, reg c14:L, reg Depends24:V, reg dr18:V, reg dc9:L, reg dx19:V, reg dx20:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r68:V, reg Depends27:V, reg r69:V, reg Depends28:*, reg Depends29:V, reg names4:cls, reg r70:V, reg r71:V, reg __8:cls, reg r72:V, reg verbose1:*, reg verbose2:V, reg c15:L, reg c17:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r73:V, reg c20:L, reg r74:V, reg Rdeps:*, reg Rdeps1:V, reg length1:cls, reg r75:V, reg r76:V, reg c21:L, reg c22:V, reg c24:L, reg message:cls, reg r77:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r79:V, reg r80:V, reg Rdeps2:*, reg Rdeps3:V, reg length2:cls, reg r81:V, reg r82:V, reg c25:L, reg r83:dots, reg as_vector:cls, reg Rdeps4:*, reg Rdeps5:V, reg p9:p(V +), reg r86:V, reg _split_dependencies1:cls, reg db15:*, reg db16:V, reg c26:L, reg db18:V, reg dr20:V, reg dc10:L, reg dx21:V, reg dx22:V, reg _in_2:cls, reg sym11:cls, reg base11:cls, reg guard11:L, reg r87:V, reg r88:V, reg db19:*, reg db20:V, reg names5:cls, reg r89:V, reg p10:p(V +), reg r91:V, reg __9:cls, reg r92:V, reg p11:p(V +), reg r94:V, reg _split_dependencies2:cls, reg db21:*, reg db22:V, reg c27:L, reg db24:V, reg dr22:V, reg dc11:L, reg dx23:V, reg dx24:V, reg _in_3:cls, reg sym12:cls, reg base12:cls, reg guard12:L, reg r95:V, reg r96:V, reg db25:*, reg db26:V, reg names6:cls, reg r97:V, reg p12:p(V +), reg r99:V, reg __10:cls, reg r100:V, reg p13:p(V +), reg r102:V, reg _split_dependencies3:cls, reg db27:*, reg db28:V, reg c28:L, reg db30:V, reg dr24:V, reg dc12:L, reg dx25:V, reg dx26:V, reg _in_4:cls, reg sym13:cls, reg base13:cls, reg guard13:L, reg r103:V, reg r104:V, reg db31:*, reg db32:V, reg names7:cls, reg r105:V, reg p14:p(V +), reg r107:V, reg __11:cls, reg r108:V, reg p15:p(V +), reg r110:V, reg structure:cls, reg sym14:cls, reg base14:cls, reg guard14:L, reg r111:V, reg r112:V, reg db33:*, reg db34:V, reg Built8:*, reg Built9:V, reg Rdeps6:*, reg Rdeps7:V, reg Rdeps8:*, reg Rdeps9:V, reg Depends30:*, reg Depends31:V, reg Suggests:*, reg Suggests1:V, reg Imports:*, reg Imports1:V, reg LinkingTo:*, reg LinkingTo1:V, reg list:cls, reg r113:V, reg p16:p(V +), reg r115:V |
    mkenv;
    st db = db;
    verbose_isMissing = missing.0(verbose);
    if verbose_isMissing then L0(FALSE) else L0(verbose);
  L0(verbose_orDefault):
    st verbose = verbose_orDefault;
    sym = ldf `is.na`;
    base = ldf `is.na` in base;
    guard = `==`.4(sym, base);
    if guard then L29() else L30();
  L1(r1):
    r4 = `!`(r1);
    c1 = `as.logical`(r4);
    if c1 then L36() else L3();
  L29():
    db1 = ld db;
    check L31() else D0();
  L30():
    r = dyn base(<lang `<-`(Built, `[`(db, "Built"))>);
    goto L1(r);
  D0():
    deopt 2 [db1];
  L3():
    st Built = NULL;
    goto L9();
  L9():
    _split_dependencies = ldf `.split_dependencies`;
    check L58() else D13();
  L31():
    db2 = force? db1;
    checkMissing(db2);
    c = `is.object`(db2);
    if c then L32() else L33(db2);
  L36():
    as_list = ldf `as.list`;
    check L37() else D2();
  D2():
    deopt 12 [];
  D13():
    deopt 61 [];
  L2(dx1):
    st Built = dx1;
    is_na = ldf `is.na` in base;
    r3 = dyn is_na(dx1);
    check L35() else D1();
  L32():
    dr = tryDispatchBuiltin.1("[", db2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L34() else L33(dr);
  L33(db4):
    __ = ldf `[` in base;
    r2 = dyn __(db4, "Built");
    goto L2(r2);
  L37():
    p1 = prom<V +>{
      strsplit = ldf strsplit;
      p = prom<V +>{
        Built = ld Built;
        Built1 = force? Built;
        checkMissing(Built1);
        return Built1;
      };
      r6 = dyn strsplit(p, "; ");
      c2 = `is.object`(r6);
      if c2 then L1() else L2(r6);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[[", r6);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(r8):
      __1 = ldf `[[` in base;
      r9 = dyn __1(r8, 1);
      goto L0(r9);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r11 = dyn as_list(p1);
    check L38() else D3();
  L58():
    p7 = prom<V +>{
      db9 = ld db;
      db10 = force? db9;
      checkMissing(db10);
      c8 = `is.object`(db10);
      if c8 then L1() else L2(db10);
    L0(dx11):
      return dx11;
    L1():
      dr10 = tryDispatchBuiltin.1("[", db10);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(db12):
      _in_ = ldf `%in%`;
      p6 = prom<V +>{
        sym3 = ldf names;
        base3 = ldf names in base;
        guard3 = `==`.4(sym3, base3);
        if guard3 then L1() else L2();
      L0(r38):
        return r38;
      L1():
        db13 = ld db;
        db14 = force? db13;
        checkMissing(db14);
        names = ldf names in base;
        r39 = dyn names(db14);
        goto L0(r39);
      L2():
        r37 = dyn base3(<sym db>);
        goto L0(r37);
      };
      r41 = dyn _in_(p6, "Depends");
      __4 = ldf `[` in base;
      r42 = dyn __4(db12, r41);
      goto L0(r42);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx10);
    };
    r44 = dyn _split_dependencies(p7);
    check L59() else D14();
  D1():
    deopt 9 [r3];
  D3():
    deopt 14 [r11];
  D14():
    deopt 63 [r44];
  L34():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L35():
    goto L1(r3);
  L38():
    st Built = r11;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L39() else L40();
  L59():
    st Depends = r44;
    sym4 = ldf match;
    base4 = ldf match in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L60() else L61();
  L4(r13):
    r15 = `!=`(r13, 4);
    c3 = `as.logical`(r15);
    if c3 then L43() else L5();
  L10(r46):
    st ind = r46;
    ind = ld ind;
    check L67() else D18();
  L39():
    Built2 = ld Built;
    check L41() else D4();
  L40():
    r12 = dyn base1(<sym Built>);
    goto L4(r12);
  L60():
    sym5 = ldf names;
    base5 = ldf names in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L62() else L63();
  L61():
    r45 = dyn base4("base", <lang names(Depends)>, 0);
    goto L10(r45);
  D4():
    deopt 18 [Built2];
  D18():
    deopt 79 [ind];
  L5():
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L47() else L48();
  L6(r21):
    goto L9();
  L11(r48):
    match = ldf match in base;
    r50 = dyn match("base", r48, 0, NULL);
    check L66() else D17();
  L41():
    Built3 = force? Built2;
    checkMissing(Built3);
    length = ldf length in base;
    r14 = dyn length(Built3);
    check L42() else D5();
  L43():
    warning = ldf warning;
    check L44() else D6();
  L62():
    Depends = ld Depends;
    check L64() else D15();
  L63():
    r47 = dyn base5(<sym Depends>);
    goto L11(r47);
  L67():
    ind1 = force? ind;
    checkMissing(ind1);
    c9 = `as.logical`(ind1);
    if c9 then L68() else L12();
  D5():
    deopt 21 [r14];
  D6():
    deopt 25 [];
  D15():
    deopt 70 [Depends];
  D17():
    deopt 77 [r50];
  L7(r23):
    l = ld Built;
    names__ = ldf `names<-`;
    check L50() else D9();
  L12():
    goto L14();
  L14():
    _in_1 = ldf `%in%`;
    check L75() else D21();
  L42():
    goto L4(r14);
  L44():
    p3 = prom<V +>{
      gettextf = ldf gettextf;
      p2 = prom<V +>{
        db5 = ld db;
        db6 = force? db5;
        checkMissing(db6);
        c4 = `is.object`(db6);
        if c4 then L1() else L2(db6);
      L0(dx5):
        return dx5;
      L1():
        dr4 = tryDispatchBuiltin.1("[", db6);
        dc2 = getTryDispatchBuiltinDispatched(dr4);
        if dc2 then L3() else L2(dr4);
      L2(db8):
        __2 = ldf `[` in base;
        r16 = dyn __2(db8, "Package");
        goto L0(r16);
      L3():
        dx4 = getTryDispatchBuiltinValue(dr4);
        goto L0(dx4);
      };
      r18 = dyn gettextf("*** someone has corrupted the Built field in package '%s' ***", p2);
      return r18;
    };
    r20 = dyn warning[, domain, `call.`](p3, NA_LGL, FALSE);
    check L45() else D7();
  L47():
    c5 = ldf c in base;
    r24 = dyn c5("R", "Platform", "Date", "OStype");
    check L49() else D8();
  L48():
    r22 = dyn base2("R", "Platform", "Date", "OStype");
    goto L7(r22);
  L64():
    Depends1 = force? Depends;
    checkMissing(Depends1);
    names1 = ldf names in base;
    r49 = dyn names1(Depends1);
    check L65() else D16();
  L66():
    goto L10(r50);
  L68():
    Depends2 = ld Depends;
    check L69() else D19();
  D7():
    deopt 31 [r20];
  D8():
    deopt 42 [r24];
  D9():
    deopt 44 [r23, l, r23];
  D16():
    deopt 73 [r49];
  D19():
    deopt 81 [Depends2];
  D21():
    deopt 91 [];
  L45():
    st Built = NULL;
    goto L6(NULL);
  L49():
    goto L7(r24);
  L50():
    r25 = dyn names__(l, NULL, r23);
    check L51() else D10();
  L65():
    goto L11(r49);
  L69():
    Depends3 = force? Depends2;
    checkMissing(Depends3);
    c10 = `is.object`(Depends3);
    if c10 then L70() else L71(Depends3);
  L75():
    p8 = prom<V +>{
      sym6 = ldf names;
      base6 = ldf names in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r54):
      return r54;
    L1():
      Depends6 = ld Depends;
      Depends7 = force? Depends6;
      checkMissing(Depends7);
      names2 = ldf names in base;
      r55 = dyn names2(Depends7);
      goto L0(r55);
    L2():
      r53 = dyn base6(<sym Depends>);
      goto L0(r53);
    };
    r57 = dyn _in_1("R", p8);
    check L76() else D22();
  D10():
    deopt 46 [r23, r25];
  D22():
    deopt 94 [r57];
  L13(dx13):
    st Depends = dx13;
    goto L14();
  L51():
    st Built = r25;
    R_system_version = ldf R_system_version;
    check L52() else D11();
  L70():
    dr12 = tryDispatchBuiltin.1("[", Depends3);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L72() else L71(dr12);
  L71(Depends5):
    ind2 = ld ind;
    check L73() else D20();
  L76():
    c11 = `as.logical`(r57);
    if c11 then L77() else L15();
  D11():
    deopt 49 [];
  D20():
    deopt 83 [Depends5, ind2];
  L15():
    st Rdeps = NULL;
    st Rdeps2 = NULL;
    goto L28();
  L28():
    as_vector = ldf `as.vector`;
    check L118() else D39();
  L52():
    p5 = prom<V +>{
      sub = ldf sub;
      p4 = prom<V +>{
        Built4 = ld Built;
        Built5 = force? Built4;
        checkMissing(Built5);
        c6 = `is.object`(Built5);
        if c6 then L1() else L2(Built5);
      L0(dx7):
        return dx7;
      L1():
        dr6 = tryDispatchBuiltin.1("[[", Built5);
        dc3 = getTryDispatchBuiltinDispatched(dr6);
        if dc3 then L3() else L2(dr6);
      L2(Built7):
        __3 = ldf `[[` in base;
        r26 = dyn __3(Built7, "R");
        goto L0(r26);
      L3():
        dx6 = getTryDispatchBuiltinValue(dr6);
        goto L0(dx6);
      };
      r28 = dyn sub("^R ([0-9.]+)", "\\1", p4);
      return r28;
    };
    r30 = dyn R_system_version(p5);
    check L53() else D12();
  L72():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L13(dx12);
  L73():
    ind3 = force? ind2;
    checkMissing(ind3);
    r51 = `-`(<missing>, ind3);
    __5 = ldf `[` in base;
    r52 = dyn __5(Depends5, r51);
    goto L13(r52);
  L77():
    Depends8 = ld Depends;
    check L78() else D23();
  D12():
    deopt 51 [r30];
  D23():
    deopt 95 [Depends8];
  D39():
    deopt 170 [];
  L53():
    l1 = ld Built;
    c7 = `is.object`(l1);
    if c7 then L54() else L55(r30, l1);
  L78():
    Depends9 = force? Depends8;
    checkMissing(Depends9);
    c12 = `is.object`(Depends9);
    if c12 then L79() else L80(Depends9);
  L118():
    p9 = prom<V +>{
      Rdeps4 = ld Rdeps;
      Rdeps5 = force? Rdeps4;
      checkMissing(Rdeps5);
      return Rdeps5;
    };
    r86 = dyn as_vector(p9);
    check L119() else D40();
  D40():
    deopt 172 [r86];
  L8(r34, dx9):
    st Built = dx9;
    goto L6(r34);
  L16(dx16):
    st Rdeps2 = dx16;
    l4 = ld Rdeps2;
    names__1 = ldf `names<-`;
    check L86() else D26();
  L54():
    dr8 = tryDispatchBuiltin.0("[[<-", l1, r30);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L56() else L55(r30, dr8);
  L55(r32, l3):
    ____ = ldf `[[<-` in base;
    r35 = dyn ____(l3, r30, "R");
    goto L8(r32, r35);
  L79():
    dr14 = tryDispatchBuiltin.1("[", Depends9);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L81() else L80(dr14);
  L80(Depends11):
    sym7 = ldf names;
    base7 = ldf names in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L82() else L83();
  L119():
    st Rdeps = r86;
    _split_dependencies1 = ldf `.split_dependencies`;
    check L120() else D41();
  D26():
    deopt 110 [NULL, l4, NULL];
  D41():
    deopt 175 [];
  L17(Depends14, r61, r62):
    r64 = `==`(r61, r62);
    __6 = ldf `[` in base;
    r65 = dyn __6(Depends14, r64);
    goto L16(r65);
  L56():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L8(r30, dx8);
  L81():
    dx15 = getTryDispatchBuiltinValue(dr14);
    goto L16(dx15);
  L82():
    Depends15 = ld Depends;
    check L84() else D24();
  L83():
    r60 = dyn base7(<sym Depends>);
    goto L17(Depends11, "R", r60);
  L86():
    r66 = dyn names__1(l4, NULL, NULL);
    check L87() else D27();
  L120():
    p11 = prom<V +>{
      db15 = ld db;
      db16 = force? db15;
      checkMissing(db16);
      c26 = `is.object`(db16);
      if c26 then L1() else L2(db16);
    L0(dx22):
      return dx22;
    L1():
      dr20 = tryDispatchBuiltin.1("[", db16);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L3() else L2(dr20);
    L2(db18):
      _in_2 = ldf `%in%`;
      p10 = prom<V +>{
        sym11 = ldf names;
        base11 = ldf names in base;
        guard11 = `==`.4(sym11, base11);
        if guard11 then L1() else L2();
      L0(r88):
        return r88;
      L1():
        db19 = ld db;
        db20 = force? db19;
        checkMissing(db20);
        names5 = ldf names in base;
        r89 = dyn names5(db20);
        goto L0(r89);
      L2():
        r87 = dyn base11(<sym db>);
        goto L0(r87);
      };
      r91 = dyn _in_2(p10, "Suggests");
      __9 = ldf `[` in base;
      r92 = dyn __9(db18, r91);
      goto L0(r92);
    L3():
      dx21 = getTryDispatchBuiltinValue(dr20);
      goto L0(dx21);
    };
    r94 = dyn _split_dependencies1(p11);
    check L121() else D42();
  D24():
    deopt 100 [Depends11, "R", Depends15];
  D27():
    deopt 112 [NULL, r66];
  D42():
    deopt 177 [r94];
  L84():
    Depends16 = force? Depends15;
    checkMissing(Depends16);
    names3 = ldf names in base;
    r63 = dyn names3(Depends16);
    check L85() else D25();
  L87():
    st Rdeps2 = r66;
    Depends17 = ld Depends;
    check L88() else D28();
  L121():
    st Suggests = r94;
    _split_dependencies2 = ldf `.split_dependencies`;
    check L122() else D43();
  D25():
    deopt 103 [Depends11, "R", r63];
  D28():
    deopt 114 [Depends17];
  D43():
    deopt 180 [];
  L85():
    goto L17(Depends11, "R", r63);
  L88():
    Depends18 = force? Depends17;
    checkMissing(Depends18);
    c13 = `is.object`(Depends18);
    if c13 then L89() else L90();
  L122():
    p13 = prom<V +>{
      db21 = ld db;
      db22 = force? db21;
      checkMissing(db22);
      c27 = `is.object`(db22);
      if c27 then L1() else L2(db22);
    L0(dx24):
      return dx24;
    L1():
      dr22 = tryDispatchBuiltin.1("[", db22);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L3() else L2(dr22);
    L2(db24):
      _in_3 = ldf `%in%`;
      p12 = prom<V +>{
        sym12 = ldf names;
        base12 = ldf names in base;
        guard12 = `==`.4(sym12, base12);
        if guard12 then L1() else L2();
      L0(r96):
        return r96;
      L1():
        db25 = ld db;
        db26 = force? db25;
        checkMissing(db26);
        names6 = ldf names in base;
        r97 = dyn names6(db26);
        goto L0(r97);
      L2():
        r95 = dyn base12(<sym db>);
        goto L0(r95);
      };
      r99 = dyn _in_3(p12, "Imports");
      __10 = ldf `[` in base;
      r100 = dyn __10(db24, r99);
      goto L0(r100);
    L3():
      dx23 = getTryDispatchBuiltinValue(dr22);
      goto L0(dx23);
    };
    r102 = dyn _split_dependencies2(p13);
    check L123() else D44();
  D44():
    deopt 182 [r102];
  L18(dx18):
    st Rdeps = dx18;
    Depends21 = ld Depends;
    check L92() else D29();
  L89():
    dr16 = tryDispatchBuiltin.1("[[", Depends18);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L91() else L90();
  L90():
    __7 = ldf `[[` in base;
    r67 = dyn __7(Depends18, "R", TRUE);
    goto L18(r67);
  L123():
    st Imports = r102;
    _split_dependencies3 = ldf `.split_dependencies`;
    check L124() else D45();
  D29():
    deopt 122 [Depends21];
  D45():
    deopt 185 [];
  L91():
    dx17 = getTryDispatchBuiltinValue(dr16);
    goto L18(dx17);
  L92():
    Depends22 = force? Depends21;
    checkMissing(Depends22);
    c14 = `is.object`(Depends22);
    if c14 then L93() else L94(Depends22);
  L124():
    p15 = prom<V +>{
      db27 = ld db;
      db28 = force? db27;
      checkMissing(db28);
      c28 = `is.object`(db28);
      if c28 then L1() else L2(db28);
    L0(dx26):
      return dx26;
    L1():
      dr24 = tryDispatchBuiltin.1("[", db28);
      dc12 = getTryDispatchBuiltinDispatched(dr24);
      if dc12 then L3() else L2(dr24);
    L2(db30):
      _in_4 = ldf `%in%`;
      p14 = prom<V +>{
        sym13 = ldf names;
        base13 = ldf names in base;
        guard13 = `==`.4(sym13, base13);
        if guard13 then L1() else L2();
      L0(r104):
        return r104;
      L1():
        db31 = ld db;
        db32 = force? db31;
        checkMissing(db32);
        names7 = ldf names in base;
        r105 = dyn names7(db32);
        goto L0(r105);
      L2():
        r103 = dyn base13(<sym db>);
        goto L0(r103);
      };
      r107 = dyn _in_4(p14, "LinkingTo");
      __11 = ldf `[` in base;
      r108 = dyn __11(db30, r107);
      goto L0(r108);
    L3():
      dx25 = getTryDispatchBuiltinValue(dr24);
      goto L0(dx25);
    };
    r110 = dyn _split_dependencies3(p15);
    check L125() else D46();
  D46():
    deopt 187 [r110];
  L19(dx20):
    st Depends = dx20;
    verbose1 = ld verbose;
    check L100() else D32();
  L93():
    dr18 = tryDispatchBuiltin.1("[", Depends22);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L95() else L94(dr18);
  L94(Depends24):
    sym8 = ldf names;
    base8 = ldf names in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L96() else L97();
  L125():
    st LinkingTo = r110;
    structure = ldf structure;
    check L126() else D47();
  D32():
    deopt 134 [verbose1];
  D47():
    deopt 190 [];
  L20(Depends27, r69):
    r71 = `!=`(r69, "R");
    __8 = ldf `[` in base;
    r72 = dyn __8(Depends27, r71);
    goto L19(r72);
  L95():
    dx19 = getTryDispatchBuiltinValue(dr18);
    goto L19(dx19);
  L96():
    Depends28 = ld Depends;
    check L98() else D30();
  L97():
    r68 = dyn base8(<sym Depends>);
    goto L20(Depends24, r68);
  L100():
    verbose2 = force? verbose1;
    checkMissing(verbose2);
    c15 = `as.logical`(verbose2);
    if c15 then L101() else L21(c15);
  L126():
    p16 = prom<V +>{
      sym14 = ldf list;
      base14 = ldf list in base;
      guard14 = `==`.4(sym14, base14);
      if guard14 then L1() else L2();
    L0(r112):
      return r112;
    L1():
      db33 = ld db;
      db34 = force? db33;
      checkMissing(db34);
      Built8 = ld Built;
      Built9 = force? Built8;
      checkMissing(Built9);
      Rdeps6 = ld Rdeps;
      Rdeps7 = force? Rdeps6;
      checkMissing(Rdeps7);
      Rdeps8 = ld Rdeps2;
      Rdeps9 = force? Rdeps8;
      checkMissing(Rdeps9);
      Depends30 = ld Depends;
      Depends31 = force? Depends30;
      checkMissing(Depends31);
      Suggests = ld Suggests;
      Suggests1 = force? Suggests;
      checkMissing(Suggests1);
      Imports = ld Imports;
      Imports1 = force? Imports;
      checkMissing(Imports1);
      LinkingTo = ld LinkingTo;
      LinkingTo1 = force? LinkingTo;
      checkMissing(LinkingTo1);
      list = ldf list in base;
      r113 = dyn list(db34, Built9, Rdeps7, Rdeps9, Depends31, Suggests1, Imports1, LinkingTo1);
      goto L0(r113);
    L2():
      r111 = dyn base14[DESCRIPTION, Built, Rdepends, Rdepends2, Depends, Suggests, Imports, LinkingTo](<sym db>, <sym Built>, <sym Rdeps>, <sym Rdeps2>, <sym Depends>, <sym Suggests>, <sym Imports>, <sym LinkingTo>);
      goto L0(r111);
    };
    r115 = dyn structure[, class](p16, "packageDescription2");
    check L127() else D48();
  D30():
    deopt 126 [Depends24, Depends28];
  D48():
    deopt 194 [r115];
  L21(c17):
    c24 = `as.logical`(c17);
    if c24 then L107() else L23();
  L98():
    Depends29 = force? Depends28;
    checkMissing(Depends29);
    names4 = ldf names in base;
    r70 = dyn names4(Depends29);
    check L99() else D31();
  L101():
    sym9 = ldf length;
    base9 = ldf length in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L102() else L103();
  L127():
    popenv;
    return r115;
  D31():
    deopt 129 [Depends24, r70];
  L22(c20, r74):
    r76 = `==`(r74, 1);
    c21 = `as.logical`(r76);
    c22 = `&&`(c20, c21);
    goto L21(c22);
  L23():
    goto L24();
  L24():
    sym10 = ldf length;
    base10 = ldf length in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L111() else L112();
  L99():
    goto L20(Depends24, r70);
  L102():
    Rdeps = ld Rdeps;
    check L104() else D33();
  L103():
    r73 = dyn base9(<sym Rdeps>);
    goto L22(c15, r73);
  L107():
    message = ldf message;
    check L108() else D35();
  D33():
    deopt 138 [c15, Rdeps];
  D35():
    deopt 146 [];
  L25(r80):
    r82 = `<=`(r80, 1);
    c25 = `as.logical`(r82);
    if c25 then L115() else L26();
  L104():
    Rdeps1 = force? Rdeps;
    checkMissing(Rdeps1);
    length1 = ldf length in base;
    r75 = dyn length1(Rdeps1);
    check L105() else D34();
  L108():
    r77 = dyn message("WARNING: omitting pointless dependence on 'R' without a version requirement");
    check L109() else D36();
  L111():
    Rdeps2 = ld Rdeps;
    check L113() else D37();
  L112():
    r79 = dyn base10(<sym Rdeps>);
    goto L25(r79);
  D34():
    deopt 141 [c15, r75];
  D36():
    deopt 148 [r77];
  D37():
    deopt 153 [Rdeps2];
  L26():
    goto L27(NULL);
  L27(r83):
    goto L28();
  L105():
    goto L22(c15, r75);
  L109():
    goto L24();
  L113():
    Rdeps3 = force? Rdeps2;
    checkMissing(Rdeps3);
    length2 = ldf length in base;
    r81 = dyn length2(Rdeps3);
    check L114() else D38();
  L115():
    st Rdeps = NULL;
    st Rdeps2 = NULL;
    goto L27(NULL);
  D38():
    deopt 156 [r81];
  L114():
    goto L25(r81);
  }
}