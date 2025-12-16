fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner363571196;
    st `.getRequiredPackages2` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner363571196(pkgInfo, quietly, `lib.loc`, useImports) {
  (reg pkgInfo:*, reg quietly:*, reg lib_loc:*, reg useImports:*) -+> V { var pkgInfo:*, var quietly:*, reg quietly_isMissing:L, reg quietly_orDefault:*, var `lib.loc`:*, reg lib_loc_isMissing:L, reg lib_loc_orDefault:*, var useImports:*, reg useImports_isMissing:L, reg useImports_orDefault:*, reg r:cls, reg unique:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg pkgInfo1:*, reg pkgInfo2:V, reg c:L, reg pkgInfo4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r3:V, reg names:cls, reg r4:V, reg p:p(V +), reg r6:V, reg pkgInfo5:*, reg pkgInfo6:V, reg c1:L, reg pkgInfo8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r7:V, reg c2:L, reg dx5:V, reg dr4:V, reg dc2:L, reg dx6:V, reg dx7:V, reg __:cls, reg r8:V, reg setdiff:cls, reg pkgs:*, reg pkgs1:V, reg p1:p(V +), reg r10:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c3:L, reg x:V, reg pkgInfo9:*, reg pkgInfo10:V, reg c4:L, reg i6:I, reg pkgInfo12:V, reg dr6:V, reg dc3:L, reg dx8:V, reg i8:I, reg dx9:V, reg r11:V, reg c5:L, reg i10:I, reg dx11:V, reg dr8:V, reg dc4:L, reg dx12:V, reg i12:I, reg dx13:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg i15:I, reg dx16:V, reg r13:V, reg pkgInfo13:*, reg pkgInfo14:V, reg c6:L, reg i17:I, reg dx18:V, reg pkgInfo16:V, reg dr10:V, reg dc5:L, reg dx20:V, reg i19:I, reg dx21:V, reg dx22:V, reg r14:V, reg names1:cls, reg r15:V, reg pkg:*, reg pkg1:V, reg r16:V, reg __1:cls, reg r17:V, reg _in_:cls, reg paste0:cls, reg pkg2:*, reg pkg3:V, reg p2:p(V +), reg r19:V, reg p3:p(V +), reg search:cls, reg r21:V, reg p4:p(V +), reg r23:V, reg _findVersion:cls, reg pkg4:*, reg pkg5:V, reg p5:p(V +), reg lib_loc1:*, reg lib_loc2:V, reg p6:p(V +), reg r26:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r27:V, reg i22:I, reg r28:V, reg current:*, reg current1:V, reg c7:V, reg c8:L, reg stop:cls, reg gettextf:cls, reg sQuote:cls, reg pkg6:*, reg pkg7:V, reg p7:p(V +), reg r30:V, reg p8:p(V +), reg sQuote1:cls, reg pkgname:*, reg pkgname1:V, reg p9:p(V +), reg r33:V, reg p10:p(V +), reg r35:V, reg p11:p(V +), reg r37:V, reg i25:I, reg lengths:cls, reg depends:*, reg depends1:V, reg p12:p(V +), reg r40:V, reg r41:V, reg depends2:*, reg depends3:V, reg c9:L, reg i27:I, reg depends5:V, reg dr12:V, reg dc6:L, reg dx23:V, reg i29:I, reg dx24:V, reg have_vers:*, reg have_vers1:V, reg __2:cls, reg r42:V, reg s1:V, reg l1:I, reg i30:I, reg i31:I, reg i32:I, reg i33:I, reg c10:L, reg x1:V, reg as_numeric_version:cls, reg dep:*, reg dep1:V, reg c11:L, reg dep3:V, reg dr14:V, reg dc7:L, reg dx25:V, reg dx26:V, reg r43:V, reg p13:p(V +), reg r45:V, reg do_call:cls, reg dep4:*, reg dep5:V, reg c12:L, reg dep7:V, reg dr16:V, reg dc8:L, reg dx27:V, reg dx28:V, reg r46:V, reg p14:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r48:V, reg r49:V, reg current2:*, reg current3:V, reg target:*, reg target1:V, reg list:cls, reg r50:V, reg p15:p(V +), reg r52:V, reg sufficient:*, reg sufficient1:V, reg r53:V, reg c13:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r54:V, reg i46:I, reg i47:I, reg r55:V, reg lib_loc3:*, reg lib_loc4:V, reg c14:V, reg c15:L, reg _libPaths:cls, reg r56:V, reg i52:I, reg i53:I, reg lapply:cls, reg lib_loc5:*, reg lib_loc6:V, reg p16:p(V +), reg _findVersion1:*, reg _findVersion2:V, reg p17:p(V +), reg pkg8:*, reg pkg9:V, reg p18:p(V +), reg r61:V, reg do_call1:cls, reg c16:*, reg c17:V, reg p19:p(V +), reg allV:*, reg allV1:V, reg c18:L, reg allV3:V, reg dr18:V, reg dc9:L, reg dx29:V, reg dx30:V, reg which:cls, reg vapply:cls, reg allV4:*, reg allV5:V, reg p20:p(V +), reg is_null:*, reg is_null1:V, reg p21:p(V +), reg r65:V, reg r66:V, reg p22:p(V +), reg r68:V, reg __3:cls, reg r69:V, reg p23:p(V +), reg r71:V, reg vapply1:cls, reg versions:*, reg versions1:V, reg p24:p(V +), reg dep8:*, reg dep9:V, reg c19:L, reg dep11:V, reg dr20:V, reg dc10:L, reg dx31:V, reg dx32:V, reg r73:V, reg p25:p(V +), reg logical:cls, reg r75:V, reg p26:p(V +), reg target2:*, reg target3:V, reg p27:p(V +), reg r78:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r79:V, reg i58:I, reg i59:I, reg r80:V, reg sufficient2:*, reg sufficient3:V, reg any:cls, reg r81:V, reg c20:L, reg warning:cls, reg gettextf1:cls, reg versions2:*, reg versions3:V, reg c21:L, reg versions5:V, reg dr22:V, reg dc11:L, reg dx33:V, reg dx34:V, reg which1:cls, reg sufficient4:*, reg sufficient5:V, reg p28:p(V +), reg r83:V, reg c22:L, reg versions7:V, reg r85:V, reg dr24:V, reg dc12:L, reg dx35:V, reg versions9:V, reg dx36:V, reg __4:cls, reg r86:V, reg __5:cls, reg r87:V, reg p29:p(V +), reg sQuote2:cls, reg pkg10:*, reg pkg11:V, reg p30:p(V +), reg r90:V, reg p31:p(V +), reg current4:*, reg current5:V, reg p32:p(V +), reg lib_loc7:*, reg lib_loc8:V, reg c23:L, reg lib_loc10:V, reg dr26:V, reg dc13:L, reg dx37:V, reg dx38:V, reg iV:*, reg iV1:V, reg c24:L, reg lib_loc12:V, reg iV3:V, reg dr28:V, reg dc14:L, reg dx39:V, reg lib_loc14:V, reg dx40:V, reg sufficient6:*, reg sufficient7:V, reg r93:V, reg __6:cls, reg r94:V, reg c25:L, reg lib_loc16:V, reg dx42:V, reg dr30:V, reg dc15:L, reg dx43:V, reg lib_loc18:V, reg dx44:V, reg __7:cls, reg r95:V, reg __8:cls, reg r96:V, reg p33:p(V +), reg r98:V, reg p34:p(V +), reg r100:V, reg i64:I, reg i65:I, reg attached:*, reg attached1:V, reg c26:L, reg i70:I, reg i71:I, reg r102:S, reg stop1:cls, reg gettextf2:cls, reg msg:*, reg msg1:V, reg p35:p(V +), reg sQuote3:cls, reg pkg12:*, reg pkg13:V, reg p36:p(V +), reg r105:V, reg p37:p(V +), reg current6:*, reg current7:V, reg p38:p(V +), reg dep12:*, reg dep13:V, reg c27:L, reg dep15:V, reg dr32:V, reg dc16:L, reg dx45:V, reg dx46:V, reg r108:V, reg p39:p(V +), reg target4:*, reg target5:V, reg p40:p(V +), reg sQuote4:cls, reg pkgname2:*, reg pkgname3:V, reg p41:p(V +), reg r112:V, reg p42:p(V +), reg r114:V, reg p43:p(V +), reg r116:V, reg i72:I, reg i73:I, reg attached2:*, reg attached3:V, reg r118:V, reg c28:L, reg quietly1:*, reg quietly2:V, reg r119:V, reg c29:L, reg packageStartupMessage:cls, reg gettextf3:cls, reg pkg14:*, reg pkg15:V, reg p44:p(V +), reg r121:V, reg p45:p(V +), reg r123:V, reg i78:I, reg library:cls, reg pkg16:*, reg pkg17:V, reg p46:p(V +), reg lib_loc19:*, reg lib_loc20:V, reg p47:p(V +), reg quietly3:*, reg quietly4:V, reg p48:p(V +), reg r128:V, reg c30:L, reg i79:I, reg c31:V, reg stop2:cls, reg gettextf4:cls, reg sQuote5:cls, reg pkg18:*, reg pkg19:V, reg p49:p(V +), reg r130:V, reg p50:p(V +), reg r132:V, reg p51:p(V +), reg r134:V, reg c33:L, reg c34:V, reg i82:I, reg useImports1:*, reg useImports2:V, reg c37:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r135:V, reg r136:V, reg pkgInfo17:*, reg pkgInfo18:V, reg c38:L, reg pkgInfo20:V, reg dr34:V, reg dc17:L, reg dx47:V, reg dx48:V, reg r137:V, reg names2:cls, reg r138:V, reg nss:*, reg nss1:V, reg s2:V, reg l2:I, reg i83:I, reg i84:I, reg i85:I, reg c39:L, reg x2:V, reg loadNamespace:cls, reg ns:*, reg ns1:V, reg p52:p(V +), reg lib_loc21:*, reg lib_loc22:V, reg p53:p(V +), reg r141:V |
    mkenv;
    st pkgInfo = pkgInfo;
    quietly_isMissing = missing.0(quietly);
    if quietly_isMissing then L0(FALSE) else L0(quietly);
  L0(quietly_orDefault):
    st quietly = quietly_orDefault;
    lib_loc_isMissing = missing.0(lib_loc);
    if lib_loc_isMissing then L1(NULL) else L1(lib_loc);
  L1(lib_loc_orDefault):
    st `lib.loc` = lib_loc_orDefault;
    useImports_isMissing = missing.0(useImports);
    if useImports_isMissing then L2(FALSE) else L2(useImports);
  L2(useImports_orDefault):
    st useImports = useImports_orDefault;
    r = clos `inner-1416728072`;
    st `.findVersion` = r;
    unique = ldf unique;
    check L33() else D0();
  D0():
    deopt 4 [];
  L33():
    p = prom<V +>{
      sym = ldf names;
      base = ldf names in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      pkgInfo1 = ld pkgInfo;
      pkgInfo2 = force? pkgInfo1;
      checkMissing(pkgInfo2);
      c = `is.object`(pkgInfo2);
      if c then L4() else L5(pkgInfo2);
    L2():
      r1 = dyn base(<lang `$`(pkgInfo, Depends)>);
      goto L0(r1);
    L3(dx1):
      names = ldf names in base;
      r4 = dyn names(dx1);
      goto L0(r4);
    L4():
      dr = tryDispatchBuiltin.1("$", pkgInfo2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L6() else L5(dr);
    L5(pkgInfo4):
      r3 = `$`(pkgInfo4, <sym Depends>);
      goto L3(r3);
    L6():
      dx = getTryDispatchBuiltinValue(dr);
      goto L3(dx);
    };
    r6 = dyn unique(p);
    check L34() else D1();
  D1():
    deopt 6 [r6];
  L34():
    st pkgs = r6;
    pkgInfo5 = ld pkgInfo;
    check L35() else D2();
  D2():
    deopt 8 [pkgInfo5];
  L35():
    pkgInfo6 = force? pkgInfo5;
    checkMissing(pkgInfo6);
    c1 = `is.object`(pkgInfo6);
    if c1 then L37() else L38(pkgInfo6);
  L36(dx3):
    c2 = `is.object`(dx3);
    if c2 then L40() else L41(dx3);
  L37():
    dr2 = tryDispatchBuiltin.1("$", pkgInfo6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L39() else L38(dr2);
  L38(pkgInfo8):
    r7 = `$`(pkgInfo8, <sym DESCRIPTION>);
    goto L36(r7);
  L3(dx7):
    st pkgname = dx7;
    setdiff = ldf setdiff;
    check L43() else D3();
  L39():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L36(dx2);
  L40():
    dr4 = tryDispatchBuiltin.1("[", dx3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L42() else L41(dr4);
  L41(dx5):
    __ = ldf `[` in base;
    r8 = dyn __(dx5, "Package");
    goto L3(r8);
  D3():
    deopt 16 [];
  L42():
    dx6 = getTryDispatchBuiltinValue(dr4);
    goto L3(dx6);
  L43():
    p1 = prom<V +>{
      pkgs = ld pkgs;
      pkgs1 = force? pkgs;
      checkMissing(pkgs1);
      return pkgs1;
    };
    r10 = dyn setdiff(p1, "base");
    check L44() else D4();
  D4():
    deopt 19 [r10];
  L44():
    s = toForSeq(r10);
    l = length(s);
    i = 0;
    goto L4(i);
  L4(i1):
    i2 = `+`.1(i1, 1);
    c3 = `<`.1(l, i2);
    if c3 then L45() else L28();
  L28():
    x = `[[`(s, i2, NULL, TRUE);
    st pkg = x;
    pkgInfo9 = ld pkgInfo;
    check L46() else D5();
  L45():
    useImports1 = ld useImports;
    check L129() else D49();
  D5():
    deopt 20 [i2, pkgInfo9];
  D49():
    deopt 194 [useImports1];
  L46():
    pkgInfo10 = force? pkgInfo9;
    checkMissing(pkgInfo10);
    c4 = `is.object`(pkgInfo10);
    if c4 then L48() else L49(i2, pkgInfo10);
  L129():
    useImports2 = force? useImports1;
    checkMissing(useImports2);
    c37 = `as.logical`(useImports2);
    if c37 then L130() else L29();
  L29():
    invisible.0();
    popenv;
    return NULL;
  L47(i8, dx9):
    c5 = `is.object`(dx9);
    if c5 then L51() else L52(i8, dx9);
  L48():
    dr6 = tryDispatchBuiltin.1("$", pkgInfo10);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L50() else L49(i2, dr6);
  L49(i6, pkgInfo12):
    r11 = `$`(pkgInfo12, <sym Depends>);
    goto L47(i6, r11);
  L130():
    sym6 = ldf names;
    base6 = ldf names in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L131() else L132();
  L5(i12, dx13):
    st depends = dx13;
    _in_ = ldf `%in%`;
    check L63() else D9();
  L30(r136):
    st nss = r136;
    nss = ld nss;
    check L139() else D52();
  L50():
    dx8 = getTryDispatchBuiltinValue(dr6);
    goto L47(i2, dx8);
  L51():
    dr8 = tryDispatchBuiltin.1("[", dx9);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L53() else L52(i8, dr8);
  L52(i10, dx11):
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L54() else L55();
  L131():
    pkgInfo17 = ld pkgInfo;
    check L133() else D50();
  L132():
    r135 = dyn base6(<lang `$`(pkgInfo, Imports)>);
    goto L30(r135);
  D9():
    deopt 35 [i12];
  D50():
    deopt 198 [pkgInfo17];
  D52():
    deopt 204 [nss];
  L6(i15, dx16, r13):
    pkg = ld pkg;
    check L62() else D8();
  L53():
    dx12 = getTryDispatchBuiltinValue(dr8);
    goto L5(i8, dx12);
  L54():
    pkgInfo13 = ld pkgInfo;
    check L56() else D6();
  L55():
    r12 = dyn base1(<lang `$`(pkgInfo, Depends)>);
    goto L6(i10, dx11, r12);
  L63():
    p3 = prom<V +>{
      paste0 = ldf paste0;
      p2 = prom<V +>{
        pkg2 = ld pkg;
        pkg3 = force? pkg2;
        checkMissing(pkg3);
        return pkg3;
      };
      r19 = dyn paste0("package:", p2);
      return r19;
    };
    p4 = prom<V +>{
      search = ldf search;
      r21 = dyn search();
      return r21;
    };
    r23 = dyn _in_(p3, p4);
    check L64() else D10();
  L133():
    pkgInfo18 = force? pkgInfo17;
    checkMissing(pkgInfo18);
    c38 = `is.object`(pkgInfo18);
    if c38 then L135() else L136(pkgInfo18);
  L139():
    nss1 = force? nss;
    checkMissing(nss1);
    s2 = toForSeq(nss1);
    l2 = length(s2);
    i83 = 0;
    goto L31(i83);
  D6():
    deopt 25 [i10, dx11, pkgInfo13];
  D8():
    deopt 29 [i15, dx16, r13, pkg];
  D10():
    deopt 38 [i12, r23];
  L31(i84):
    i85 = `+`.1(i84, 1);
    c39 = `<`.1(l2, i85);
    if c39 then L140() else L32();
  L56():
    pkgInfo14 = force? pkgInfo13;
    checkMissing(pkgInfo14);
    c6 = `is.object`(pkgInfo14);
    if c6 then L58() else L59(i10, dx11, pkgInfo14);
  L62():
    pkg1 = force? pkg;
    checkMissing(pkg1);
    r16 = `==`(r13, pkg1);
    __1 = ldf `[` in base;
    r17 = dyn __1(dx16, r16);
    goto L5(i15, r17);
  L64():
    st attached = r23;
    _findVersion = ldf `.findVersion`;
    check L65() else D11();
  L134(dx48):
    names2 = ldf names in base;
    r138 = dyn names2(dx48);
    check L138() else D51();
  L135():
    dr34 = tryDispatchBuiltin.1("$", pkgInfo18);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L137() else L136(dr34);
  L136(pkgInfo20):
    r137 = `$`(pkgInfo20, <sym Imports>);
    goto L134(r137);
  D11():
    deopt 41 [i12];
  D51():
    deopt 202 [r138];
  L32():
    x2 = `[[`(s2, i85, NULL, TRUE);
    st ns = x2;
    loadNamespace = ldf loadNamespace;
    check L141() else D53();
  L57(i19, dx21, dx22):
    names1 = ldf names in base;
    r15 = dyn names1(dx22);
    check L61() else D7();
  L58():
    dr10 = tryDispatchBuiltin.1("$", pkgInfo14);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L60() else L59(i10, dx11, dr10);
  L59(i17, dx18, pkgInfo16):
    r14 = `$`(pkgInfo16, <sym Depends>);
    goto L57(i17, dx18, r14);
  L65():
    p5 = prom<V +>{
      pkg4 = ld pkg;
      pkg5 = force? pkg4;
      checkMissing(pkg5);
      return pkg5;
    };
    p6 = prom<V +>{
      lib_loc1 = ld `lib.loc`;
      lib_loc2 = force? lib_loc1;
      checkMissing(lib_loc2);
      return lib_loc2;
    };
    r26 = dyn _findVersion(p5, p6);
    check L66() else D12();
  L137():
    dx47 = getTryDispatchBuiltinValue(dr34);
    goto L134(dx47);
  L138():
    goto L30(r138);
  L140():
    invisible.0();
    popenv;
    return i85;
  D7():
    deopt 29 [i19, dx21, r15];
  D12():
    deopt 44 [i12, r26];
  D53():
    deopt 207 [i85];
  L60():
    dx20 = getTryDispatchBuiltinValue(dr10);
    goto L57(i10, dx11, dx20);
  L61():
    goto L6(i19, dx21, r15);
  L66():
    st current = r26;
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L67() else L68();
  L141():
    p52 = prom<V +>{
      ns = ld ns;
      ns1 = force? ns;
      checkMissing(ns1);
      return ns1;
    };
    p53 = prom<V +>{
      lib_loc21 = ld `lib.loc`;
      lib_loc22 = force? lib_loc21;
      checkMissing(lib_loc22);
      return lib_loc22;
    };
    r141 = dyn loadNamespace(p52, p53);
    check L142() else D54();
  D54():
    deopt 210 [i85, r141];
  L7(i22, r28):
    c8 = `as.logical`(r28);
    if c8 then L70() else L8();
  L67():
    current = ld current;
    check L69() else D13();
  L68():
    r27 = dyn base2(<sym current>);
    goto L7(i12, r27);
  L142():
    goto L31(i85);
  D13():
    deopt 47 [i12, current];
  L8():
    goto L9(i22);
  L9(i25):
    lengths = ldf lengths;
    check L74() else D16();
  L69():
    current1 = force? current;
    checkMissing(current1);
    c7 = `==`(current1, NULL);
    goto L7(i12, c7);
  L70():
    stop = ldf stop;
    check L71() else D14();
  D14():
    deopt 51 [i22];
  D16():
    deopt 61 [i25];
  L71():
    p11 = prom<V +>{
      gettextf = ldf gettextf;
      p8 = prom<V +>{
        sQuote = ldf sQuote;
        p7 = prom<V +>{
          pkg6 = ld pkg;
          pkg7 = force? pkg6;
          checkMissing(pkg7);
          return pkg7;
        };
        r30 = dyn sQuote(p7);
        return r30;
      };
      p10 = prom<V +>{
        sQuote1 = ldf sQuote;
        p9 = prom<V +>{
          pkgname = ld pkgname;
          pkgname1 = force? pkgname;
          checkMissing(pkgname1);
          return pkgname1;
        };
        r33 = dyn sQuote1(p9);
        return r33;
      };
      r35 = dyn gettextf("package %s required by %s could not be found", p8, p10);
      return r35;
    };
    r37 = dyn stop[, `call.`, domain](p11, FALSE, NA_LGL);
    check L72() else D15();
  L74():
    p12 = prom<V +>{
      depends = ld depends;
      depends1 = force? depends;
      checkMissing(depends1);
      return depends1;
    };
    r40 = dyn lengths(p12);
    check L75() else D17();
  D15():
    deopt 57 [i22, r37];
  D17():
    deopt 63 [i25, r40];
  L72():
    goto L9(i22);
  L75():
    r41 = `>`(r40, 1);
    st have_vers = r41;
    depends2 = ld depends;
    check L76() else D18();
  D18():
    deopt 67 [i25, depends2];
  L76():
    depends3 = force? depends2;
    checkMissing(depends3);
    c9 = `is.object`(depends3);
    if c9 then L77() else L78(i25, depends3);
  L10(i29, dx24):
    s1 = toForSeq(dx24);
    l1 = length(s1);
    i30 = 0;
    goto L11(i29, i30);
  L77():
    dr12 = tryDispatchBuiltin.1("[", depends3);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L79() else L78(i25, dr12);
  L78(i27, depends5):
    have_vers = ld have_vers;
    check L80() else D19();
  D19():
    deopt 69 [i27, depends5, have_vers];
  L11(i31, i32):
    i33 = `+`.1(i32, 1);
    c10 = `<`.1(l1, i33);
    if c10 then L81() else L22();
  L79():
    dx23 = getTryDispatchBuiltinValue(dr12);
    goto L10(i25, dx23);
  L80():
    have_vers1 = force? have_vers;
    __2 = ldf `[` in base;
    r42 = dyn __2(depends5, have_vers1);
    goto L10(i27, r42);
  L22():
    x1 = `[[`(s1, i33, NULL, TRUE);
    st dep = x1;
    as_numeric_version = ldf `as.numeric_version`;
    check L82() else D20();
  L81():
    attached2 = ld attached;
    check L115() else D41();
  D20():
    deopt 73 [i31, i33];
  D41():
    deopt 154 [i31, attached2];
  L82():
    p13 = prom<V +>{
      dep = ld dep;
      dep1 = force? dep;
      checkMissing(dep1);
      c11 = `is.object`(dep1);
      if c11 then L1() else L2(dep1);
    L0(dx26):
      return dx26;
    L1():
      dr14 = tryDispatchBuiltin.1("$", dep1);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2(dr14);
    L2(dep3):
      r43 = `$`(dep3, <sym version>);
      goto L0(r43);
    L3():
      dx25 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx25);
    };
    r45 = dyn as_numeric_version(p13);
    check L83() else D21();
  L115():
    attached3 = force? attached2;
    checkMissing(attached3);
    r118 = `!`(attached3);
    c28 = `as.logical`(r118);
    if c28 then L116() else L23();
  D21():
    deopt 75 [i31, i33, r45];
  L23():
    goto L27(i31);
  L27(i82):
    goto L4(i82);
  L83():
    st target = r45;
    do_call = ldf `do.call`;
    check L84() else D22();
  L116():
    quietly1 = ld quietly;
    check L117() else D42();
  D22():
    deopt 78 [i31, i33];
  D42():
    deopt 157 [i31, quietly1];
  L84():
    p14 = prom<V +>{
      dep4 = ld dep;
      dep5 = force? dep4;
      checkMissing(dep5);
      c12 = `is.object`(dep5);
      if c12 then L1() else L2(dep5);
    L0(dx28):
      return dx28;
    L1():
      dr16 = tryDispatchBuiltin.1("$", dep5);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2(dr16);
    L2(dep7):
      r46 = `$`(dep7, <sym op>);
      goto L0(r46);
    L3():
      dx27 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx27);
    };
    p15 = prom<V +>{
      sym3 = ldf list;
      base3 = ldf list in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r49):
      return r49;
    L1():
      current2 = ld current;
      current3 = force? current2;
      checkMissing(current3);
      target = ld target;
      target1 = force? target;
      checkMissing(target1);
      list = ldf list in base;
      r50 = dyn list(current3, target1);
      goto L0(r50);
    L2():
      r48 = dyn base3(<sym current>, <sym target>);
      goto L0(r48);
    };
    r52 = dyn do_call(p14, p15);
    check L85() else D23();
  L117():
    quietly2 = force? quietly1;
    checkMissing(quietly2);
    r119 = `!`(quietly2);
    c29 = `as.logical`(r119);
    if c29 then L118() else L24();
  D23():
    deopt 81 [i31, i33, r52];
  L24():
    goto L25(i31);
  L25(i78):
    library = ldf library;
    check L122() else D45();
  L85():
    st sufficient = r52;
    sufficient = ld sufficient;
    check L86() else D24();
  L118():
    packageStartupMessage = ldf packageStartupMessage;
    check L119() else D43();
  D24():
    deopt 83 [i31, i33, sufficient];
  D43():
    deopt 161 [i31];
  D45():
    deopt 169 [i78];
  L86():
    sufficient1 = force? sufficient;
    checkMissing(sufficient1);
    r53 = `!`(sufficient1);
    c13 = `as.logical`(r53);
    if c13 then L87() else L12();
  L119():
    p45 = prom<V +>{
      gettextf3 = ldf gettextf;
      p44 = prom<V +>{
        pkg14 = ld pkg;
        pkg15 = force? pkg14;
        checkMissing(pkg15);
        return pkg15;
      };
      r121 = dyn gettextf3("Loading required package: %s", p44);
      return r121;
    };
    r123 = dyn packageStartupMessage[, domain](p45, NA_LGL);
    check L120() else D44();
  L122():
    p46 = prom<V +>{
      pkg16 = ld pkg;
      pkg17 = force? pkg16;
      checkMissing(pkg17);
      return pkg17;
    };
    p47 = prom<V +>{
      lib_loc19 = ld `lib.loc`;
      lib_loc20 = force? lib_loc19;
      checkMissing(lib_loc20);
      return lib_loc20;
    };
    p48 = prom<V +>{
      quietly3 = ld quietly;
      quietly4 = force? quietly3;
      checkMissing(quietly4);
      return quietly4;
    };
    r128 = dyn library[, `character.only`, `logical.return`, `lib.loc`, quietly](p46, TRUE, TRUE, p47, p48);
    check L123() else D46();
  D44():
    deopt 165 [i31, r123];
  D46():
    deopt 179 [i78, r128];
  L12():
    goto L21(i31, i33);
  L21(i72, i73):
    goto L11(i72, i73);
  L87():
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L88() else L89();
  L120():
    goto L25(i31);
  L123():
    c30 = `as.logical`(r128);
    if c30 then L26(i78, c30) else L124();
  L13(i46, i47, r55):
    c15 = `as.logical`(r55);
    if c15 then L91() else L14();
  L26(i79, c31):
    goto L27(i79);
  L88():
    lib_loc3 = ld `lib.loc`;
    check L90() else D25();
  L89():
    r54 = dyn base4(<sym lib.loc>);
    goto L13(i31, i33, r54);
  L124():
    stop2 = ldf stop;
    check L125() else D47();
  D25():
    deopt 87 [i31, i33, lib_loc3];
  D47():
    deopt 181 [i78, c30];
  L14():
    goto L15(i46, i47);
  L15(i52, i53):
    lapply = ldf lapply;
    check L95() else D28();
  L90():
    lib_loc4 = force? lib_loc3;
    checkMissing(lib_loc4);
    c14 = `==`(lib_loc4, NULL);
    goto L13(i31, i33, c14);
  L91():
    _libPaths = ldf `.libPaths`;
    check L92() else D26();
  L125():
    p51 = prom<V +>{
      gettextf4 = ldf gettextf;
      p50 = prom<V +>{
        sQuote5 = ldf sQuote;
        p49 = prom<V +>{
          pkg18 = ld pkg;
          pkg19 = force? pkg18;
          checkMissing(pkg19);
          return pkg19;
        };
        r130 = dyn sQuote5(p49);
        return r130;
      };
      r132 = dyn gettextf4("package %s could not be loaded", p50);
      return r132;
    };
    r134 = dyn stop2[, `call.`, domain](p51, FALSE, NA_LGL);
    check L126() else D48();
  D26():
    deopt 91 [i46, i47];
  D28():
    deopt 97 [i52, i53];
  D48():
    deopt 187 [i78, c30, r134];
  L92():
    r56 = dyn _libPaths();
    check L93() else D27();
  L95():
    p16 = prom<V +>{
      lib_loc5 = ld `lib.loc`;
      lib_loc6 = force? lib_loc5;
      checkMissing(lib_loc6);
      return lib_loc6;
    };
    p17 = prom<V +>{
      _findVersion1 = ld `.findVersion`;
      _findVersion2 = force? _findVersion1;
      checkMissing(_findVersion2);
      return _findVersion2;
    };
    p18 = prom<V +>{
      pkg8 = ld pkg;
      pkg9 = force? pkg8;
      checkMissing(pkg9);
      return pkg9;
    };
    r61 = dyn lapply[, , pkg](p16, p17, p18);
    check L96() else D29();
  L126():
    c33 = `as.logical`(r134);
    c34 = `||`(c30, c33);
    goto L26(i78, c34);
  D27():
    deopt 92 [i46, i47, r56];
  D29():
    deopt 102 [i52, i53, r61];
  L93():
    st `lib.loc` = r56;
    goto L15(i46, i47);
  L96():
    st allV = r61;
    do_call1 = ldf `do.call`;
    check L97() else D30();
  D30():
    deopt 105 [i52, i53];
  L97():
    p19 = prom<V +>{
      c16 = ld c;
      c17 = force? c16;
      checkMissing(c17);
      return c17;
    };
    p23 = prom<V +>{
      allV = ld allV;
      allV1 = force? allV;
      checkMissing(allV1);
      c18 = `is.object`(allV1);
      if c18 then L1() else L2(allV1);
    L0(dx30):
      return dx30;
    L1():
      dr18 = tryDispatchBuiltin.1("[", allV1);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L3() else L2(dr18);
    L2(allV3):
      which = ldf which;
      p22 = prom<V +>{
        vapply = ldf vapply;
        p20 = prom<V +>{
          allV4 = ld allV;
          allV5 = force? allV4;
          checkMissing(allV5);
          return allV5;
        };
        p21 = prom<V +>{
          is_null = ld `is.null`;
          is_null1 = force? is_null;
          checkMissing(is_null1);
          return is_null1;
        };
        r65 = dyn vapply(p20, p21, NA_LGL);
        r66 = `!`(r65);
        return r66;
      };
      r68 = dyn which(p22);
      st iV = r68;
      __3 = ldf `[` in base;
      r69 = dyn __3(allV3, r68);
      goto L0(r69);
    L3():
      dx29 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx29);
    };
    r71 = dyn do_call1(p19, p23);
    check L98() else D31();
  D31():
    deopt 108 [i52, i53, r71];
  L98():
    st versions = r71;
    vapply1 = ldf vapply;
    check L99() else D32();
  D32():
    deopt 111 [i52, i53];
  L99():
    p24 = prom<V +>{
      versions = ld versions;
      versions1 = force? versions;
      checkMissing(versions1);
      return versions1;
    };
    p25 = prom<V +>{
      dep8 = ld dep;
      dep9 = force? dep8;
      checkMissing(dep9);
      c19 = `is.object`(dep9);
      if c19 then L1() else L2(dep9);
    L0(dx32):
      return dx32;
    L1():
      dr20 = tryDispatchBuiltin.1("$", dep9);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L3() else L2(dr20);
    L2(dep11):
      r73 = `$`(dep11, <sym op>);
      goto L0(r73);
    L3():
      dx31 = getTryDispatchBuiltinValue(dr20);
      goto L0(dx31);
    };
    p26 = prom<V +>{
      logical = ldf logical;
      r75 = dyn logical(1);
      return r75;
    };
    p27 = prom<V +>{
      target2 = ld target;
      target3 = force? target2;
      checkMissing(target3);
      return target3;
    };
    r78 = dyn vapply1(p24, p25, p26, p27);
    check L100() else D33();
  D33():
    deopt 116 [i52, i53, r78];
  L100():
    st sufficient = r78;
    sym5 = ldf any;
    base5 = ldf any in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L101() else L102();
  L16(i58, i59, r80):
    c20 = `as.logical`(r80);
    if c20 then L105() else L17();
  L101():
    sufficient2 = ld sufficient;
    check L103() else D34();
  L102():
    r79 = dyn base5(<sym sufficient>);
    goto L16(i52, i53, r79);
  D34():
    deopt 120 [i52, i53, sufficient2];
  L17():
    goto L18(i58, i59);
  L18(i64, i65):
    attached = ld attached;
    check L109() else D38();
  L103():
    sufficient3 = force? sufficient2;
    checkMissing(sufficient3);
    any = ldf any in base;
    r81 = dyn any(sufficient3);
    check L104() else D35();
  L105():
    warning = ldf warning;
    check L106() else D36();
  D35():
    deopt 123 [i52, i53, r81];
  D36():
    deopt 125 [i58, i59];
  D38():
    deopt 134 [i64, i65, attached];
  L104():
    goto L16(i52, i53, r81);
  L106():
    p34 = prom<V +>{
      gettextf1 = ldf gettextf;
      p29 = prom<V +>{
        versions2 = ld versions;
        versions3 = force? versions2;
        checkMissing(versions3);
        c21 = `is.object`(versions3);
        if c21 then L2() else L3(versions3);
      L0(dx34):
        return dx34;
      L2():
        dr22 = tryDispatchBuiltin.1("[", versions3);
        dc11 = getTryDispatchBuiltinDispatched(dr22);
        if dc11 then L4() else L3(dr22);
      L3(versions5):
        which1 = ldf which;
        p28 = prom<V +>{
          sufficient4 = ld sufficient;
          sufficient5 = force? sufficient4;
          checkMissing(sufficient5);
          return sufficient5;
        };
        r83 = dyn which1(p28);
        c22 = `is.object`(r83);
        if c22 then L5() else L6(versions5, r83);
      L1(versions9, dx36):
        __5 = ldf `[` in base;
        r87 = dyn __5(versions9, dx36);
        goto L0(r87);
      L4():
        dx33 = getTryDispatchBuiltinValue(dr22);
        goto L0(dx33);
      L5():
        dr24 = tryDispatchBuiltin.1("[", r83);
        dc12 = getTryDispatchBuiltinDispatched(dr24);
        if dc12 then L7() else L6(versions5, dr24);
      L6(versions7, r85):
        __4 = ldf `[` in base;
        r86 = dyn __4(r85, 1);
        goto L1(versions7, r86);
      L7():
        dx35 = getTryDispatchBuiltinValue(dr24);
        goto L1(versions5, dx35);
      };
      p31 = prom<V +>{
        sQuote2 = ldf sQuote;
        p30 = prom<V +>{
          pkg10 = ld pkg;
          pkg11 = force? pkg10;
          checkMissing(pkg11);
          return pkg11;
        };
        r90 = dyn sQuote2(p30);
        return r90;
      };
      p32 = prom<V +>{
        current4 = ld current;
        current5 = force? current4;
        checkMissing(current5);
        return current5;
      };
      p33 = prom<V +>{
        lib_loc7 = ld `lib.loc`;
        lib_loc8 = force? lib_loc7;
        checkMissing(lib_loc8);
        c23 = `is.object`(lib_loc8);
        if c23 then L3() else L4(lib_loc8);
      L0(dx38):
        return dx38;
      L3():
        dr26 = tryDispatchBuiltin.1("[", lib_loc8);
        dc13 = getTryDispatchBuiltinDispatched(dr26);
        if dc13 then L5() else L4(dr26);
      L4(lib_loc10):
        iV = ld iV;
        iV1 = force? iV;
        checkMissing(iV1);
        c24 = `is.object`(iV1);
        if c24 then L6() else L7(lib_loc10, iV1);
      L1(lib_loc14, dx40):
        c25 = `is.object`(dx40);
        if c25 then L9() else L10(lib_loc14, dx40);
      L5():
        dx37 = getTryDispatchBuiltinValue(dr26);
        goto L0(dx37);
      L6():
        dr28 = tryDispatchBuiltin.1("[", iV1);
        dc14 = getTryDispatchBuiltinDispatched(dr28);
        if dc14 then L8() else L7(lib_loc10, dr28);
      L7(lib_loc12, iV3):
        sufficient6 = ld sufficient;
        sufficient7 = force? sufficient6;
        checkMissing(sufficient7);
        r93 = `!`(sufficient7);
        __6 = ldf `[` in base;
        r94 = dyn __6(iV3, r93);
        goto L1(lib_loc12, r94);
      L2(lib_loc18, dx44):
        __8 = ldf `[` in base;
        r96 = dyn __8(lib_loc18, dx44);
        goto L0(r96);
      L8():
        dx39 = getTryDispatchBuiltinValue(dr28);
        goto L1(lib_loc10, dx39);
      L9():
        dr30 = tryDispatchBuiltin.1("[", dx40);
        dc15 = getTryDispatchBuiltinDispatched(dr30);
        if dc15 then L11() else L10(lib_loc14, dr30);
      L10(lib_loc16, dx42):
        __7 = ldf `[` in base;
        r95 = dyn __7(dx42, 1);
        goto L2(lib_loc16, r95);
      L11():
        dx43 = getTryDispatchBuiltinValue(dr30);
        goto L2(lib_loc14, dx43);
      };
      r98 = dyn gettextf1("version %s of %s masked by %s in %s", p29, p31, p32, p33);
      return r98;
    };
    r100 = dyn warning[, `call.`, domain](p34, FALSE, NA_LGL);
    check L107() else D37();
  L109():
    attached1 = force? attached;
    checkMissing(attached1);
    c26 = `as.logical`(attached1);
    if c26 then L110() else L19();
  D37():
    deopt 131 [i58, i59, r100];
  L19():
    goto L20(i64, i65, "package %s %s was found, but %s %s is required by %s");
  L20(i70, i71, r102):
    st msg = r102;
    stop1 = ldf stop;
    check L112() else D39();
  L107():
    goto L18(i58, i59);
  L110():
    goto L20(i64, i65, "package %s %s is loaded, but %s %s is required by %s");
  D39():
    deopt 142 [i70, i71];
  L112():
    p43 = prom<V +>{
      gettextf2 = ldf gettextf;
      p35 = prom<V +>{
        msg = ld msg;
        msg1 = force? msg;
        checkMissing(msg1);
        return msg1;
      };
      p37 = prom<V +>{
        sQuote3 = ldf sQuote;
        p36 = prom<V +>{
          pkg12 = ld pkg;
          pkg13 = force? pkg12;
          checkMissing(pkg13);
          return pkg13;
        };
        r105 = dyn sQuote3(p36);
        return r105;
      };
      p38 = prom<V +>{
        current6 = ld current;
        current7 = force? current6;
        checkMissing(current7);
        return current7;
      };
      p39 = prom<V +>{
        dep12 = ld dep;
        dep13 = force? dep12;
        checkMissing(dep13);
        c27 = `is.object`(dep13);
        if c27 then L1() else L2(dep13);
      L0(dx46):
        return dx46;
      L1():
        dr32 = tryDispatchBuiltin.1("$", dep13);
        dc16 = getTryDispatchBuiltinDispatched(dr32);
        if dc16 then L3() else L2(dr32);
      L2(dep15):
        r108 = `$`(dep15, <sym op>);
        goto L0(r108);
      L3():
        dx45 = getTryDispatchBuiltinValue(dr32);
        goto L0(dx45);
      };
      p40 = prom<V +>{
        target4 = ld target;
        target5 = force? target4;
        checkMissing(target5);
        return target5;
      };
      p42 = prom<V +>{
        sQuote4 = ldf sQuote;
        p41 = prom<V +>{
          pkgname2 = ld pkgname;
          pkgname3 = force? pkgname2;
          checkMissing(pkgname3);
          return pkgname3;
        };
        r112 = dyn sQuote4(p41);
        return r112;
      };
      r114 = dyn gettextf2(p35, p37, p38, p39, p40, p42);
      return r114;
    };
    r116 = dyn stop1[, `call.`, domain](p43, FALSE, NA_LGL);
    check L113() else D40();
  D40():
    deopt 148 [i70, i71, r116];
  L113():
    goto L21(i70, i71);
  }
}
fun `inner-1416728072`(pkg, `lib.loc`) {
  (reg pkg:*, reg lib_loc:*) -+> V { var pkg:*, var `lib.loc`:*, reg system_file:cls, reg pkg1:*, reg pkg2:V, reg p:p(V +), reg lib_loc1:*, reg lib_loc2:V, reg p1:p(V +), reg r2:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg pfile:*, reg pfile1:V, reg nzchar:cls, reg r5:V, reg c:L, reg as_numeric_version:cls, reg readRDS:cls, reg pfile2:*, reg pfile3:V, reg p2:p(V +), reg r7:V, reg c1:L, reg r9:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r10:V, reg c2:L, reg dx3:V, reg dr2:V, reg dc1:L, reg dx4:V, reg dx5:V, reg __:cls, reg r11:V, reg p3:p(V +), reg r13:V |
    mkenv;
    st pkg = pkg;
    st `lib.loc` = lib_loc;
    system_file = ldf `system.file`;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p = prom<V +>{
      pkg1 = ld pkg;
      pkg2 = force? pkg1;
      checkMissing(pkg2);
      return pkg2;
    };
    p1 = prom<V +>{
      lib_loc1 = ld `lib.loc`;
      lib_loc2 = force? lib_loc1;
      checkMissing(lib_loc2);
      return lib_loc2;
    };
    r2 = dyn system_file[, , package, `lib.loc`]("Meta", "package.rds", p, p1);
    check L3() else D1();
  D1():
    deopt 8 [r2];
  L3():
    st pfile = r2;
    sym = ldf nzchar;
    base = ldf nzchar in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r4):
    c = `as.logical`(r4);
    if c then L8() else L1();
  L4():
    pfile = ld pfile;
    check L6() else D2();
  L5():
    r3 = dyn base(<sym pfile>);
    goto L0(r3);
  D2():
    deopt 12 [pfile];
  L1():
    invisible.0();
    popenv;
    return NULL;
  L6():
    pfile1 = force? pfile;
    checkMissing(pfile1);
    nzchar = ldf nzchar in base;
    r5 = dyn nzchar(pfile1);
    check L7() else D3();
  L8():
    as_numeric_version = ldf `as.numeric_version`;
    check L9() else D4();
  D3():
    deopt 15 [r5];
  D4():
    deopt 17 [];
  L7():
    goto L0(r5);
  L9():
    p3 = prom<V +>{
      readRDS = ldf readRDS;
      p2 = prom<V +>{
        pfile2 = ld pfile;
        pfile3 = force? pfile2;
        checkMissing(pfile3);
        return pfile3;
      };
      r7 = dyn readRDS(p2);
      c1 = `is.object`(r7);
      if c1 then L2() else L3(r7);
    L1(dx1):
      c2 = `is.object`(dx1);
      if c2 then L5() else L6(dx1);
    L2():
      dr = tryDispatchBuiltin.1("$", r7);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L4() else L3(dr);
    L3(r9):
      r10 = `$`(r9, <sym DESCRIPTION>);
      goto L1(r10);
    L0(dx5):
      return dx5;
    L4():
      dx = getTryDispatchBuiltinValue(dr);
      goto L1(dx);
    L5():
      dr2 = tryDispatchBuiltin.1("[", dx1);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L7() else L6(dr2);
    L6(dx3):
      __ = ldf `[` in base;
      r11 = dyn __(dx3, "Version");
      goto L0(r11);
    L7():
      dx4 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx4);
    };
    r13 = dyn as_numeric_version(p3);
    check L10() else D5();
  D5():
    deopt 19 [r13];
  L10():
    popenv;
    return r13;
  }
}