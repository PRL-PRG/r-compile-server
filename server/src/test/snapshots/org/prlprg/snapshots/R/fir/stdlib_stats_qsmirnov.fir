fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1119634203;
    st qsmirnov = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1119634203(p, sizes, z, alternative, exact, simulate, B) {
  (reg p:*, reg sizes:*, reg z:*, reg alternative:*, reg exact:*, reg simulate:*, reg B:*) -+> V { var p:*, var sizes:*, var z:*, reg z_isMissing:L, reg z_orDefault:*, var alternative:*, reg alternative_isMissing:L, reg alternative_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p1:p(V +), var exact:*, reg exact_isMissing:L, reg exact_orDefault:*, var simulate:*, reg simulate_isMissing:L, reg simulate_orDefault:*, var B:*, reg B_isMissing:L, reg B_orDefault:*, reg match_arg:cls, reg alternative1:*, reg alternative2:V, reg p2:p(V +), reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg sizes1:*, reg sizes2:V, reg c1:L, reg sizes4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r8:V, reg r9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg sizes5:*, reg sizes6:V, reg c2:L, reg sizes8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r12:V, reg r13:V, reg n_x:*, reg n_x1:V, reg n_y:*, reg n_y1:V, reg r14:V, reg r15:V, reg c3:L, reg sort:cls, reg unique:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg r17:V, reg outer:cls, reg n_x2:*, reg n_x3:V, reg r18:V, reg n_x4:*, reg n_x5:V, reg r19:V, reg p3:p(V +), reg n_y2:*, reg n_y3:V, reg r21:V, reg n_y4:*, reg n_y5:V, reg r22:V, reg p4:p(V +), reg r24:V, reg c4:cls, reg r25:V, reg p5:p(V +), reg r27:V, reg p6:p(V +), reg r29:V, reg r31:V, reg r32:V, reg alternative3:*, reg alternative4:V, reg r33:V, reg c5:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r34:V, reg r35:V, reg stat:*, reg stat1:V, reg abs:cls, reg r36:V, reg psmirnov:cls, reg stat2:*, reg stat3:V, reg p7:p(V +), reg sizes9:*, reg sizes10:V, reg p8:p(V +), reg z1:*, reg z2:V, reg p9:p(V +), reg alternative5:*, reg alternative6:V, reg p10:p(V +), reg exact1:*, reg exact2:V, reg p11:p(V +), reg simulate1:*, reg simulate2:V, reg p12:p(V +), reg B1:*, reg B2:V, reg p13:p(V +), reg r45:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r46:V, reg r47:V, reg p14:*, reg p15:V, reg c6:V, reg c7:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r48:V, reg r49:V, reg stat4:*, reg stat5:V, reg prb:*, reg prb1:V, reg list:cls, reg r50:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r53:V, reg r54:V, reg p16:*, reg p17:V, reg is_numeric:cls, reg r55:V, reg c8:L, reg sym8:cls, reg base8:cls, reg guard8:L, reg r56:V, reg r57:V, reg p18:*, reg p19:V, reg c9:L, reg r58:V, reg c10:L, reg l:*, reg storage_mode__:cls, reg r59:V, reg r60:V, reg stop:cls, reg r62:V, reg p20:*, reg p21:V, reg l1:*, reg c11:L, reg r64:L, reg l3:*, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r71:V, reg r72:L, reg l6:*, reg r73:L, reg r74:V, reg p22:*, reg p23:V, reg is_na:cls, reg r75:V, reg p24:*, reg p25:V, reg r76:V, reg r77:V, reg p26:*, reg p27:V, reg r78:V, reg r79:V, reg ___:cls, reg r80:V, reg which:cls, reg sym10:cls, reg base10:cls, reg guard10:L, reg r81:V, reg r82:V, reg ret:*, reg ret1:V, reg is_na1:cls, reg r83:V, reg r84:V, reg p28:p(V +), reg r86:V, reg vapply:cls, reg p29:*, reg p30:V, reg c12:L, reg p32:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg IND:*, reg IND1:V, reg __2:cls, reg r87:V, reg p33:p(V +), reg r89:cls, reg p34:p(V +), reg r91:V, reg l7:*, reg c13:L, reg r93:V, reg l9:*, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg IND2:*, reg IND3:V, reg ___1:cls, reg r96:V, reg ret2:*, reg ret3:V |
    mkenv;
    st p = p;
    st sizes = sizes;
    z_isMissing = missing.0(z);
    if z_isMissing then L0(NULL) else L0(z);
  L0(z_orDefault):
    st z = z_orDefault;
    alternative_isMissing = missing.0(alternative);
    if alternative_isMissing then L1() else L2(alternative);
  L1():
    p1 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("two.sided", "less", "greater");
      goto L0(r2);
    L2():
      r = dyn base("two.sided", "less", "greater");
      goto L0(r);
    };
    goto L2(p1);
  L2(alternative_orDefault):
    st alternative = alternative_orDefault;
    exact_isMissing = missing.0(exact);
    if exact_isMissing then L3(TRUE) else L3(exact);
  L3(exact_orDefault):
    st exact = exact_orDefault;
    simulate_isMissing = missing.0(simulate);
    if simulate_isMissing then L4(FALSE) else L4(simulate);
  L4(simulate_orDefault):
    st simulate = simulate_orDefault;
    B_isMissing = missing.0(B);
    if B_isMissing then L5(2000.0) else L5(B);
  L5(B_orDefault):
    st B = B_orDefault;
    match_arg = ldf `match.arg`;
    check L28() else D0();
  D0():
    deopt 1 [];
  L28():
    p2 = prom<V +>{
      alternative1 = ld alternative;
      alternative2 = force? alternative1;
      checkMissing(alternative2);
      return alternative2;
    };
    r5 = dyn match_arg(p2);
    check L29() else D1();
  D1():
    deopt 3 [r5];
  L29():
    st alternative = r5;
    sym1 = ldf floor;
    base1 = ldf floor in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L30() else L31();
  L6(r7):
    st `n.x` = r7;
    sym2 = ldf floor;
    base2 = ldf floor in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L36() else L37();
  L30():
    sizes1 = ld sizes;
    check L32() else D2();
  L31():
    r6 = dyn base1(<lang `[`(sizes, 1)>);
    goto L6(r6);
  D2():
    deopt 6 [sizes1];
  L8(r11):
    st `n.y` = r11;
    n_x = ld `n.x`;
    check L42() else D4();
  L32():
    sizes2 = force? sizes1;
    checkMissing(sizes2);
    c1 = `is.object`(sizes2);
    if c1 then L33() else L34(sizes2);
  L36():
    sizes5 = ld sizes;
    check L38() else D3();
  L37():
    r10 = dyn base2(<lang `[`(sizes, 2)>);
    goto L8(r10);
  D3():
    deopt 14 [sizes5];
  D4():
    deopt 21 [n_x];
  L7(dx1):
    r9 = floor(dx1);
    goto L6(r9);
  L33():
    dr = tryDispatchBuiltin.1("[", sizes2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L35() else L34(dr);
  L34(sizes4):
    __ = ldf `[` in base;
    r8 = dyn __(sizes4, 1);
    goto L7(r8);
  L38():
    sizes6 = force? sizes5;
    checkMissing(sizes6);
    c2 = `is.object`(sizes6);
    if c2 then L39() else L40(sizes6);
  L42():
    n_x1 = force? n_x;
    checkMissing(n_x1);
    n_y = ld `n.y`;
    check L43() else D5();
  D5():
    deopt 22 [n_x1, n_y];
  L9(dx3):
    r13 = floor(dx3);
    goto L8(r13);
  L35():
    dx = getTryDispatchBuiltinValue(dr);
    goto L7(dx);
  L39():
    dr2 = tryDispatchBuiltin.1("[", sizes6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L41() else L40(dr2);
  L40(sizes8):
    __1 = ldf `[` in base;
    r12 = dyn __1(sizes8, 2);
    goto L9(r12);
  L43():
    n_y1 = force? n_y;
    checkMissing(n_y1);
    r14 = `*`(n_x1, n_y1);
    r15 = `<`(r14, 10000.0);
    c3 = `as.logical`(r15);
    if c3 then L44() else L10();
  L10():
    r31 = `:`(-10000.0, 10000.0);
    r32 = `/`(r31, 10001.0);
    st stat = r32;
    goto L11();
  L11():
    alternative3 = ld alternative;
    check L48() else D8();
  L41():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L9(dx2);
  L44():
    sort = ldf sort;
    check L45() else D6();
  D6():
    deopt 28 [];
  D8():
    deopt 39 [alternative3];
  L45():
    p6 = prom<V +>{
      unique = ldf unique;
      p5 = prom<V +>{
        sym3 = ldf c;
        base3 = ldf c in base;
        guard3 = `==`.4(sym3, base3);
        if guard3 then L1() else L2();
      L0(r17):
        return r17;
      L1():
        outer = ldf outer;
        p3 = prom<V +>{
          n_x2 = ld `n.x`;
          n_x3 = force? n_x2;
          checkMissing(n_x3);
          r18 = `:`(0.0, n_x3);
          n_x4 = ld `n.x`;
          n_x5 = force? n_x4;
          checkMissing(n_x5);
          r19 = `/`(r18, n_x5);
          return r19;
        };
        p4 = prom<V +>{
          n_y2 = ld `n.y`;
          n_y3 = force? n_y2;
          checkMissing(n_y3);
          r21 = `:`(0.0, n_y3);
          n_y4 = ld `n.y`;
          n_y5 = force? n_y4;
          checkMissing(n_y5);
          r22 = `/`(r21, n_y5);
          return r22;
        };
        r24 = dyn outer(p3, p4, "-");
        c4 = ldf c in base;
        r25 = dyn c4(r24);
        goto L0(r25);
      L2():
        r16 = dyn base3(<lang outer(`/`(`:`(0.0, n.x), n.x), `/`(`:`(0.0, n.y), n.y), "-")>);
        goto L0(r16);
      };
      r27 = dyn unique(p5);
      return r27;
    };
    r29 = dyn sort(p6);
    check L46() else D7();
  L48():
    alternative4 = force? alternative3;
    checkMissing(alternative4);
    r33 = `==`(alternative4, "two.sided");
    c5 = `as.logical`(r33);
    if c5 then L49() else L12();
  D7():
    deopt 30 [r29];
  L12():
    goto L14();
  L14():
    psmirnov = ldf psmirnov;
    check L55() else D11();
  L46():
    st stat = r29;
    goto L11();
  L49():
    sym4 = ldf abs;
    base4 = ldf abs in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L50() else L51();
  D11():
    deopt 53 [];
  L13(r35):
    st stat = r35;
    goto L14();
  L50():
    stat = ld stat;
    check L52() else D9();
  L51():
    r34 = dyn base4(<sym stat>);
    goto L13(r34);
  L55():
    p7 = prom<V +>{
      stat2 = ld stat;
      stat3 = force? stat2;
      checkMissing(stat3);
      return stat3;
    };
    p8 = prom<V +>{
      sizes9 = ld sizes;
      sizes10 = force? sizes9;
      checkMissing(sizes10);
      return sizes10;
    };
    p9 = prom<V +>{
      z1 = ld z;
      z2 = force? z1;
      checkMissing(z2);
      return z2;
    };
    p10 = prom<V +>{
      alternative5 = ld alternative;
      alternative6 = force? alternative5;
      checkMissing(alternative6);
      return alternative6;
    };
    p11 = prom<V +>{
      exact1 = ld exact;
      exact2 = force? exact1;
      checkMissing(exact2);
      return exact2;
    };
    p12 = prom<V +>{
      simulate1 = ld simulate;
      simulate2 = force? simulate1;
      checkMissing(simulate2);
      return simulate2;
    };
    p13 = prom<V +>{
      B1 = ld B;
      B2 = force? B1;
      checkMissing(B2);
      return B2;
    };
    r45 = dyn psmirnov[, sizes, z, alternative, exact, simulate, B, `log.p`, `lower.tail`](p7, p8, p9, p10, p11, p12, p13, FALSE, TRUE);
    check L56() else D12();
  D9():
    deopt 45 [stat];
  D12():
    deopt 71 [r45];
  L52():
    stat1 = force? stat;
    checkMissing(stat1);
    abs = ldf abs in base;
    r36 = dyn abs(stat1);
    check L53() else D10();
  L56():
    st prb = r45;
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L57() else L58();
  D10():
    deopt 48 [r36];
  L15(r47):
    c7 = `as.logical`(r47);
    if c7 then L60() else L16();
  L53():
    goto L13(r36);
  L57():
    p14 = ld p;
    check L59() else D13();
  L58():
    r46 = dyn base5(<sym p>);
    goto L15(r46);
  D13():
    deopt 74 [p14];
  L16():
    sym7 = ldf `is.numeric`;
    base7 = ldf `is.numeric` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L68() else L69();
  L59():
    p15 = force? p14;
    checkMissing(p15);
    c6 = `==`(p15, NULL);
    goto L15(c6);
  L60():
    sym6 = ldf list;
    base6 = ldf list in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L61() else L62();
  L17(r49):
    popenv;
    return r49;
  L19(r54):
    c8 = `as.logical`(r54);
    if c8 then L72() else L20();
  L61():
    stat4 = ld stat;
    check L63() else D14();
  L62():
    r48 = dyn base6[stat, prob](<sym stat>, <sym prb>);
    goto L17(r48);
  L68():
    p16 = ld p;
    check L70() else D17();
  L69():
    r53 = dyn base7(<sym p>);
    goto L19(r53);
  D14():
    deopt 79 [stat4];
  D17():
    deopt 92 [p16];
  L20():
    stop = ldf stop;
    check L81() else D22();
  L24():
    p20 = ld p;
    check L83() else D24();
  L63():
    stat5 = force? stat4;
    checkMissing(stat5);
    prb = ld prb;
    check L64() else D15();
  L70():
    p17 = force? p16;
    checkMissing(p17);
    is_numeric = ldf `is.numeric` in base;
    r55 = dyn is_numeric(p17);
    check L71() else D18();
  L72():
    sym8 = ldf `is.double`;
    base8 = ldf `is.double` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L73() else L74();
  D15():
    deopt 82 [prb];
  D18():
    deopt 95 [r55];
  D22():
    deopt 111 [];
  D24():
    deopt 114 [p20];
  L21(r57):
    r58 = `!`(r57);
    c10 = `as.logical`(r58);
    if c10 then L76() else L22();
  L64():
    prb1 = force? prb;
    checkMissing(prb1);
    list = ldf list in base;
    r50 = dyn list(stat5, prb1);
    check L65() else D16();
  L71():
    goto L19(r55);
  L73():
    p18 = ld p;
    check L75() else D19();
  L74():
    r56 = dyn base8(<sym p>);
    goto L21(r56);
  L81():
    r62 = dyn stop("argument 'p' must be numeric");
    check L82() else D23();
  L83():
    p21 = force? p20;
    checkMissing(p21);
    st ret = p21;
    l1 = ld ret;
    c11 = `is.object`(l1);
    if c11 then L84() else L85(NA_LGL, l1);
  D16():
    deopt 86 [r50];
  D19():
    deopt 97 [p18];
  D23():
    deopt 113 [r62];
  L22():
    goto L23(NULL);
  L23(r60):
    goto L24();
  L25(dx5):
    st ret = dx5;
    which = ldf which;
    check L93() else D29();
  L65():
    goto L17(r50);
  L75():
    p19 = force? p18;
    checkMissing(p19);
    c9 = `is.double`(p19);
    goto L21(c9);
  L76():
    l = ld p;
    storage_mode__ = ldf `storage.mode<-`;
    check L77() else D20();
  L82():
    goto L24();
  L84():
    dr4 = tryDispatchBuiltin.0("[<-", l1, NA_LGL);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L86() else L85(NA_LGL, dr4);
  L85(r64, l3):
    sym9 = ldf `is.na`;
    base9 = ldf `is.na` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L87() else L88();
  D20():
    deopt 104 ["double", l, "double"];
  D29():
    deopt 137 [];
  L26(r72, l6, r73, r74):
    p24 = ld p;
    check L91() else D27();
  L77():
    r59 = dyn storage_mode__(l, NULL, "double");
    check L78() else D21();
  L86():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L25(dx4);
  L87():
    p22 = ld p;
    check L89() else D25();
  L88():
    r71 = dyn base9(<sym p>);
    goto L26(r64, l3, NA_LGL, r71);
  L93():
    p28 = prom<V +>{
      sym10 = ldf `is.na`;
      base10 = ldf `is.na` in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L1() else L2();
    L0(r82):
      r84 = `!`(r82);
      return r84;
    L1():
      ret = ld ret;
      ret1 = force? ret;
      checkMissing(ret1);
      is_na1 = ldf `is.na` in base;
      r83 = dyn is_na1(ret1);
      goto L0(r83);
    L2():
      r81 = dyn base10(<sym ret>);
      goto L0(r81);
    };
    r86 = dyn which(p28);
    check L94() else D30();
  D21():
    deopt 106 ["double", r59];
  D25():
    deopt 122 [r64, l3, NA_LGL, p22];
  D27():
    deopt 125 [r72, l6, r73, r74, p24];
  D30():
    deopt 139 [r86];
  L78():
    st p = r59;
    goto L23("double");
  L89():
    p23 = force? p22;
    checkMissing(p23);
    is_na = ldf `is.na` in base;
    r75 = dyn is_na(p23);
    check L90() else D26();
  L91():
    p25 = force? p24;
    checkMissing(p25);
    r76 = `<`(p25, 0.0);
    r77 = `||`(r74, r76);
    p26 = ld p;
    check L92() else D28();
  L94():
    st IND = r86;
    vapply = ldf vapply;
    check L95() else D31();
  D26():
    deopt 125 [r64, l3, NA_LGL, r75];
  D28():
    deopt 129 [r72, l6, r73, r77, p26];
  D31():
    deopt 142 [];
  L90():
    goto L26(r64, l3, NA_LGL, r75);
  L92():
    p27 = force? p26;
    checkMissing(p27);
    r78 = `>`(p27, 1.0);
    r79 = `||`(r77, r78);
    ___ = ldf `[<-` in base;
    r80 = dyn ___(l6, r73, r79);
    goto L25(r80);
  L95():
    p33 = prom<V +>{
      p29 = ld p;
      p30 = force? p29;
      checkMissing(p30);
      c12 = `is.object`(p30);
      if c12 then L1() else L2(p30);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[", p30);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(p32):
      IND = ld IND;
      IND1 = force? IND;
      __2 = ldf `[` in base;
      r87 = dyn __2(p32, IND1);
      goto L0(r87);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    p34 = prom<V +>{
      r89 = clos inner883694641;
      return r89;
    };
    r91 = dyn vapply(p33, p34, 1.0);
    check L96() else D32();
  D32():
    deopt 146 [r91];
  L96():
    l7 = ld ret;
    c13 = `is.object`(l7);
    if c13 then L97() else L98(r91, l7);
  L27(dx9):
    st ret = dx9;
    ret2 = ld ret;
    check L101() else D34();
  L97():
    dr8 = tryDispatchBuiltin.0("[<-", l7, r91);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L99() else L98(r91, dr8);
  L98(r93, l9):
    IND2 = ld IND;
    check L100() else D33();
  D33():
    deopt 148 [r93, l9, r91, IND2];
  D34():
    deopt 152 [ret2];
  L99():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L27(dx8);
  L100():
    IND3 = force? IND2;
    ___1 = ldf `[<-` in base;
    r96 = dyn ___1(l9, r91, IND3);
    goto L27(r96);
  L101():
    ret3 = force? ret2;
    checkMissing(ret3);
    popenv;
    return ret3;
  }
}
fun inner883694641(u) {
  (reg u:*) -+> V { var u:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg stat:*, reg stat1:V, reg c:L, reg stat3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg prb:*, reg prb1:V, reg u1:*, reg u2:V, reg r2:V, reg __:cls, reg r3:V, reg min:cls, reg r4:V |
    mkenv;
    st u = u;
    sym = ldf min;
    base = ldf min in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    popenv;
    return r1;
  L2():
    stat = ld stat;
    check L4() else D0();
  L3():
    r = dyn base(<lang `[`(stat, `>=`(prb, u))>);
    goto L0(r);
  D0():
    deopt 2 [stat];
  L4():
    stat1 = force? stat;
    checkMissing(stat1);
    c = `is.object`(stat1);
    if c then L5() else L6(stat1);
  L1(dx1):
    min = ldf min in base;
    r4 = dyn min(dx1);
    check L10() else D3();
  L5():
    dr = tryDispatchBuiltin.1("[", stat1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L7() else L6(dr);
  L6(stat3):
    prb = ld prb;
    check L8() else D1();
  D1():
    deopt 4 [stat3, prb];
  D3():
    deopt 10 [r4];
  L7():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L8():
    prb1 = force? prb;
    checkMissing(prb1);
    u1 = ld u;
    check L9() else D2();
  L10():
    goto L0(r4);
  D2():
    deopt 5 [stat3, prb1, u1];
  L9():
    u2 = force? u1;
    checkMissing(u2);
    r2 = `>=`(prb1, u2);
    __ = ldf `[` in base;
    r3 = dyn __(stat3, r2);
    goto L1(r3);
  }
}