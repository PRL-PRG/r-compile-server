fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2887713285;
    st testInstalledPackages = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2887713285(outDir, errorsAreFatal, scope, types, srcdir, Ropts, `...`) {
  (reg outDir:*, reg errorsAreFatal:*, reg scope:*, reg types:*, reg srcdir:*, reg Ropts:*, reg ddd:dots) -+> V { var outDir:*, reg outDir_isMissing:L, reg outDir_orDefault:*, var errorsAreFatal:*, reg errorsAreFatal_isMissing:L, reg errorsAreFatal_orDefault:*, var scope:*, reg scope_isMissing:L, reg scope_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var types:*, reg types_isMissing:L, reg types_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg c1:cls, reg r6:V, reg p1:p(V +), var srcdir:*, reg srcdir_isMissing:L, reg srcdir_orDefault:*, var Ropts:*, reg Ropts_isMissing:L, reg Ropts_orDefault:*, var `...`:dots?, reg _is_writeable:cls, reg outDir1:*, reg outDir2:V, reg p2:p(V +), reg r9:V, reg r10:V, reg c2:L, reg stop:cls, reg sQuote:cls, reg outDir3:*, reg outDir4:V, reg p3:p(V +), reg r12:V, reg p4:p(V +), reg r14:V, reg options:cls, reg r16:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r17:V, reg on_exit:cls, reg r19:V, reg match_arg:cls, reg scope1:*, reg scope2:V, reg p5:p(V +), reg r21:V, reg character:cls, reg r22:V, reg _get_standard_package_names:cls, reg r23:V, reg _in_:cls, reg scope3:*, reg scope4:V, reg p6:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r25:V, reg r26:V, reg c3:cls, reg r27:V, reg p7:p(V +), reg r29:V, reg c4:L, reg known_packages:*, reg known_packages1:V, reg c5:L, reg known_packages3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r30:V, reg _in_1:cls, reg scope5:*, reg scope6:V, reg p8:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r32:V, reg r33:V, reg c6:cls, reg r34:V, reg p9:p(V +), reg r36:V, reg c7:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r37:V, reg r38:V, reg pkgs:*, reg pkgs1:V, reg known_packages4:*, reg known_packages5:V, reg c8:L, reg known_packages7:V, reg dr2:V, reg dc1:L, reg dx3:V, reg dx4:V, reg r39:V, reg c9:cls, reg r40:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r42:V, reg r43:V, reg Sys_getenv:cls, reg r44:V, reg as_integer:cls, reg r45:V, reg _Platform:*, reg _Platform1:V, reg c10:L, reg _Platform3:V, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg r46:V, reg r47:V, reg c11:L, reg c13:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r48:V, reg c16:L, reg r49:V, reg mc_cores:*, reg mc_cores1:V, reg is_na:cls, reg r50:V, reg r51:V, reg c17:L, reg c18:V, reg c20:L, reg c22:V, reg mc_cores2:*, reg mc_cores3:V, reg r52:V, reg c23:L, reg c24:V, reg c26:L, reg r53:cls, reg __:cls, reg r54:V, reg r55:cls, reg pkgs2:*, reg pkgs3:V, reg p10:p(V +), reg do_one:*, reg do_one1:V, reg p11:p(V +), reg mc_cores4:*, reg mc_cores5:V, reg p12:p(V +), reg r59:V, reg unlist:cls, reg res:*, reg res1:V, reg p13:p(V +), reg r61:V, reg r62:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r63:V, reg r64:V, reg res2:*, reg res3:V, reg any:cls, reg r65:V, reg c27:L, reg which:cls, reg res4:*, reg res5:V, reg p14:p(V +), reg r67:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c28:L, reg x:V, reg warning:cls, reg gettextf:cls, reg pkgs4:*, reg pkgs5:V, reg c29:L, reg pkgs7:V, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg i5:*, reg i6:V, reg __1:cls, reg r68:V, reg p15:p(V +), reg r70:V, reg p16:p(V +), reg r72:V, reg errorsAreFatal1:*, reg errorsAreFatal2:V, reg c30:L, reg stop1:cls, reg sprintf:cls, reg ngettext:cls, reg sym9:cls, reg base9:cls, reg guard9:L, reg r73:V, reg r74:V, reg res6:*, reg res7:V, reg sum:cls, reg r75:V, reg p17:p(V +), reg r77:V, reg p18:p(V +), reg sym10:cls, reg base10:cls, reg guard10:L, reg r79:V, reg r80:V, reg res8:*, reg res9:V, reg sum1:cls, reg r81:V, reg p19:p(V +), reg r83:V, reg p20:p(V +), reg r85:V, reg r86:V, reg r87:V, reg pkgs8:*, reg pkgs9:V, reg s1:V, reg l1:I, reg i7:I, reg i8:I, reg i9:I, reg c31:L, reg x1:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r89:V, reg i14:I, reg r90:V, reg srcdir1:*, reg srcdir2:V, reg c32:V, reg c33:L, reg i16:I, reg c35:V, reg _in_2:cls, reg pkg:*, reg pkg1:V, reg p21:p(V +), reg known_packages8:*, reg known_packages9:V, reg c36:L, reg known_packages11:V, reg dr8:V, reg dc4:L, reg dx9:V, reg dx10:V, reg r92:V, reg p22:p(V +), reg r94:V, reg c37:L, reg c38:V, reg c40:L, reg R_home:cls, reg r95:V, reg i20:I, reg testInstalledPackage:cls, reg pkg2:*, reg pkg3:V, reg p23:p(V +), reg _Library:*, reg _Library1:V, reg p24:p(V +), reg outDir5:*, reg outDir6:V, reg p25:p(V +), reg types1:*, reg types2:V, reg p26:p(V +), reg srcdir3:*, reg srcdir4:V, reg p27:p(V +), reg Ropts1:*, reg Ropts2:V, reg p28:p(V +), reg ddd1:dots?, reg r103:V, reg res10:*, reg res11:V, reg c41:L, reg gettextf1:cls, reg pkg4:*, reg pkg5:V, reg p29:p(V +), reg r105:V, reg errorsAreFatal3:*, reg errorsAreFatal4:V, reg c42:L, reg stop2:cls, reg msg:*, reg msg1:V, reg p30:p(V +), reg r107:V, reg i25:I, reg r108:V, reg warning1:cls, reg msg2:*, reg msg3:V, reg p31:p(V +), reg r110:V, reg i26:I, reg sym12:cls, reg base12:cls, reg guard12:L, reg r112:V, reg r113:V, reg status:*, reg status1:V, reg invisible:cls, reg r114:V |
    mkenv;
    outDir_isMissing = missing.0(outDir);
    if outDir_isMissing then L0(".") else L0(outDir);
  L0(outDir_orDefault):
    st outDir = outDir_orDefault;
    errorsAreFatal_isMissing = missing.0(errorsAreFatal);
    if errorsAreFatal_isMissing then L1(TRUE) else L1(errorsAreFatal);
  L1(errorsAreFatal_orDefault):
    st errorsAreFatal = errorsAreFatal_orDefault;
    scope_isMissing = missing.0(scope);
    if scope_isMissing then L2() else L3(scope);
  L2():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("both", "base", "recommended");
      goto L0(r2);
    L2():
      r = dyn base("both", "base", "recommended");
      goto L0(r);
    };
    goto L3(p);
  L3(scope_orDefault):
    st scope = scope_orDefault;
    types_isMissing = missing.0(types);
    if types_isMissing then L4() else L5(types);
  L4():
    p1 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r5):
      return r5;
    L1():
      c1 = ldf c in base;
      r6 = dyn c1("examples", "tests", "vignettes");
      goto L0(r6);
    L2():
      r4 = dyn base1("examples", "tests", "vignettes");
      goto L0(r4);
    };
    goto L5(p1);
  L5(types_orDefault):
    st types = types_orDefault;
    srcdir_isMissing = missing.0(srcdir);
    if srcdir_isMissing then L6(NULL) else L6(srcdir);
  L6(srcdir_orDefault):
    st srcdir = srcdir_orDefault;
    Ropts_isMissing = missing.0(Ropts);
    if Ropts_isMissing then L7("") else L7(Ropts);
  L7(Ropts_orDefault):
    st Ropts = Ropts_orDefault;
    st `...` = ddd;
    _is_writeable = ldf `.is.writeable`;
    check L40() else D0();
  D0():
    deopt 1 [];
  L40():
    p2 = prom<V +>{
      outDir1 = ld outDir;
      outDir2 = force? outDir1;
      checkMissing(outDir2);
      return outDir2;
    };
    r9 = dyn _is_writeable(p2);
    check L41() else D1();
  D1():
    deopt 3 [r9];
  L41():
    r10 = `!`(r9);
    c2 = `as.logical`(r10);
    if c2 then L42() else L8();
  L8():
    goto L9();
  L9():
    options = ldf options;
    check L46() else D4();
  L42():
    stop = ldf stop;
    check L43() else D2();
  D2():
    deopt 6 [];
  D4():
    deopt 16 [];
  L43():
    p4 = prom<V +>{
      sQuote = ldf sQuote;
      p3 = prom<V +>{
        outDir3 = ld outDir;
        outDir4 = force? outDir3;
        checkMissing(outDir4);
        return outDir4;
      };
      r12 = dyn sQuote(p3);
      return r12;
    };
    r14 = dyn stop[, , , domain]("directory ", p4, " is not writeable ", NA_LGL);
    check L44() else D3();
  L46():
    r16 = dyn options[warn](1.0);
    check L47() else D5();
  D3():
    deopt 12 [r14];
  D5():
    deopt 19 [r16];
  L44():
    goto L9();
  L47():
    st ow = r16;
    sym2 = ldf `on.exit`;
    base2 = ldf `on.exit` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L48() else L49();
  L10():
    match_arg = ldf `match.arg`;
    check L50() else D6();
  L48():
    on_exit = ldf `on.exit` in base;
    r19 = dyn on_exit(<sym ow>);
    goto L10();
  L49():
    r17 = dyn base2(<sym ow>);
    goto L10();
  D6():
    deopt 25 [];
  L50():
    p5 = prom<V +>{
      scope1 = ld scope;
      scope2 = force? scope1;
      checkMissing(scope2);
      return scope2;
    };
    r21 = dyn match_arg(p5);
    check L51() else D7();
  D7():
    deopt 27 [r21];
  L51():
    st scope = r21;
    st status = 0;
    character = ldf character;
    check L52() else D8();
  D8():
    deopt 33 [];
  L52():
    r22 = dyn character();
    check L53() else D9();
  D9():
    deopt 34 [r22];
  L53():
    st pkgs = r22;
    _get_standard_package_names = ldf `.get_standard_package_names`;
    check L54() else D10();
  D10():
    deopt 37 [];
  L54():
    r23 = dyn _get_standard_package_names();
    check L55() else D11();
  D11():
    deopt 38 [r23];
  L55():
    st known_packages = r23;
    _in_ = ldf `%in%`;
    check L56() else D12();
  D12():
    deopt 41 [];
  L56():
    p6 = prom<V +>{
      scope3 = ld scope;
      scope4 = force? scope3;
      checkMissing(scope4);
      return scope4;
    };
    p7 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r26):
      return r26;
    L1():
      c3 = ldf c in base;
      r27 = dyn c3("both", "base");
      goto L0(r27);
    L2():
      r25 = dyn base3("both", "base");
      goto L0(r25);
    };
    r29 = dyn _in_(p6, p7);
    check L57() else D13();
  D13():
    deopt 44 [r29];
  L57():
    c4 = `as.logical`(r29);
    if c4 then L58() else L11();
  L11():
    goto L12();
  L12():
    _in_1 = ldf `%in%`;
    check L65() else D15();
  L58():
    known_packages = ld known_packages;
    check L59() else D14();
  D14():
    deopt 45 [known_packages];
  D15():
    deopt 52 [];
  L59():
    known_packages1 = force? known_packages;
    checkMissing(known_packages1);
    c5 = `is.object`(known_packages1);
    if c5 then L61() else L62(known_packages1);
  L65():
    p8 = prom<V +>{
      scope5 = ld scope;
      scope6 = force? scope5;
      checkMissing(scope6);
      return scope6;
    };
    p9 = prom<V +>{
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r33):
      return r33;
    L1():
      c6 = ldf c in base;
      r34 = dyn c6("both", "recommended");
      goto L0(r34);
    L2():
      r32 = dyn base4("both", "recommended");
      goto L0(r32);
    };
    r36 = dyn _in_1(p8, p9);
    check L66() else D16();
  D16():
    deopt 55 [r36];
  L60(dx1):
    st pkgs = dx1;
    goto L12();
  L61():
    dr = tryDispatchBuiltin.1("$", known_packages1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L63() else L62(dr);
  L62(known_packages3):
    r30 = `$`(known_packages3, <sym base>);
    goto L60(r30);
  L66():
    c7 = `as.logical`(r36);
    if c7 then L67() else L13();
  L13():
    goto L15();
  L15():
    sym6 = ldf `as.integer`;
    base6 = ldf `as.integer` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L78() else L79();
  L63():
    dx = getTryDispatchBuiltinValue(dr);
    goto L60(dx);
  L67():
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L68() else L69();
  L14(r38):
    st pkgs = r38;
    goto L15();
  L16(r43):
    st `mc.cores` = r43;
    _Platform = ld `.Platform`;
    check L83() else D23();
  L68():
    pkgs = ld pkgs;
    check L70() else D17();
  L69():
    r37 = dyn base5(<sym pkgs>, <lang `$`(known_packages, recommended)>);
    goto L14(r37);
  L78():
    Sys_getenv = ldf `Sys.getenv`;
    check L80() else D20();
  L79():
    r42 = dyn base6(<lang Sys.getenv("TEST_MC_CORES", "1")>);
    goto L16(r42);
  D17():
    deopt 58 [pkgs];
  D20():
    deopt 71 [];
  D23():
    deopt 78 [_Platform];
  L70():
    pkgs1 = force? pkgs;
    checkMissing(pkgs1);
    known_packages4 = ld known_packages;
    check L71() else D18();
  L80():
    r44 = dyn Sys_getenv("TEST_MC_CORES", "1");
    check L81() else D21();
  L83():
    _Platform1 = force? _Platform;
    checkMissing(_Platform1);
    c10 = `is.object`(_Platform1);
    if c10 then L85() else L86(_Platform1);
  D18():
    deopt 60 [known_packages4];
  D21():
    deopt 74 [r44];
  L71():
    known_packages5 = force? known_packages4;
    checkMissing(known_packages5);
    c8 = `is.object`(known_packages5);
    if c8 then L73() else L74(known_packages5);
  L81():
    as_integer = ldf `as.integer` in base;
    r45 = dyn as_integer(r44);
    check L82() else D22();
  L84(dx6):
    r47 = `!=`(dx6, "windows");
    c11 = `as.logical`(r47);
    if c11 then L88() else L17(c11);
  L85():
    dr4 = tryDispatchBuiltin.1("$", _Platform1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L87() else L86(dr4);
  L86(_Platform3):
    r46 = `$`(_Platform3, <sym OS.type>);
    goto L84(r46);
  D22():
    deopt 76 [r45];
  L17(c13):
    c20 = `as.logical`(c13);
    if c20 then L94() else L19(c20);
  L72(dx4):
    c9 = ldf c in base;
    r40 = dyn c9(pkgs1, dx4);
    check L76() else D19();
  L73():
    dr2 = tryDispatchBuiltin.1("$", known_packages5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L75() else L74(dr2);
  L74(known_packages7):
    r39 = `$`(known_packages7, <sym recommended>);
    goto L72(r39);
  L82():
    goto L16(r45);
  L87():
    dx5 = getTryDispatchBuiltinValue(dr4);
    goto L84(dx5);
  L88():
    sym7 = ldf `is.na`;
    base7 = ldf `is.na` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L89() else L90();
  D19():
    deopt 64 [r40];
  L18(c16, r49):
    r51 = `!`(r49);
    c17 = `as.logical`(r51);
    c18 = `&&`(c16, c17);
    goto L17(c18);
  L19(c22):
    c26 = `as.logical`(c22);
    if c26 then L97() else L20();
  L75():
    dx3 = getTryDispatchBuiltinValue(dr2);
    goto L72(dx3);
  L76():
    goto L14(r40);
  L89():
    mc_cores = ld `mc.cores`;
    check L91() else D24();
  L90():
    r48 = dyn base7(<sym mc.cores>);
    goto L18(c11, r48);
  L94():
    mc_cores2 = ld `mc.cores`;
    check L95() else D26();
  D24():
    deopt 85 [c11, mc_cores];
  D26():
    deopt 91 [c20, mc_cores2];
  L20():
    pkgs8 = ld pkgs;
    check L120() else D41();
  L28():
    sym12 = ldf invisible;
    base12 = ldf invisible in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L147() else L148();
  L91():
    mc_cores1 = force? mc_cores;
    checkMissing(mc_cores1);
    is_na = ldf `is.na` in base;
    r50 = dyn is_na(mc_cores1);
    check L92() else D25();
  L95():
    mc_cores3 = force? mc_cores2;
    checkMissing(mc_cores3);
    r52 = `>`(mc_cores3, 1);
    c23 = `as.logical`(r52);
    c24 = `&&`(c20, c23);
    goto L19(c24);
  L97():
    r53 = clos inner423301576;
    st do_one = r53;
    __ = ldf `::`;
    check L98() else D27();
  D25():
    deopt 88 [c11, r50];
  D27():
    deopt 100 [];
  D41():
    deopt 157 [pkgs8];
  L39(r113):
    popenv;
    return r113;
  L92():
    goto L18(c11, r50);
  L98():
    r54 = dyn __("parallel", "mclapply");
    check L99() else D28();
  L120():
    pkgs9 = force? pkgs8;
    checkMissing(pkgs9);
    s1 = toForSeq(pkgs9);
    l1 = length(s1);
    i7 = 0;
    goto L29(i7);
  L147():
    status = ld status;
    check L149() else D57();
  L148():
    r112 = dyn base12(<sym status>);
    goto L39(r112);
  D28():
    deopt 103 [r54];
  D57():
    deopt 225 [status];
  L29(i8):
    i9 = `+`.1(i8, 1);
    c31 = `<`.1(l1, i9);
    if c31 then L121() else L38();
  L99():
    checkFun.0(r54);
    r55 = r54 as cls;
    p10 = prom<V +>{
      pkgs2 = ld pkgs;
      pkgs3 = force? pkgs2;
      checkMissing(pkgs3);
      return pkgs3;
    };
    p11 = prom<V +>{
      do_one = ld do_one;
      do_one1 = force? do_one;
      checkMissing(do_one1);
      return do_one1;
    };
    p12 = prom<V +>{
      mc_cores4 = ld `mc.cores`;
      mc_cores5 = force? mc_cores4;
      checkMissing(mc_cores5);
      return mc_cores5;
    };
    r59 = dyn r55[, , `mc.cores`, `mc.preschedule`](p10, p11, p12, FALSE);
    check L100() else D29();
  L149():
    status1 = force? status;
    checkMissing(status1);
    invisible = ldf invisible in base;
    r114 = dyn invisible(status1);
    check L150() else D58();
  D29():
    deopt 111 [r59];
  D58():
    deopt 228 [r114];
  L38():
    x1 = `[[`(s1, i9, NULL, TRUE);
    st pkg = x1;
    sym11 = ldf `is.null`;
    base11 = ldf `is.null` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L122() else L123();
  L100():
    st res = r59;
    unlist = ldf unlist;
    check L101() else D30();
  L121():
    goto L28();
  L150():
    goto L39(r114);
  D30():
    deopt 114 [];
  L30(i14, r90):
    c33 = `as.logical`(r90);
    if c33 then L125() else L31(i14, c33);
  L101():
    p13 = prom<V +>{
      res = ld res;
      res1 = force? res;
      checkMissing(res1);
      return res1;
    };
    r61 = dyn unlist(p13);
    check L102() else D31();
  L122():
    srcdir1 = ld srcdir;
    check L124() else D42();
  L123():
    r89 = dyn base11(<sym srcdir>);
    goto L30(i9, r89);
  D31():
    deopt 116 [r61];
  D42():
    deopt 160 [i9, srcdir1];
  L31(i16, c35):
    c40 = `as.logical`(c35);
    if c40 then L129() else L32();
  L102():
    r62 = `!=`(r61, 0);
    st res = r62;
    sym8 = ldf any;
    base8 = ldf any in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L103() else L104();
  L124():
    srcdir2 = force? srcdir1;
    checkMissing(srcdir2);
    c32 = `==`(srcdir2, NULL);
    goto L30(i9, c32);
  L125():
    _in_2 = ldf `%in%`;
    check L126() else D43();
  D43():
    deopt 164 [i14, c33];
  L21(r64):
    c27 = `as.logical`(r64);
    if c27 then L107() else L22();
  L32():
    goto L33(i16);
  L33(i20):
    testInstalledPackage = ldf testInstalledPackage;
    check L133() else D47();
  L103():
    res2 = ld res;
    check L105() else D32();
  L104():
    r63 = dyn base8(<sym res>);
    goto L21(r63);
  L126():
    p21 = prom<V +>{
      pkg = ld pkg;
      pkg1 = force? pkg;
      checkMissing(pkg1);
      return pkg1;
    };
    p22 = prom<V +>{
      known_packages8 = ld known_packages;
      known_packages9 = force? known_packages8;
      checkMissing(known_packages9);
      c36 = `is.object`(known_packages9);
      if c36 then L1() else L2(known_packages9);
    L0(dx10):
      return dx10;
    L1():
      dr8 = tryDispatchBuiltin.1("$", known_packages9);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(known_packages11):
      r92 = `$`(known_packages11, <sym base>);
      goto L0(r92);
    L3():
      dx9 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx9);
    };
    r94 = dyn _in_2(p21, p22);
    check L127() else D44();
  L129():
    R_home = ldf `R.home`;
    check L130() else D45();
  D32():
    deopt 122 [res2];
  D44():
    deopt 167 [i14, c33, r94];
  D45():
    deopt 170 [i16];
  D47():
    deopt 177 [i20];
  L22():
    goto L27(NULL);
  L27(r87):
    goto L28();
  L105():
    res3 = force? res2;
    checkMissing(res3);
    any = ldf any in base;
    r65 = dyn any(res3);
    check L106() else D33();
  L107():
    which = ldf which;
    check L108() else D34();
  L127():
    c37 = `as.logical`(r94);
    c38 = `&&`(c33, c37);
    goto L31(i14, c38);
  L130():
    r95 = dyn R_home("tests/Examples");
    check L131() else D46();
  L133():
    p23 = prom<V +>{
      pkg2 = ld pkg;
      pkg3 = force? pkg2;
      checkMissing(pkg3);
      return pkg3;
    };
    p24 = prom<V +>{
      _Library = ld `.Library`;
      _Library1 = force? _Library;
      checkMissing(_Library1);
      return _Library1;
    };
    p25 = prom<V +>{
      outDir5 = ld outDir;
      outDir6 = force? outDir5;
      checkMissing(outDir6);
      return outDir6;
    };
    p26 = prom<V +>{
      types1 = ld types;
      types2 = force? types1;
      checkMissing(types2);
      return types2;
    };
    p27 = prom<V +>{
      srcdir3 = ld srcdir;
      srcdir4 = force? srcdir3;
      checkMissing(srcdir4);
      return srcdir4;
    };
    p28 = prom<V +>{
      Ropts1 = ld Ropts;
      Ropts2 = force? Ropts1;
      checkMissing(Ropts2);
      return Ropts2;
    };
    ddd1 = ld `...`;
    r103 = dyn testInstalledPackage[, , , , , , `...`](p23, p24, p25, p26, p27, p28, ddd1);
    check L134() else D48();
  D33():
    deopt 125 [r65];
  D34():
    deopt 127 [];
  D46():
    deopt 172 [i16, r95];
  D48():
    deopt 185 [i20, r103];
  L106():
    goto L21(r65);
  L108():
    p14 = prom<V +>{
      res4 = ld res;
      res5 = force? res4;
      checkMissing(res5);
      return res5;
    };
    r67 = dyn which(p14);
    check L109() else D35();
  L131():
    st srcdir = r95;
    goto L33(i16);
  L134():
    st res = r103;
    res10 = ld res;
    check L135() else D49();
  D35():
    deopt 129 [r67];
  D49():
    deopt 187 [i20, res10];
  L109():
    s = toForSeq(r67);
    l = length(s);
    i = 0;
    goto L23(i);
  L135():
    res11 = force? res10;
    checkMissing(res11);
    c41 = `as.logical`(res11);
    if c41 then L136() else L34();
  L23(i1):
    i2 = `+`.1(i1, 1);
    c28 = `<`.1(l, i2);
    if c28 then L110() else L24();
  L34():
    goto L37(i20);
  L37(i26):
    goto L29(i26);
  L136():
    st status = 1;
    gettextf1 = ldf gettextf;
    check L137() else D50();
  D50():
    deopt 193 [i20];
  L24():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    warning = ldf warning;
    check L111() else D36();
  L110():
    errorsAreFatal1 = ld errorsAreFatal;
    check L113() else D38();
  L137():
    p29 = prom<V +>{
      pkg4 = ld pkg;
      pkg5 = force? pkg4;
      checkMissing(pkg5);
      return pkg5;
    };
    r105 = dyn gettextf1("testing '%s' failed", p29);
    check L138() else D51();
  D36():
    deopt 131 [i2];
  D38():
    deopt 143 [errorsAreFatal1];
  D51():
    deopt 196 [i20, r105];
  L111():
    p16 = prom<V +>{
      gettextf = ldf gettextf;
      p15 = prom<V +>{
        pkgs4 = ld pkgs;
        pkgs5 = force? pkgs4;
        checkMissing(pkgs5);
        c29 = `is.object`(pkgs5);
        if c29 then L1() else L2(pkgs5);
      L0(dx8):
        return dx8;
      L1():
        dr6 = tryDispatchBuiltin.1("[", pkgs5);
        dc3 = getTryDispatchBuiltinDispatched(dr6);
        if dc3 then L3() else L2(dr6);
      L2(pkgs7):
        i5 = ld i;
        i6 = force? i5;
        __1 = ldf `[` in base;
        r68 = dyn __1(pkgs7, i6);
        goto L0(r68);
      L3():
        dx7 = getTryDispatchBuiltinValue(dr6);
        goto L0(dx7);
      };
      r70 = dyn gettextf("testing '%s' failed", p15);
      return r70;
    };
    r72 = dyn warning[, domain, `call.`, `immediate.`](p16, NA_LGL, FALSE, TRUE);
    check L112() else D37();
  L113():
    errorsAreFatal2 = force? errorsAreFatal1;
    checkMissing(errorsAreFatal2);
    c30 = `as.logical`(errorsAreFatal2);
    if c30 then L114() else L25();
  L138():
    st msg = r105;
    errorsAreFatal3 = ld errorsAreFatal;
    check L139() else D52();
  D37():
    deopt 139 [i2, r72];
  D52():
    deopt 198 [i20, errorsAreFatal3];
  L25():
    goto L26(NULL);
  L26(r86):
    goto L27(r86);
  L112():
    goto L23(i2);
  L114():
    stop1 = ldf stop;
    check L115() else D39();
  L139():
    errorsAreFatal4 = force? errorsAreFatal3;
    checkMissing(errorsAreFatal4);
    c42 = `as.logical`(errorsAreFatal4);
    if c42 then L140() else L35();
  D39():
    deopt 146 [];
  L35():
    warning1 = ldf warning;
    check L144() else D55();
  L36(i25, r108):
    goto L37(i25);
  L115():
    p20 = prom<V +>{
      sprintf = ldf sprintf;
      p18 = prom<V +>{
        ngettext = ldf ngettext;
        p17 = prom<V +>{
          sym9 = ldf sum;
          base9 = ldf sum in base;
          guard9 = `==`.4(sym9, base9);
          if guard9 then L1() else L2();
        L0(r74):
          return r74;
        L1():
          res6 = ld res;
          res7 = force? res6;
          checkMissing(res7);
          sum = ldf sum in base;
          r75 = dyn sum(res7);
          goto L0(r75);
        L2():
          r73 = dyn base9(<sym res>);
          goto L0(r73);
        };
        r77 = dyn ngettext[, , , domain](p17, "%d of the package tests failed", "%d of the package tests failed", "R-tools");
        return r77;
      };
      p19 = prom<V +>{
        sym10 = ldf sum;
        base10 = ldf sum in base;
        guard10 = `==`.4(sym10, base10);
        if guard10 then L1() else L2();
      L0(r80):
        return r80;
      L1():
        res8 = ld res;
        res9 = force? res8;
        checkMissing(res9);
        sum1 = ldf sum in base;
        r81 = dyn sum1(res9);
        goto L0(r81);
      L2():
        r79 = dyn base10(<sym res>);
        goto L0(r79);
      };
      r83 = dyn sprintf(p18, p19);
      return r83;
    };
    r85 = dyn stop1[, domain, `call.`](p20, NA_LGL, FALSE);
    check L116() else D40();
  L140():
    stop2 = ldf stop;
    check L141() else D53();
  D40():
    deopt 152 [r85];
  D53():
    deopt 201 [i20];
  D55():
    deopt 209 [i20];
  L116():
    goto L26(r85);
  L141():
    p30 = prom<V +>{
      msg = ld msg;
      msg1 = force? msg;
      checkMissing(msg1);
      return msg1;
    };
    r107 = dyn stop2[, domain, `call.`](p30, NA_LGL, FALSE);
    check L142() else D54();
  L144():
    p31 = prom<V +>{
      msg2 = ld msg;
      msg3 = force? msg2;
      checkMissing(msg3);
      return msg3;
    };
    r110 = dyn warning1[, domain, `call.`, `immediate.`](p31, NA_LGL, FALSE, TRUE);
    check L145() else D56();
  D54():
    deopt 207 [i20, r107];
  D56():
    deopt 217 [i20, r110];
  L142():
    goto L36(i20, r107);
  L145():
    goto L36(i20, r110);
  }
}
fun inner423301576(pkg) {
  (reg pkg:*) -+> V { var pkg:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg srcdir:*, reg srcdir1:V, reg c:V, reg c1:L, reg c3:V, reg _in_:cls, reg pkg1:*, reg pkg2:V, reg p:p(V +), reg known_packages:*, reg known_packages1:V, reg c4:L, reg known_packages3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r3:V, reg p1:p(V +), reg r5:V, reg c5:L, reg c6:V, reg c8:L, reg R_home:cls, reg r6:V, reg testInstalledPackage:cls, reg pkg3:*, reg pkg4:V, reg p2:p(V +), reg _Library:*, reg _Library1:V, reg p3:p(V +), reg outDir:*, reg outDir1:V, reg p4:p(V +), reg types:*, reg types1:V, reg p5:p(V +), reg srcdir2:*, reg srcdir3:V, reg p6:p(V +), reg Ropts:*, reg Ropts1:V, reg p7:p(V +), reg ddd:*, reg r14:V |
    mkenv;
    st pkg = pkg;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r1):
    c1 = `as.logical`(r1);
    if c1 then L7() else L1(c1);
  L4():
    srcdir = ld srcdir;
    check L6() else D0();
  L5():
    r = dyn base(<sym srcdir>);
    goto L0(r);
  D0():
    deopt 1 [srcdir];
  L1(c3):
    c8 = `as.logical`(c3);
    if c8 then L11() else L2();
  L6():
    srcdir1 = force? srcdir;
    checkMissing(srcdir1);
    c = `==`(srcdir1, NULL);
    goto L0(c);
  L7():
    _in_ = ldf `%in%`;
    check L8() else D1();
  D1():
    deopt 5 [c1];
  L2():
    goto L3();
  L3():
    testInstalledPackage = ldf testInstalledPackage;
    check L15() else D5();
  L8():
    p = prom<V +>{
      pkg1 = ld pkg;
      pkg2 = force? pkg1;
      checkMissing(pkg2);
      return pkg2;
    };
    p1 = prom<V +>{
      known_packages = ld known_packages;
      known_packages1 = force? known_packages;
      checkMissing(known_packages1);
      c4 = `is.object`(known_packages1);
      if c4 then L1() else L2(known_packages1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", known_packages1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(known_packages3):
      r3 = `$`(known_packages3, <sym base>);
      goto L0(r3);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r5 = dyn _in_(p, p1);
    check L9() else D2();
  L11():
    R_home = ldf `R.home`;
    check L12() else D3();
  D2():
    deopt 8 [c1, r5];
  D3():
    deopt 11 [];
  D5():
    deopt 18 [];
  L9():
    c5 = `as.logical`(r5);
    c6 = `&&`(c1, c5);
    goto L1(c6);
  L12():
    r6 = dyn R_home("tests/Examples");
    check L13() else D4();
  L15():
    p2 = prom<V +>{
      pkg3 = ld pkg;
      pkg4 = force? pkg3;
      checkMissing(pkg4);
      return pkg4;
    };
    p3 = prom<V +>{
      _Library = ld `.Library`;
      _Library1 = force? _Library;
      checkMissing(_Library1);
      return _Library1;
    };
    p4 = prom<V +>{
      outDir = ld outDir;
      outDir1 = force? outDir;
      checkMissing(outDir1);
      return outDir1;
    };
    p5 = prom<V +>{
      types = ld types;
      types1 = force? types;
      checkMissing(types1);
      return types1;
    };
    p6 = prom<V +>{
      srcdir2 = ld srcdir;
      srcdir3 = force? srcdir2;
      checkMissing(srcdir3);
      return srcdir3;
    };
    p7 = prom<V +>{
      Ropts = ld Ropts;
      Ropts1 = force? Ropts;
      checkMissing(Ropts1);
      return Ropts1;
    };
    ddd = ld `...`;
    r14 = dyn testInstalledPackage[, , , , , , `...`](p2, p3, p4, p5, p6, p7, ddd);
    check L16() else D6();
  D4():
    deopt 13 [r6];
  D6():
    deopt 26 [r14];
  L13():
    st srcdir = r6;
    goto L3();
  L16():
    popenv;
    return r14;
  }
}