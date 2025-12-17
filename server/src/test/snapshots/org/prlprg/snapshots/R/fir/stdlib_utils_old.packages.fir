fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2335808267;
    st `old.packages` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2335808267(`lib.loc`, repos, contriburl, instPkgs, method, available, checkBuilt, `...`, type) {
  (reg lib_loc:*, reg repos:*, reg contriburl:*, reg instPkgs:*, reg method:*, reg available:*, reg checkBuilt:*, reg ddd:dots, reg type:*) -+> V { var `lib.loc`:*, reg lib_loc_isMissing:L, reg lib_loc_orDefault:*, var repos:*, reg repos_isMissing:L, reg repos_orDefault:*, reg getOption:cls, reg r:V, reg p:p(V +), var contriburl:*, reg contriburl_isMissing:L, reg contriburl_orDefault:*, reg contrib_url:cls, reg repos1:*, reg repos2:V, reg p1:p(V +), reg type1:*, reg type2:V, reg p2:p(V +), reg r4:V, reg p3:p(V +), var instPkgs:*, reg instPkgs_isMissing:L, reg instPkgs_orDefault:*, reg installed_packages:cls, reg lib_loc1:*, reg lib_loc2:V, reg p4:p(V +), reg ddd1:*, reg r7:V, reg p5:p(V +), var method:*, var available:*, reg available_isMissing:L, reg available_orDefault:*, var checkBuilt:*, reg checkBuilt_isMissing:L, reg checkBuilt_orDefault:*, var `...`:dots?, var type:*, reg type_isMissing:L, reg type_orDefault:*, reg getOption1:cls, reg r9:V, reg p6:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r11:V, reg r12:V, reg type3:*, reg type4:V, reg c:L, reg r13:V, reg c1:L, reg stop:cls, reg r14:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r16:V, reg r17:V, reg lib_loc3:*, reg lib_loc4:V, reg c2:V, reg c3:L, reg _libPaths:cls, reg r18:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r20:V, reg r21:V, reg missing:cls, reg r22:V, reg r23:V, reg c4:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r24:V, reg r25:V, reg instPkgs1:*, reg instPkgs2:V, reg is_matrix:cls, reg r26:V, reg r27:V, reg c5:L, reg c6:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r28:V, reg c10:L, reg r29:V, reg instPkgs3:*, reg instPkgs4:V, reg c11:L, reg c13:L, reg dr:V, reg dc:L, reg dx:V, reg c15:L, reg dx1:V, reg __:cls, reg r30:V, reg c16:L, reg r31:V, reg c17:L, reg c18:V, reg c20:L, reg stop1:cls, reg r32:V, reg r33:V, reg NROW:cls, reg instPkgs7:*, reg instPkgs8:V, reg p7:p(V +), reg r36:V, reg r37:V, reg c21:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r40:V, reg r41:V, reg available1:*, reg available2:V, reg c22:V, reg c23:L, reg available_packages:cls, reg contriburl1:*, reg contriburl2:V, reg p8:p(V +), reg method1:*, reg method2:V, reg p9:p(V +), reg ddd2:dots?, reg r44:V, reg r45:V, reg ___:cls, reg r46:V, reg r47:cls, reg available3:*, reg available4:V, reg p10:p(V +), reg r49:V, reg getRversion:cls, reg r50:V, reg l:*, reg c24:L, reg r52:I, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r59:V, reg r60:I, reg l5:*, reg r61:I, reg r62:V, reg c25:cls, reg r63:V, reg ____:cls, reg r64:V, reg nrow:cls, reg instPkgs9:*, reg instPkgs10:V, reg p11:p(V +), reg r66:V, reg r67:V, reg s:V, reg l6:I, reg i:I, reg i1:I, reg i2:I, reg c26:L, reg x:V, reg _in_:cls, reg instPkgs11:*, reg instPkgs12:V, reg c27:L, reg instPkgs14:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg k:*, reg k1:V, reg __1:cls, reg r68:V, reg p12:p(V +), reg r70:V, reg c28:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r72:V, reg i11:I, reg r73:V, reg instPkgs15:*, reg instPkgs16:V, reg c29:L, reg i13:I, reg instPkgs18:V, reg dr6:V, reg dc3:L, reg dx6:V, reg i15:I, reg dx7:V, reg k2:*, reg k3:V, reg __2:cls, reg r74:V, reg available5:*, reg available6:V, reg c30:L, reg i17:I, reg dr8:V, reg dc4:L, reg dx8:V, reg i19:I, reg dx9:V, reg __3:cls, reg r75:V, reg match:cls, reg r76:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r77:V, reg i22:I, reg r78:V, reg z:*, reg z1:V, reg is_na:cls, reg r79:V, reg c31:L, reg available9:*, reg available10:V, reg c32:L, reg i28:I, reg available12:V, reg dr10:V, reg dc5:L, reg dx10:V, reg i30:I, reg dx11:V, reg z2:*, reg z3:V, reg __4:cls, reg r81:V, reg checkBuilt1:*, reg checkBuilt2:V, reg r82:V, reg c33:L, reg i31:I, reg c34:V, reg package_version:cls, reg instPkgs19:*, reg instPkgs20:V, reg c36:L, reg instPkgs22:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg k4:*, reg k5:V, reg __5:cls, reg r83:V, reg p13:p(V +), reg r85:V, reg minorR:*, reg minorR1:V, reg r86:V, reg c37:L, reg c38:V, reg c40:L, reg i35:I, reg c42:V, reg package_version1:cls, reg onRepos:*, reg onRepos1:V, reg c43:L, reg onRepos3:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg __6:cls, reg r87:V, reg p14:p(V +), reg r89:V, reg package_version2:cls, reg instPkgs23:*, reg instPkgs24:V, reg c44:L, reg instPkgs26:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg k6:*, reg k7:V, reg __7:cls, reg r90:V, reg p15:p(V +), reg r92:V, reg r93:V, reg c45:L, reg c46:V, reg c48:L, reg onRepos4:*, reg onRepos5:V, reg c49:L, reg i42:I, reg onRepos7:V, reg dr18:V, reg dc9:L, reg dx18:V, reg i44:I, reg dx19:V, reg __8:cls, reg r95:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r96:V, reg i47:I, reg r97:V, reg deps:*, reg deps1:V, reg is_na1:cls, reg r98:V, reg r99:V, reg c50:L, reg ___1:cls, reg r100:V, reg r101:cls, reg deps2:*, reg deps3:V, reg p16:p(V +), reg r103:V, reg c51:L, reg i51:I, reg dr20:V, reg dc10:L, reg dx20:V, reg i53:I, reg dx21:V, reg __9:cls, reg r106:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r107:V, reg i56:I, reg r108:V, reg Rdeps:*, reg Rdeps1:V, reg length:cls, reg r109:V, reg r110:V, reg c52:L, reg i58:I, reg c54:V, reg do_call:cls, reg Rdeps2:*, reg Rdeps3:V, reg c55:L, reg Rdeps5:V, reg dr22:V, reg dc11:L, reg dx22:V, reg dx23:V, reg r111:V, reg p17:p(V +), reg sym11:cls, reg base11:cls, reg guard11:L, reg r113:V, reg r114:V, reg currentR:*, reg currentR1:V, reg Rdeps6:*, reg Rdeps7:V, reg c56:L, reg Rdeps9:V, reg dr24:V, reg dc12:L, reg dx24:V, reg dx25:V, reg r115:V, reg list:cls, reg r116:V, reg p18:p(V +), reg r118:V, reg r119:V, reg c57:L, reg c58:V, reg c60:L, reg i64:I, reg rbind:cls, reg update:*, reg update1:V, reg p19:p(V +), reg sym12:cls, reg base12:cls, reg guard12:L, reg r123:V, reg r124:V, reg instPkgs27:*, reg instPkgs28:V, reg c61:L, reg instPkgs30:V, reg dr26:V, reg dc13:L, reg dx26:V, reg dx27:V, reg k8:*, reg k9:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r125:V, reg instPkgs33:V, reg k12:V, reg r126:V, reg c62:cls, reg r127:V, reg __10:cls, reg r128:V, reg onRepos8:*, reg onRepos9:V, reg c63:L, reg onRepos11:V, reg dr28:V, reg dc14:L, reg dx28:V, reg dx29:V, reg __11:cls, reg r129:V, reg onRepos12:*, reg onRepos13:V, reg c64:L, reg onRepos15:V, reg dr30:V, reg dc15:L, reg dx30:V, reg dx31:V, reg __12:cls, reg r130:V, reg c65:cls, reg r131:V, reg p20:p(V +), reg r133:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r134:V, reg r135:V, reg update2:*, reg update3:V, reg c66:V, reg r136:V, reg c67:L, reg sym15:cls, reg base15:cls, reg guard15:L, reg r137:V, reg r138:V, reg c68:cls, reg r139:V, reg l7:*, reg colnames__:cls, reg r140:V, reg update4:*, reg update5:V, reg c69:L, reg dr32:V, reg dc16:L, reg dx32:V, reg dx33:V, reg __13:cls, reg r142:V, reg l8:*, reg rownames__:cls, reg r143:V, reg update8:*, reg update9:V, reg c70:L, reg update11:V, reg dr34:V, reg dc17:L, reg dx34:V, reg dx35:V, reg duplicated:cls, reg update12:*, reg update13:V, reg p21:p(V +), reg r145:V, reg r146:V, reg __14:cls, reg r147:V |
    mkenv;
    lib_loc_isMissing = missing.0(lib_loc);
    if lib_loc_isMissing then L0(NULL) else L0(lib_loc);
  L0(lib_loc_orDefault):
    st `lib.loc` = lib_loc_orDefault;
    repos_isMissing = missing.0(repos);
    if repos_isMissing then L1() else L2(repos);
  L1():
    p = prom<V +>{
      getOption = ldf getOption;
      r = dyn getOption("repos");
      return r;
    };
    goto L2(p);
  L2(repos_orDefault):
    st repos = repos_orDefault;
    contriburl_isMissing = missing.0(contriburl);
    if contriburl_isMissing then L3() else L4(contriburl);
  L3():
    p3 = prom<V +>{
      contrib_url = ldf `contrib.url`;
      p1 = prom<V +>{
        repos1 = ld repos;
        repos2 = force? repos1;
        checkMissing(repos2);
        return repos2;
      };
      p2 = prom<V +>{
        type1 = ld type;
        type2 = force? type1;
        checkMissing(type2);
        return type2;
      };
      r4 = dyn contrib_url(p1, p2);
      return r4;
    };
    goto L4(p3);
  L4(contriburl_orDefault):
    st contriburl = contriburl_orDefault;
    instPkgs_isMissing = missing.0(instPkgs);
    if instPkgs_isMissing then L5() else L6(instPkgs);
  L5():
    p5 = prom<V +>{
      installed_packages = ldf `installed.packages`;
      p4 = prom<V +>{
        lib_loc1 = ld `lib.loc`;
        lib_loc2 = force? lib_loc1;
        checkMissing(lib_loc2);
        return lib_loc2;
      };
      ddd1 = ld `...`;
      r7 = dyn installed_packages[`lib.loc`, `...`](p4, ddd1);
      return r7;
    };
    goto L6(p5);
  L6(instPkgs_orDefault):
    st instPkgs = instPkgs_orDefault;
    st method = method;
    available_isMissing = missing.0(available);
    if available_isMissing then L7(NULL) else L7(available);
  L7(available_orDefault):
    st available = available_orDefault;
    checkBuilt_isMissing = missing.0(checkBuilt);
    if checkBuilt_isMissing then L8(FALSE) else L8(checkBuilt);
  L8(checkBuilt_orDefault):
    st checkBuilt = checkBuilt_orDefault;
    st `...` = ddd;
    type_isMissing = missing.0(type);
    if type_isMissing then L9() else L10(type);
  L9():
    p6 = prom<V +>{
      getOption1 = ldf getOption;
      r9 = dyn getOption1("pkgType");
      return r9;
    };
    goto L10(p6);
  L10(type_orDefault):
    st type = type_orDefault;
    sym = ldf `is.character`;
    base = ldf `is.character` in base;
    guard = `==`.4(sym, base);
    if guard then L63() else L64();
  L11(r12):
    r13 = `!`(r12);
    c1 = `as.logical`(r13);
    if c1 then L66() else L12();
  L63():
    type3 = ld type;
    check L65() else D0();
  L64():
    r11 = dyn base(<sym type>);
    goto L11(r11);
  D0():
    deopt 1 [type3];
  L12():
    goto L13();
  L13():
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L70() else L71();
  L65():
    type4 = force? type3;
    checkMissing(type4);
    c = `is.character`(type4);
    goto L11(c);
  L66():
    stop = ldf stop;
    check L67() else D1();
  D1():
    deopt 6 [];
  L14(r17):
    c3 = `as.logical`(r17);
    if c3 then L73() else L15();
  L67():
    r14 = dyn stop("invalid 'type'; must be a character string");
    check L68() else D2();
  L70():
    lib_loc3 = ld `lib.loc`;
    check L72() else D3();
  L71():
    r16 = dyn base1(<sym lib.loc>);
    goto L14(r16);
  D2():
    deopt 8 [r14];
  D3():
    deopt 12 [lib_loc3];
  L15():
    goto L16();
  L16():
    sym2 = ldf missing;
    base2 = ldf missing in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L77() else L78();
  L68():
    goto L13();
  L72():
    lib_loc4 = force? lib_loc3;
    checkMissing(lib_loc4);
    c2 = `==`(lib_loc4, NULL);
    goto L14(c2);
  L73():
    _libPaths = ldf `.libPaths`;
    check L74() else D4();
  D4():
    deopt 16 [];
  L17(r21):
    r23 = `!`(r21);
    c4 = `as.logical`(r23);
    if c4 then L79() else L18();
  L74():
    r18 = dyn _libPaths();
    check L75() else D5();
  L77():
    missing = ldf missing in base;
    r22 = dyn missing(<sym instPkgs>);
    goto L17(r22);
  L78():
    r20 = dyn base2(<sym instPkgs>);
    goto L17(r20);
  D5():
    deopt 17 [r18];
  L18():
    goto L25();
  L25():
    NROW = ldf NROW;
    check L97() else D11();
  L75():
    st `lib.loc` = r18;
    goto L16();
  L79():
    sym3 = ldf `is.matrix`;
    base3 = ldf `is.matrix` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L80() else L81();
  D11():
    deopt 51 [];
  L19(r25):
    r27 = `!`(r25);
    c5 = `as.logical`(r27);
    if c5 then L20(c5) else L84();
  L80():
    instPkgs1 = ld instPkgs;
    check L82() else D6();
  L81():
    r24 = dyn base3(<sym instPkgs>);
    goto L19(r24);
  L97():
    p7 = prom<V +>{
      instPkgs7 = ld instPkgs;
      instPkgs8 = force? instPkgs7;
      checkMissing(instPkgs8);
      return instPkgs8;
    };
    r36 = dyn NROW(p7);
    check L98() else D12();
  D6():
    deopt 27 [instPkgs1];
  D12():
    deopt 53 [r36];
  L20(c6):
    c20 = `as.logical`(c6);
    if c20 then L92() else L23();
  L82():
    instPkgs2 = force? instPkgs1;
    checkMissing(instPkgs2);
    is_matrix = ldf `is.matrix` in base;
    r26 = dyn is_matrix(instPkgs2);
    check L83() else D7();
  L84():
    sym4 = ldf `is.character`;
    base4 = ldf `is.character` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L85() else L86();
  L98():
    r37 = `==`(r36, 0);
    c21 = `as.logical`(r37);
    if c21 then L99() else L26();
  D7():
    deopt 30 [r26];
  L21(c10, r29):
    r31 = `!`(r29);
    c17 = `as.logical`(r31);
    c18 = `||`(c10, c17);
    goto L20(c18);
  L23():
    goto L24(NULL);
  L24(r33):
    goto L25();
  L26():
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L102() else L103();
  L83():
    goto L19(r26);
  L85():
    instPkgs3 = ld instPkgs;
    check L87() else D8();
  L86():
    r28 = dyn base4(<lang `[`(instPkgs, , "Package")>);
    goto L21(c5, r28);
  L92():
    stop1 = ldf stop;
    check L93() else D9();
  L99():
    popenv;
    return NULL;
  D8():
    deopt 33 [c5, instPkgs3];
  D9():
    deopt 43 [];
  L28(r41):
    c23 = `as.logical`(r41);
    if c23 then L105() else L29();
  L87():
    instPkgs4 = force? instPkgs3;
    checkMissing(instPkgs4);
    c11 = `is.object`(instPkgs4);
    if c11 then L88() else L89(c5);
  L93():
    r32 = dyn stop1("ill-formed 'instPkgs' matrix");
    check L94() else D10();
  L102():
    available1 = ld available;
    check L104() else D13();
  L103():
    r40 = dyn base5(<sym available>);
    goto L28(r40);
  D10():
    deopt 45 [r32];
  D13():
    deopt 62 [available1];
  L22(c15, dx1):
    c16 = `is.character`(dx1);
    goto L21(c15, c16);
  L29():
    ___ = ldf `:::`;
    check L109() else D16();
  L30(r45):
    st available = r45;
    st update = NULL;
    getRversion = ldf getRversion;
    check L112() else D19();
  L88():
    dr = tryDispatchBuiltin.1("[", instPkgs4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L90() else L89(c5);
  L89(c13):
    __ = ldf `[` in base;
    r30 = dyn __(instPkgs4, <missing>, "Package");
    goto L22(c13, r30);
  L94():
    goto L24(r32);
  L104():
    available2 = force? available1;
    checkMissing(available2);
    c22 = `==`(available2, NULL);
    goto L28(c22);
  L105():
    available_packages = ldf `available.packages`;
    check L106() else D14();
  D14():
    deopt 66 [];
  D16():
    deopt 74 [];
  D19():
    deopt 86 [];
  L90():
    dx = getTryDispatchBuiltinValue(dr);
    goto L22(c5, dx);
  L106():
    p8 = prom<V +>{
      contriburl1 = ld contriburl;
      contriburl2 = force? contriburl1;
      checkMissing(contriburl2);
      return contriburl2;
    };
    p9 = prom<V +>{
      method1 = ld method;
      method2 = force? method1;
      checkMissing(method2);
      return method2;
    };
    ddd2 = ld `...`;
    r44 = dyn available_packages[contriburl, method, `...`](p8, p9, ddd2);
    check L107() else D15();
  L109():
    r46 = dyn ___("tools", ".remove_stale_dups");
    check L110() else D17();
  L112():
    r50 = dyn getRversion();
    check L113() else D20();
  D15():
    deopt 72 [r44];
  D17():
    deopt 77 [r46];
  D20():
    deopt 87 [r50];
  L107():
    goto L30(r44);
  L110():
    checkFun.0(r46);
    r47 = r46 as cls;
    p10 = prom<V +>{
      available3 = ld available;
      available4 = force? available3;
      checkMissing(available4);
      return available4;
    };
    r49 = dyn r47(p10);
    check L111() else D18();
  L113():
    st minorR = r50;
    st currentR = r50;
    l = ld minorR;
    c24 = `is.object`(l);
    if c24 then L114() else L115(0, l);
  D18():
    deopt 80 [r49];
  L31(dx3):
    st minorR = dx3;
    nrow = ldf nrow;
    check L120() else D22();
  L111():
    goto L30(r49);
  L114():
    dr2 = tryDispatchBuiltin.0("[[<-", l, 0);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L116() else L115(0, dr2);
  L115(r52, l2):
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L117() else L118();
  D22():
    deopt 103 [1];
  L32(r60, l5, r61, r62):
    ____ = ldf `[[<-` in base;
    r64 = dyn ____(l5, r61, r62);
    goto L31(r64);
  L116():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L31(dx2);
  L117():
    c25 = ldf c in base;
    r63 = dyn c25(1, 3);
    check L119() else D21();
  L118():
    r59 = dyn base6(1, 3);
    goto L32(r52, l2, 0, r59);
  L120():
    p11 = prom<V +>{
      instPkgs9 = ld instPkgs;
      instPkgs10 = force? instPkgs9;
      checkMissing(instPkgs10);
      return instPkgs10;
    };
    r66 = dyn nrow(p11);
    check L121() else D23();
  D21():
    deopt 98 [r52, l2, 0, r63];
  D23():
    deopt 105 [1, r66];
  L119():
    goto L32(r52, l2, 0, r63);
  L121():
    r67 = `:`(1, r66);
    s = toForSeq(r67);
    l6 = length(s);
    i = 0;
    goto L33(i);
  L33(i1):
    i2 = `+`.1(i1, 1);
    c26 = `<`.1(l6, i2);
    if c26 then L122() else L56();
  L56():
    x = `[[`(s, i2, NULL, TRUE);
    st k = x;
    _in_ = ldf `%in%`;
    check L123() else D24();
  L122():
    sym14 = ldf `is.null`;
    base14 = ldf `is.null` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L196() else L197();
  D24():
    deopt 108 [i2];
  L57(r135):
    r136 = `!`(r135);
    c67 = `as.logical`(r136);
    if c67 then L199() else L58();
  L123():
    p12 = prom<V +>{
      instPkgs11 = ld instPkgs;
      instPkgs12 = force? instPkgs11;
      checkMissing(instPkgs12);
      c27 = `is.object`(instPkgs12);
      if c27 then L1() else L2(instPkgs12);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[", instPkgs12);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(instPkgs14):
      k = ld k;
      k1 = force? k;
      __1 = ldf `[` in base;
      r68 = dyn __1(instPkgs14, k1, "Priority");
      goto L0(r68);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r70 = dyn _in_(p12, "base");
    check L124() else D25();
  L196():
    update2 = ld update;
    check L198() else D54();
  L197():
    r134 = dyn base14(<sym update>);
    goto L57(r134);
  D25():
    deopt 111 [i2, r70];
  D54():
    deopt 234 [update2];
  L58():
    goto L60();
  L60():
    update4 = ld update;
    check L206() else D58();
  L124():
    c28 = `as.logical`(r70);
    if c28 then L125() else L34();
  L198():
    update3 = force? update2;
    checkMissing(update3);
    c66 = `==`(update3, NULL);
    goto L57(c66);
  L199():
    sym15 = ldf c;
    base15 = ldf c in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L200() else L201();
  D58():
    deopt 255 [update4];
  L34():
    sym7 = ldf match;
    base7 = ldf match in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L128() else L129();
  L59(r138):
    l7 = ld update;
    colnames__ = ldf `colnames<-`;
    check L203() else D56();
  L125():
    goto L33(i2);
  L200():
    c68 = ldf c in base;
    r139 = dyn c68("Package", "LibPath", "Installed", "Built", "ReposVer", "Repository");
    check L202() else D55();
  L201():
    r137 = dyn base15("Package", "LibPath", "Installed", "Built", "ReposVer", "Repository");
    goto L59(r137);
  L206():
    update5 = force? update4;
    checkMissing(update5);
    c69 = `is.object`(update5);
    if c69 then L207() else L208();
  D55():
    deopt 247 [r139];
  D56():
    deopt 249 [r138, l7, r138];
  L36(i11, r73):
    st z = r73;
    sym8 = ldf `is.na`;
    base8 = ldf `is.na` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L140() else L141();
  L61(dx33):
    l8 = ld update;
    rownames__ = ldf `rownames<-`;
    check L210() else D59();
  L128():
    instPkgs15 = ld instPkgs;
    check L130() else D26();
  L129():
    r72 = dyn base7(<lang `[`(instPkgs, k, "Package")>, <lang `[`(available, , "Package")>);
    goto L36(i2, r72);
  L202():
    goto L59(r139);
  L203():
    r140 = dyn colnames__(l7, NULL, r138);
    check L204() else D57();
  L207():
    dr32 = tryDispatchBuiltin.1("[", update5);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L209() else L208();
  L208():
    __13 = ldf `[` in base;
    r142 = dyn __13(update5, <missing>, "Package");
    goto L61(r142);
  D26():
    deopt 118 [i2, instPkgs15];
  D57():
    deopt 251 [r138, r140];
  D59():
    deopt 262 [dx33, l8, dx33];
  L39(i22, r78):
    c31 = `as.logical`(r78);
    if c31 then L144() else L40();
  L130():
    instPkgs16 = force? instPkgs15;
    checkMissing(instPkgs16);
    c29 = `is.object`(instPkgs16);
    if c29 then L131() else L132(i2, instPkgs16);
  L140():
    z = ld z;
    check L142() else D30();
  L141():
    r77 = dyn base8(<sym z>);
    goto L39(i11, r77);
  L204():
    st update = r140;
    goto L60();
  L209():
    dx32 = getTryDispatchBuiltinValue(dr32);
    goto L61(dx32);
  L210():
    r143 = dyn rownames__(l8, NULL, dx33);
    check L211() else D60();
  D30():
    deopt 137 [i11, z];
  D60():
    deopt 264 [dx33, r143];
  L37(i15, dx7):
    available5 = ld available;
    check L135() else D28();
  L40():
    available9 = ld available;
    check L147() else D32();
  L131():
    dr6 = tryDispatchBuiltin.1("[", instPkgs16);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L133() else L132(i2, dr6);
  L132(i13, instPkgs18):
    k2 = ld k;
    check L134() else D27();
  L142():
    z1 = force? z;
    checkMissing(z1);
    is_na = ldf `is.na` in base;
    r79 = dyn is_na(z1);
    check L143() else D31();
  L144():
    goto L33(i22);
  L211():
    st update = r143;
    update8 = ld update;
    check L212() else D61();
  D27():
    deopt 120 [i13, instPkgs18, k2];
  D28():
    deopt 124 [i15, available5];
  D31():
    deopt 140 [i11, r79];
  D32():
    deopt 145 [i22, available9];
  D61():
    deopt 266 [update8];
  L133():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L37(i2, dx6);
  L134():
    k3 = force? k2;
    __2 = ldf `[` in base;
    r74 = dyn __2(instPkgs18, k3, "Package");
    goto L37(i13, r74);
  L135():
    available6 = force? available5;
    checkMissing(available6);
    c30 = `is.object`(available6);
    if c30 then L136() else L137(i15);
  L143():
    goto L39(i11, r79);
  L147():
    available10 = force? available9;
    checkMissing(available10);
    c32 = `is.object`(available10);
    if c32 then L148() else L149(i22, available10);
  L212():
    update9 = force? update8;
    checkMissing(update9);
    c70 = `is.object`(update9);
    if c70 then L213() else L214(update9);
  L38(i19, dx9):
    match = ldf match in base;
    r76 = dyn match(dx7, dx9, NA_INT, NULL);
    check L139() else D29();
  L42(i30, dx11):
    st onRepos = dx11;
    checkBuilt1 = ld checkBuilt;
    check L152() else D34();
  L62(dx35):
    popenv;
    return dx35;
  L136():
    dr8 = tryDispatchBuiltin.1("[", available6);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L138() else L137(i15);
  L137(i17):
    __3 = ldf `[` in base;
    r75 = dyn __3(available6, <missing>, "Package");
    goto L38(i17, r75);
  L148():
    dr10 = tryDispatchBuiltin.1("[", available10);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L150() else L149(i22, dr10);
  L149(i28, available12):
    z2 = ld z;
    check L151() else D33();
  L213():
    dr34 = tryDispatchBuiltin.1("[", update9);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L215() else L214(dr34);
  L214(update11):
    duplicated = ldf duplicated;
    check L216() else D62();
  D29():
    deopt 133 [i19, r76];
  D33():
    deopt 147 [i28, available12, z2];
  D34():
    deopt 153 [i30, checkBuilt1];
  D62():
    deopt 269 [update11];
  L138():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L38(i15, dx8);
  L139():
    goto L36(i19, r76);
  L150():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L42(i22, dx10);
  L151():
    z3 = force? z2;
    __4 = ldf `[` in base;
    r81 = dyn __4(available10, z3, <missing>);
    goto L42(i28, r81);
  L152():
    checkBuilt2 = force? checkBuilt1;
    checkMissing(checkBuilt2);
    r82 = `!`(checkBuilt2);
    c33 = `as.logical`(r82);
    if c33 then L43(i30, c33) else L153();
  L215():
    dx34 = getTryDispatchBuiltinValue(dr34);
    goto L62(dx34);
  L216():
    p21 = prom<V +>{
      update12 = ld update;
      update13 = force? update12;
      checkMissing(update13);
      return update13;
    };
    r145 = dyn duplicated(p21);
    check L217() else D63();
  D63():
    deopt 271 [update11, r145];
  L43(i31, c34):
    c40 = `as.logical`(c34);
    if c40 then L158() else L44(i31, c40);
  L153():
    package_version = ldf package_version;
    check L154() else D35();
  L217():
    r146 = `!`(r145);
    __14 = ldf `[` in base;
    r147 = dyn __14(update9, r146, <missing>, FALSE);
    goto L62(r147);
  D35():
    deopt 157 [i30, c33];
  L44(i35, c42):
    c48 = `as.logical`(c42);
    if c48 then L164() else L45();
  L154():
    p13 = prom<V +>{
      instPkgs19 = ld instPkgs;
      instPkgs20 = force? instPkgs19;
      checkMissing(instPkgs20);
      c36 = `is.object`(instPkgs20);
      if c36 then L1() else L2(instPkgs20);
    L0(dx13):
      return dx13;
    L1():
      dr12 = tryDispatchBuiltin.1("[", instPkgs20);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(instPkgs22):
      k4 = ld k;
      k5 = force? k4;
      __5 = ldf `[` in base;
      r83 = dyn __5(instPkgs22, k5, "Built");
      goto L0(r83);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx12);
    };
    r85 = dyn package_version(p13);
    check L155() else D36();
  L158():
    package_version1 = ldf package_version;
    check L159() else D38();
  D36():
    deopt 159 [i30, c33, r85];
  D38():
    deopt 164 [i31, c40];
  L45():
    onRepos4 = ld onRepos;
    check L167() else D42();
  L155():
    minorR = ld minorR;
    check L156() else D37();
  L159():
    p14 = prom<V +>{
      onRepos = ld onRepos;
      onRepos1 = force? onRepos;
      checkMissing(onRepos1);
      c43 = `is.object`(onRepos1);
      if c43 then L1() else L2(onRepos1);
    L0(dx15):
      return dx15;
    L1():
      dr14 = tryDispatchBuiltin.1("[", onRepos1);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2(dr14);
    L2(onRepos3):
      __6 = ldf `[` in base;
      r87 = dyn __6(onRepos3, "Version");
      goto L0(r87);
    L3():
      dx14 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx14);
    };
    r89 = dyn package_version1(p14);
    check L160() else D39();
  L164():
    goto L33(i35);
  D37():
    deopt 159 [i30, c33, r85, minorR];
  D39():
    deopt 166 [i31, c40, r89];
  D42():
    deopt 176 [i35, onRepos4];
  L156():
    minorR1 = force? minorR;
    checkMissing(minorR1);
    r86 = `>=`(r85, minorR1);
    c37 = `as.logical`(r86);
    c38 = `||`(c33, c37);
    goto L43(i30, c38);
  L160():
    package_version2 = ldf package_version;
    check L161() else D40();
  L167():
    onRepos5 = force? onRepos4;
    checkMissing(onRepos5);
    c49 = `is.object`(onRepos5);
    if c49 then L168() else L169(i35, onRepos5);
  D40():
    deopt 167 [i31, c40, r89];
  L47(i44, dx19):
    st deps = dx19;
    sym9 = ldf `is.na`;
    base9 = ldf `is.na` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L171() else L172();
  L161():
    p15 = prom<V +>{
      instPkgs23 = ld instPkgs;
      instPkgs24 = force? instPkgs23;
      checkMissing(instPkgs24);
      c44 = `is.object`(instPkgs24);
      if c44 then L1() else L2(instPkgs24);
    L0(dx17):
      return dx17;
    L1():
      dr16 = tryDispatchBuiltin.1("[", instPkgs24);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2(dr16);
    L2(instPkgs26):
      k6 = ld k;
      k7 = force? k6;
      __7 = ldf `[` in base;
      r90 = dyn __7(instPkgs26, k7, "Version");
      goto L0(r90);
    L3():
      dx16 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx16);
    };
    r92 = dyn package_version2(p15);
    check L162() else D41();
  L168():
    dr18 = tryDispatchBuiltin.1("[", onRepos5);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L170() else L169(i35, dr18);
  L169(i42, onRepos7):
    __8 = ldf `[` in base;
    r95 = dyn __8(onRepos7, "Depends");
    goto L47(i42, r95);
  D41():
    deopt 169 [i31, c40, r89, r92];
  L48(i47, r97):
    r99 = `!`(r97);
    c50 = `as.logical`(r99);
    if c50 then L175() else L49();
  L162():
    r93 = `<=`(r89, r92);
    c45 = `as.logical`(r93);
    c46 = `&&`(c40, c45);
    goto L44(i31, c46);
  L170():
    dx18 = getTryDispatchBuiltinValue(dr18);
    goto L47(i35, dx18);
  L171():
    deps = ld deps;
    check L173() else D43();
  L172():
    r96 = dyn base9(<sym deps>);
    goto L48(i44, r96);
  D43():
    deopt 184 [i44, deps];
  L49():
    goto L55(i47);
  L55(i64):
    rbind = ldf rbind;
    check L194() else D52();
  L173():
    deps1 = force? deps;
    checkMissing(deps1);
    is_na1 = ldf `is.na` in base;
    r98 = dyn is_na1(deps1);
    check L174() else D44();
  L175():
    ___1 = ldf `:::`;
    check L176() else D45();
  D44():
    deopt 187 [i44, r98];
  D45():
    deopt 190 [i47];
  D52():
    deopt 225 [i64];
  L174():
    goto L48(i44, r98);
  L176():
    r100 = dyn ___1("tools", ".split_dependencies");
    check L177() else D46();
  L194():
    p19 = prom<V +>{
      update = ld update;
      update1 = force? update;
      checkMissing(update1);
      return update1;
    };
    p20 = prom<V +>{
      sym12 = ldf c;
      base12 = ldf c in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L5() else L6();
    L0(r124):
      return r124;
    L5():
      instPkgs27 = ld instPkgs;
      instPkgs28 = force? instPkgs27;
      checkMissing(instPkgs28);
      c61 = `is.object`(instPkgs28);
      if c61 then L7() else L8(instPkgs28);
    L6():
      r123 = dyn base12(<lang `[`(instPkgs, k, c("Package", "LibPath", "Version", "Built"))>, <lang `[`(onRepos, "Version")>, <lang `[`(onRepos, "Repository")>);
      goto L0(r123);
    L1(dx27):
      onRepos8 = ld onRepos;
      onRepos9 = force? onRepos8;
      checkMissing(onRepos9);
      c63 = `is.object`(onRepos9);
      if c63 then L12() else L13(onRepos9);
    L7():
      dr26 = tryDispatchBuiltin.1("[", instPkgs28);
      dc13 = getTryDispatchBuiltinDispatched(dr26);
      if dc13 then L9() else L8(dr26);
    L8(instPkgs30):
      k8 = ld k;
      k9 = force? k8;
      sym13 = ldf c;
      base13 = ldf c in base;
      guard13 = `==`.4(sym13, base13);
      if guard13 then L10() else L11();
    L2(instPkgs33, k12, r126):
      __10 = ldf `[` in base;
      r128 = dyn __10(instPkgs33, k12, r126);
      goto L1(r128);
    L3(dx29):
      onRepos12 = ld onRepos;
      onRepos13 = force? onRepos12;
      checkMissing(onRepos13);
      c64 = `is.object`(onRepos13);
      if c64 then L15() else L16(onRepos13);
    L9():
      dx26 = getTryDispatchBuiltinValue(dr26);
      goto L1(dx26);
    L10():
      c62 = ldf c in base;
      r127 = dyn c62("Package", "LibPath", "Version", "Built");
      goto L2(instPkgs30, k9, r127);
    L11():
      r125 = dyn base13("Package", "LibPath", "Version", "Built");
      goto L2(instPkgs30, k9, r125);
    L12():
      dr28 = tryDispatchBuiltin.1("[", onRepos9);
      dc14 = getTryDispatchBuiltinDispatched(dr28);
      if dc14 then L14() else L13(dr28);
    L13(onRepos11):
      __11 = ldf `[` in base;
      r129 = dyn __11(onRepos11, "Version");
      goto L3(r129);
    L4(dx31):
      c65 = ldf c in base;
      r131 = dyn c65(dx27, dx29, dx31);
      goto L0(r131);
    L14():
      dx28 = getTryDispatchBuiltinValue(dr28);
      goto L3(dx28);
    L15():
      dr30 = tryDispatchBuiltin.1("[", onRepos13);
      dc15 = getTryDispatchBuiltinDispatched(dr30);
      if dc15 then L17() else L16(dr30);
    L16(onRepos15):
      __12 = ldf `[` in base;
      r130 = dyn __12(onRepos15, "Repository");
      goto L4(r130);
    L17():
      dx30 = getTryDispatchBuiltinValue(dr30);
      goto L4(dx30);
    };
    r133 = dyn rbind(p19, p20);
    check L195() else D53();
  D46():
    deopt 193 [i47, r100];
  D53():
    deopt 228 [i64, r133];
  L177():
    checkFun.0(r100);
    r101 = r100 as cls;
    p16 = prom<V +>{
      deps2 = ld deps;
      deps3 = force? deps2;
      checkMissing(deps3);
      return deps3;
    };
    r103 = dyn r101(p16);
    check L178() else D47();
  L195():
    st update = r133;
    goto L33(i64);
  D47():
    deopt 196 [i47, r103];
  L178():
    c51 = `is.object`(r103);
    if c51 then L179() else L180(i47);
  L50(i53, dx21):
    st Rdeps = dx21;
    sym10 = ldf length;
    base10 = ldf length in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L182() else L183();
  L179():
    dr20 = tryDispatchBuiltin.1("[[", r103);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L181() else L180(i47);
  L180(i51):
    __9 = ldf `[[` in base;
    r106 = dyn __9(r103, "R", TRUE);
    goto L50(i51, r106);
  L51(i56, r108):
    r110 = `>`(r108, 1);
    c52 = `as.logical`(r110);
    if c52 then L186() else L52(i56, c52);
  L181():
    dx20 = getTryDispatchBuiltinValue(dr20);
    goto L50(i47, dx20);
  L182():
    Rdeps = ld Rdeps;
    check L184() else D48();
  L183():
    r107 = dyn base10(<sym Rdeps>);
    goto L51(i53, r107);
  D48():
    deopt 205 [i53, Rdeps];
  L52(i58, c54):
    c60 = `as.logical`(c54);
    if c60 then L190() else L53();
  L184():
    Rdeps1 = force? Rdeps;
    checkMissing(Rdeps1);
    length = ldf length in base;
    r109 = dyn length(Rdeps1);
    check L185() else D49();
  L186():
    do_call = ldf `do.call`;
    check L187() else D50();
  D49():
    deopt 208 [i53, r109];
  D50():
    deopt 212 [i56, c52];
  L53():
    goto L55(i58);
  L185():
    goto L51(i53, r109);
  L187():
    p17 = prom<V +>{
      Rdeps2 = ld Rdeps;
      Rdeps3 = force? Rdeps2;
      checkMissing(Rdeps3);
      c55 = `is.object`(Rdeps3);
      if c55 then L1() else L2(Rdeps3);
    L0(dx23):
      return dx23;
    L1():
      dr22 = tryDispatchBuiltin.1("$", Rdeps3);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L3() else L2(dr22);
    L2(Rdeps5):
      r111 = `$`(Rdeps5, <sym op>);
      goto L0(r111);
    L3():
      dx22 = getTryDispatchBuiltinValue(dr22);
      goto L0(dx22);
    };
    p18 = prom<V +>{
      sym11 = ldf list;
      base11 = ldf list in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L1() else L2();
    L0(r114):
      return r114;
    L1():
      currentR = ld currentR;
      currentR1 = force? currentR;
      checkMissing(currentR1);
      Rdeps6 = ld Rdeps;
      Rdeps7 = force? Rdeps6;
      checkMissing(Rdeps7);
      c56 = `is.object`(Rdeps7);
      if c56 then L4() else L5(Rdeps7);
    L2():
      r113 = dyn base11(<sym currentR>, <lang `$`(Rdeps, version)>);
      goto L0(r113);
    L3(dx25):
      list = ldf list in base;
      r116 = dyn list(currentR1, dx25);
      goto L0(r116);
    L4():
      dr24 = tryDispatchBuiltin.1("$", Rdeps7);
      dc12 = getTryDispatchBuiltinDispatched(dr24);
      if dc12 then L6() else L5(dr24);
    L5(Rdeps9):
      r115 = `$`(Rdeps9, <sym version>);
      goto L3(r115);
    L6():
      dx24 = getTryDispatchBuiltinValue(dr24);
      goto L3(dx24);
    };
    r118 = dyn do_call(p17, p18);
    check L188() else D51();
  L190():
    goto L33(i58);
  D51():
    deopt 215 [i56, c52, r118];
  L188():
    r119 = `!`(r118);
    c57 = `as.logical`(r119);
    c58 = `&&`(c52, c57);
    goto L52(i56, c58);
  }
}