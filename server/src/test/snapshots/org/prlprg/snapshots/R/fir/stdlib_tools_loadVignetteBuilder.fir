fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner848757401;
    st loadVignetteBuilder = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner848757401(pkgdir, mustwork, `lib.loc`) {
  (reg pkgdir:*, reg mustwork:*, reg lib_loc:*) -+> V { var pkgdir:*, var mustwork:*, reg mustwork_isMissing:L, reg mustwork_orDefault:*, var `lib.loc`:*, reg lib_loc_isMissing:L, reg lib_loc_orDefault:*, reg _get_package_metadata:cls, reg pkgdir1:*, reg pkgdir2:V, reg p:p(V +), reg r1:V, reg c:L, reg r3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r4:V, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg pkgs:*, reg pkgs1:V, reg is_na:cls, reg r7:V, reg c1:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg pkgs2:*, reg pkgs3:V, reg length:cls, reg r11:V, reg c2:L, reg unlist:cls, reg strsplit:cls, reg pkgs4:*, reg pkgs5:V, reg p1:p(V +), reg r13:V, reg p2:p(V +), reg r15:V, reg gsub:cls, reg pkgs6:*, reg pkgs7:V, reg p3:p(V +), reg r17:V, reg unique:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r18:V, reg r19:V, reg pkgs8:*, reg pkgs9:V, reg c3:cls, reg r20:V, reg p4:p(V +), reg r22:V, reg pkgs10:*, reg pkgs11:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c4:L, reg x:V, reg tryCatch:cls, reg suppressPackageStartupMessages:cls, reg loadNamespace:cls, reg pkg:*, reg pkg1:V, reg p5:p(V +), reg lib_loc1:*, reg lib_loc2:V, reg p6:p(V +), reg r25:V, reg p7:p(V +), reg r27:V, reg p8:p(V +), reg identity:*, reg identity1:V, reg p9:p(V +), reg r30:V, reg mustwork1:*, reg mustwork2:V, reg c5:L, reg i6:I, reg c7:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r31:V, reg i9:I, reg c10:L, reg r32:V, reg res:*, reg res1:V, reg inherits:cls, reg r33:V, reg c11:L, reg c12:V, reg c14:L, reg stop:cls, reg gettextf:cls, reg pkg2:*, reg pkg3:V, reg p10:p(V +), reg r35:V, reg p11:p(V +), reg r37:V, reg i13:I, reg pkgs12:*, reg pkgs13:V |
    mkenv;
    st pkgdir = pkgdir;
    mustwork_isMissing = missing.0(mustwork);
    if mustwork_isMissing then L0(TRUE) else L0(mustwork);
  L0(mustwork_orDefault):
    st mustwork = mustwork_orDefault;
    lib_loc_isMissing = missing.0(lib_loc);
    if lib_loc_isMissing then L1(NULL) else L1(lib_loc);
  L1(lib_loc_orDefault):
    st `lib.loc` = lib_loc_orDefault;
    _get_package_metadata = ldf `.get_package_metadata`;
    check L14() else D0();
  D0():
    deopt 1 [];
  L14():
    p = prom<V +>{
      pkgdir1 = ld pkgdir;
      pkgdir2 = force? pkgdir1;
      checkMissing(pkgdir2);
      return pkgdir2;
    };
    r1 = dyn _get_package_metadata(p);
    check L15() else D1();
  D1():
    deopt 3 [r1];
  L15():
    c = `is.object`(r1);
    if c then L16() else L17(r1);
  L2(dx1):
    st pkgs = dx1;
    sym = ldf `is.na`;
    base = ldf `is.na` in base;
    guard = `==`.4(sym, base);
    if guard then L19() else L20();
  L16():
    dr = tryDispatchBuiltin.1("[", r1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L18() else L17(dr);
  L17(r3):
    __ = ldf `[` in base;
    r4 = dyn __(r3, "VignetteBuilder");
    goto L2(r4);
  L3(r6):
    c1 = `as.logical`(r6);
    if c1 then L23() else L4();
  L18():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L19():
    pkgs = ld pkgs;
    check L21() else D2();
  L20():
    r5 = dyn base(<sym pkgs>);
    goto L3(r5);
  D2():
    deopt 10 [pkgs];
  L4():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L25() else L26();
  L5():
    unique = ldf unique;
    check L35() else D10();
  L21():
    pkgs1 = force? pkgs;
    checkMissing(pkgs1);
    is_na = ldf `is.na` in base;
    r7 = dyn is_na(pkgs1);
    check L22() else D3();
  L23():
    st pkgs = NULL;
    goto L5();
  D3():
    deopt 13 [r7];
  D10():
    deopt 38 [];
  L6(r10):
    c2 = `as.logical`(r10);
    if c2 then L29() else L7();
  L22():
    goto L3(r7);
  L25():
    pkgs2 = ld pkgs;
    check L27() else D4();
  L26():
    r9 = dyn base1(<sym pkgs>);
    goto L6(r9);
  L35():
    p4 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r19):
      return r19;
    L1():
      pkgs8 = ld pkgs;
      pkgs9 = force? pkgs8;
      checkMissing(pkgs9);
      c3 = ldf c in base;
      r20 = dyn c3(pkgs9, "utils");
      goto L0(r20);
    L2():
      r18 = dyn base2(<sym pkgs>, "utils");
      goto L0(r18);
    };
    r22 = dyn unique(p4);
    check L36() else D11();
  D4():
    deopt 19 [pkgs2];
  D11():
    deopt 40 [r22];
  L7():
    goto L5();
  L27():
    pkgs3 = force? pkgs2;
    checkMissing(pkgs3);
    length = ldf length in base;
    r11 = dyn length(pkgs3);
    check L28() else D5();
  L29():
    unlist = ldf unlist;
    check L30() else D6();
  L36():
    st pkgs = r22;
    pkgs10 = ld pkgs;
    check L37() else D12();
  D5():
    deopt 22 [r11];
  D6():
    deopt 24 [];
  D12():
    deopt 42 [pkgs10];
  L28():
    goto L6(r11);
  L30():
    p2 = prom<V +>{
      strsplit = ldf strsplit;
      p1 = prom<V +>{
        pkgs4 = ld pkgs;
        pkgs5 = force? pkgs4;
        checkMissing(pkgs5);
        return pkgs5;
      };
      r13 = dyn strsplit(p1, ",");
      return r13;
    };
    r15 = dyn unlist(p2);
    check L31() else D7();
  L37():
    pkgs11 = force? pkgs10;
    checkMissing(pkgs11);
    s = toForSeq(pkgs11);
    l = length(s);
    i = 0;
    goto L8(i);
  D7():
    deopt 26 [r15];
  L8(i1):
    i2 = `+`.1(i1, 1);
    c4 = `<`.1(l, i2);
    if c4 then L38() else L13();
  L31():
    st pkgs = r15;
    gsub = ldf gsub;
    check L32() else D8();
  D8():
    deopt 29 [];
  L13():
    x = `[[`(s, i2, NULL, TRUE);
    st pkg = x;
    tryCatch = ldf tryCatch;
    check L39() else D13();
  L32():
    p3 = prom<V +>{
      pkgs6 = ld pkgs;
      pkgs7 = force? pkgs6;
      checkMissing(pkgs7);
      return pkgs7;
    };
    r17 = dyn gsub("[[:space:]]", "", p3);
    check L33() else D9();
  L38():
    pkgs12 = ld pkgs;
    check L52() else D20();
  D9():
    deopt 33 [r17];
  D13():
    deopt 45 [i2];
  D20():
    deopt 73 [pkgs12];
  L33():
    st pkgs = r17;
    goto L5();
  L39():
    p8 = prom<V +>{
      suppressPackageStartupMessages = ldf suppressPackageStartupMessages;
      p7 = prom<V +>{
        loadNamespace = ldf loadNamespace;
        p5 = prom<V +>{
          pkg = ld pkg;
          pkg1 = force? pkg;
          checkMissing(pkg1);
          return pkg1;
        };
        p6 = prom<V +>{
          lib_loc1 = ld `lib.loc`;
          lib_loc2 = force? lib_loc1;
          checkMissing(lib_loc2);
          return lib_loc2;
        };
        r25 = dyn loadNamespace[, `lib.loc`](p5, p6);
        return r25;
      };
      r27 = dyn suppressPackageStartupMessages(p7);
      return r27;
    };
    p9 = prom<V +>{
      identity = ld identity;
      identity1 = force? identity;
      checkMissing(identity1);
      return identity1;
    };
    r30 = dyn tryCatch[, error](p8, p9);
    check L40() else D14();
  L52():
    pkgs13 = force? pkgs12;
    checkMissing(pkgs13);
    popenv;
    return pkgs13;
  D14():
    deopt 49 [i2, r30];
  L40():
    st res = r30;
    mustwork1 = ld mustwork;
    check L41() else D15();
  D15():
    deopt 51 [i2, mustwork1];
  L41():
    mustwork2 = force? mustwork1;
    checkMissing(mustwork2);
    c5 = `as.logical`(mustwork2);
    if c5 then L42() else L9(i2, c5);
  L9(i6, c7):
    c14 = `as.logical`(c7);
    if c14 then L48() else L11();
  L42():
    sym3 = ldf inherits;
    base3 = ldf inherits in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L43() else L44();
  L10(i9, c10, r32):
    c11 = `as.logical`(r32);
    c12 = `&&`(c10, c11);
    goto L9(i9, c12);
  L11():
    goto L12(i6);
  L12(i13):
    goto L8(i13);
  L43():
    res = ld res;
    check L45() else D16();
  L44():
    r31 = dyn base3(<sym res>, "error");
    goto L10(i2, c5, r31);
  L48():
    stop = ldf stop;
    check L49() else D18();
  D16():
    deopt 55 [i2, c5, res];
  D18():
    deopt 63 [i6];
  L45():
    res1 = force? res;
    checkMissing(res1);
    inherits = ldf inherits in base;
    r33 = dyn inherits(res1, "error", FALSE);
    check L46() else D17();
  L49():
    p11 = prom<V +>{
      gettextf = ldf gettextf;
      p10 = prom<V +>{
        pkg2 = ld pkg;
        pkg3 = force? pkg2;
        checkMissing(pkg3);
        return pkg3;
      };
      r35 = dyn gettextf("vignette builder '%s' not found", p10);
      return r35;
    };
    r37 = dyn stop[, domain](p11, NA_LGL);
    check L50() else D19();
  D17():
    deopt 60 [i2, c5, r33];
  D19():
    deopt 67 [i6, r37];
  L46():
    goto L10(i2, c5, r33);
  L50():
    goto L12(i6);
  }
}