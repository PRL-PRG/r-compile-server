fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg graphics:*, reg graphics1:V, reg p:p(V +), reg r4:V, reg set_seed:cls, reg r5:V, reg rnorm:cls, reg r6:V, reg hclust:cls, reg dist:cls, reg x:*, reg x1:V, reg p1:p(V +), reg r8:V, reg p2:p(V +), reg r10:V, reg as_dendrogram:cls, reg hc:*, reg hc1:V, reg p3:p(V +), reg r12:V, reg reorder:cls, reg dd:*, reg dd1:V, reg p4:p(V +), reg p5:p(V +), reg r15:V, reg plot:cls, reg dd2:*, reg dd3:V, reg p6:p(V +), reg r17:V, reg par:cls, reg p7:p(V +), reg r19:V, reg plot1:cls, reg dd_reorder:*, reg dd_reorder1:V, reg p8:p(V +), reg r21:V, reg plot2:cls, reg reorder1:cls, reg dd4:*, reg dd5:V, reg p9:p(V +), reg p10:p(V +), reg mean:*, reg mean1:V, reg p11:p(V +), reg r25:V, reg p12:p(V +), reg r27:V, reg par1:cls, reg op:*, reg op1:V, reg p13:p(V +), reg r29:V |
    mkenv;
    r = clos inner1405831253;
    st `reorder.dendrogram` = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0():
    set_seed = ldf `set.seed`;
    check L5() else D2();
  L1():
    require = ldf require;
    check L3() else D0();
  L2():
    r1 = dyn base(<sym graphics>);
    goto L0();
  D0():
    deopt 5 [];
  D2():
    deopt 9 [];
  L3():
    p = prom<V +>{
      graphics = ld graphics;
      graphics1 = force? graphics;
      checkMissing(graphics1);
      return graphics1;
    };
    r4 = dyn require(p);
    check L4() else D1();
  L5():
    r5 = dyn set_seed(123.0);
    check L6() else D3();
  D1():
    deopt 7 [r4];
  D3():
    deopt 11 [r5];
  L4():
    goto L0();
  L6():
    rnorm = ldf rnorm;
    check L7() else D4();
  D4():
    deopt 13 [];
  L7():
    r6 = dyn rnorm(10.0);
    check L8() else D5();
  D5():
    deopt 15 [r6];
  L8():
    st x = r6;
    hclust = ldf hclust;
    check L9() else D6();
  D6():
    deopt 18 [];
  L9():
    p2 = prom<V +>{
      dist = ldf dist;
      p1 = prom<V +>{
        x = ld x;
        x1 = force? x;
        checkMissing(x1);
        return x1;
      };
      r8 = dyn dist(p1);
      return r8;
    };
    r10 = dyn hclust(p2);
    check L10() else D7();
  D7():
    deopt 20 [r10];
  L10():
    st hc = r10;
    as_dendrogram = ldf `as.dendrogram`;
    check L11() else D8();
  D8():
    deopt 23 [];
  L11():
    p3 = prom<V +>{
      hc = ld hc;
      hc1 = force? hc;
      checkMissing(hc1);
      return hc1;
    };
    r12 = dyn as_dendrogram(p3);
    check L12() else D9();
  D9():
    deopt 25 [r12];
  L12():
    st dd = r12;
    reorder = ldf reorder;
    check L13() else D10();
  D10():
    deopt 28 [];
  L13():
    p4 = prom<V +>{
      dd = ld dd;
      dd1 = force? dd;
      checkMissing(dd1);
      return dd1;
    };
    p5 = prom<V +>{
      return <int 10, 9, 8, 7, 6, 5, 4, 3, 2, 1>;
    };
    r15 = dyn reorder(p4, p5);
    check L14() else D11();
  D11():
    deopt 31 [r15];
  L14():
    st `dd.reorder` = r15;
    plot = ldf plot;
    check L15() else D12();
  D12():
    deopt 34 [];
  L15():
    p6 = prom<V +>{
      dd2 = ld dd;
      dd3 = force? dd2;
      checkMissing(dd3);
      return dd3;
    };
    r17 = dyn plot[, main](p6, "random dendrogram 'dd'");
    check L16() else D13();
  D13():
    deopt 38 [r17];
  L16():
    par = ldf par;
    check L17() else D14();
  D14():
    deopt 40 [];
  L17():
    p7 = prom<V +>{
      return <int 1, 2>;
    };
    r19 = dyn par[mfcol](p7);
    check L18() else D15();
  D15():
    deopt 43 [r19];
  L18():
    st op = r19;
    plot1 = ldf plot;
    check L19() else D16();
  D16():
    deopt 46 [];
  L19():
    p8 = prom<V +>{
      dd_reorder = ld `dd.reorder`;
      dd_reorder1 = force? dd_reorder;
      checkMissing(dd_reorder1);
      return dd_reorder1;
    };
    r21 = dyn plot1[, main](p8, "reorder(dd, 10:1)");
    check L20() else D17();
  D17():
    deopt 50 [r21];
  L20():
    plot2 = ldf plot;
    check L21() else D18();
  D18():
    deopt 52 [];
  L21():
    p12 = prom<V +>{
      reorder1 = ldf reorder;
      p9 = prom<V +>{
        dd4 = ld dd;
        dd5 = force? dd4;
        checkMissing(dd5);
        return dd5;
      };
      p10 = prom<V +>{
        return <int 10, 9, 8, 7, 6, 5, 4, 3, 2, 1>;
      };
      p11 = prom<V +>{
        mean = ld mean;
        mean1 = force? mean;
        checkMissing(mean1);
        return mean1;
      };
      r25 = dyn reorder1[, , `agglo.FUN`](p9, p10, p11);
      return r25;
    };
    r27 = dyn plot2[, main](p12, "reorder(dd, 10:1, mean)");
    check L22() else D19();
  D19():
    deopt 56 [r27];
  L22():
    par1 = ldf par;
    check L23() else D20();
  D20():
    deopt 58 [];
  L23():
    p13 = prom<V +>{
      op = ld op;
      op1 = force? op;
      checkMissing(op1);
      return op1;
    };
    r29 = dyn par1(p13);
    check L24() else D21();
  D21():
    deopt 60 [r29];
  L24():
    popenv;
    return r29;
  }
}
fun inner1405831253(x, wts, `agglo.FUN`, `...`) {
  (reg x:*, reg wts:*, reg agglo_FUN:*, reg ddd:dots) -+> V { var x:*, var wts:*, var `agglo.FUN`:*, reg agglo_FUN_isMissing:L, reg agglo_FUN_orDefault:*, reg sum:*, reg sum1:V, reg p:p(V +), var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg x1:*, reg x2:V, reg inherits:cls, reg r3:V, reg r4:V, reg c:L, reg stop:cls, reg r5:V, reg match_fun:cls, reg agglo_FUN1:*, reg agglo_FUN2:V, reg p1:p(V +), reg r8:V, reg r9:cls, reg midcache_dendrogram:cls, reg oV:cls, reg x3:*, reg x4:V, reg p2:p(V +), reg wts1:*, reg wts2:V, reg p3:p(V +), reg r12:V, reg p4:p(V +), reg r14:V |
    mkenv;
    st x = x;
    st wts = wts;
    agglo_FUN_isMissing = missing.0(agglo_FUN);
    if agglo_FUN_isMissing then L0() else L1(agglo_FUN);
  L0():
    p = prom<V +>{
      sum = ld sum;
      sum1 = force? sum;
      checkMissing(sum1);
      return sum1;
    };
    goto L1(p);
  L1(agglo_FUN_orDefault):
    st `agglo.FUN` = agglo_FUN_orDefault;
    st `...` = ddd;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L2(r2):
    r4 = `!`(r2);
    c = `as.logical`(r4);
    if c then L9() else L3();
  L5():
    x1 = ld x;
    check L7() else D0();
  L6():
    r1 = dyn base(<sym x>, "dendrogram");
    goto L2(r1);
  D0():
    deopt 2 [x1];
  L3():
    goto L4();
  L4():
    match_fun = ldf `match.fun`;
    check L13() else D4();
  L7():
    x2 = force? x1;
    checkMissing(x2);
    inherits = ldf inherits in base;
    r3 = dyn inherits(x2, "dendrogram", FALSE);
    check L8() else D1();
  L9():
    stop = ldf stop;
    check L10() else D2();
  D1():
    deopt 7 [r3];
  D2():
    deopt 10 [];
  D4():
    deopt 16 [];
  L8():
    goto L2(r3);
  L10():
    r5 = dyn stop("'reorder.dendrogram' requires a dendrogram");
    check L11() else D3();
  L13():
    p1 = prom<V +>{
      agglo_FUN1 = ld `agglo.FUN`;
      agglo_FUN2 = force? agglo_FUN1;
      checkMissing(agglo_FUN2);
      return agglo_FUN2;
    };
    r8 = dyn match_fun(p1);
    check L14() else D5();
  D3():
    deopt 12 [r5];
  D5():
    deopt 18 [r8];
  L11():
    goto L4();
  L14():
    st `agglo.FUN` = r8;
    r9 = clos inner3480024042;
    st oV = r9;
    midcache_dendrogram = ldf `midcache.dendrogram`;
    check L15() else D6();
  D6():
    deopt 24 [];
  L15():
    p4 = prom<V +>{
      oV = ldf oV;
      p2 = prom<V +>{
        x3 = ld x;
        x4 = force? x3;
        checkMissing(x4);
        return x4;
      };
      p3 = prom<V +>{
        wts1 = ld wts;
        wts2 = force? wts1;
        checkMissing(wts2);
        return wts2;
      };
      r12 = dyn oV(p2, p3);
      return r12;
    };
    r14 = dyn midcache_dendrogram(p4);
    check L16() else D7();
  D7():
    deopt 26 [r14];
  L16():
    popenv;
    return r14;
  }
}
fun inner3480024042(x, wts) {
  (reg x:*, reg wts:*) -+> V { var x:*, var wts:*, reg integer:cls, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg list:cls, reg r3:V, reg is_leaf:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r5:V, reg c:L, reg wts1:*, reg wts2:V, reg c1:L, reg wts4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg x3:*, reg x4:V, reg c2:L, reg wts6:V, reg x6:V, reg dr2:V, reg dc1:L, reg dx2:V, reg wts8:V, reg dx3:V, reg __:cls, reg r6:V, reg __1:cls, reg r7:V, reg l:*, reg attr__:cls, reg r8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg x7:*, reg x8:V, reg length:cls, reg r11:V, reg k:*, reg k1:V, reg r12:V, reg c3:L, reg stop:cls, reg r13:V, reg depth:*, reg depth1:V, reg r15:V, reg k2:*, reg k3:V, reg l1:*, reg c4:L, reg k5:V, reg l3:*, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg depth2:*, reg depth3:V, reg ___:cls, reg r16:V, reg storage_mode:cls, reg jj:*, reg jj1:V, reg p1:p(V +), reg r18:V, reg storage_mode1:cls, reg kk:*, reg kk1:V, reg p2:p(V +), reg r20:V, reg r21:V, reg c5:L, reg storage_mode2:cls, reg kk2:*, reg kk3:V, reg p3:p(V +), reg r23:V, reg l4:*, reg storage_mode__:cls, reg r24:V, reg x9:*, reg x10:V, reg l5:*, reg c6:L, reg x12:V, reg l7:*, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg depth4:*, reg depth5:V, reg ____:cls, reg r26:V, reg x15:*, reg x16:V, reg c7:L, reg x18:V, reg dr8:V, reg dc4:L, reg dx9:V, reg dx10:V, reg l8:*, reg c8:L, reg x20:V, reg r28:I, reg l10:*, reg dr10:V, reg dc5:L, reg dx11:V, reg x22:V, reg r30:I, reg dx12:V, reg depth6:*, reg depth7:V, reg ___1:cls, reg r31:V, reg __2:cls, reg r32:V, reg depth8:*, reg depth9:V, reg c9:L, reg x23:*, reg x24:V, reg xx:*, reg xx1:V, reg c10:L, reg xx3:V, reg dr12:V, reg dc6:L, reg dx13:V, reg dx14:V, reg depth10:*, reg depth11:V, reg __3:cls, reg r33:V, reg jj2:*, reg jj3:V, reg c11:L, reg jj5:V, reg dr14:V, reg dc7:L, reg dx15:V, reg dx16:V, reg depth12:*, reg depth13:V, reg __4:cls, reg r34:V, reg b:*, reg b1:V, reg l11:*, reg c12:L, reg b3:V, reg l13:*, reg dr16:V, reg dc8:L, reg dx17:V, reg dx18:V, reg j:*, reg j1:V, reg ____1:cls, reg r35:V, reg j2:*, reg j3:V, reg kk4:*, reg kk5:V, reg c13:L, reg j5:V, reg kk7:V, reg dr18:V, reg dc9:L, reg dx19:V, reg j7:V, reg dx20:V, reg depth14:*, reg depth15:V, reg __5:cls, reg r36:V, reg r37:V, reg c14:L, reg depth16:*, reg depth17:V, reg r39:V, reg vapply:cls, reg x25:*, reg x26:V, reg p4:p(V +), reg attr:*, reg attr1:V, reg p5:p(V +), reg numeric:cls, reg r42:V, reg p6:p(V +), reg r44:V, reg sort_list:cls, reg vals:*, reg vals1:V, reg p7:p(V +), reg r46:V, reg agglo_FUN:cls, reg vals2:*, reg vals3:V, reg c15:L, reg vals5:V, reg dr20:V, reg dc10:L, reg dx21:V, reg dx22:V, reg iOrd:*, reg iOrd1:V, reg __6:cls, reg r47:V, reg p8:p(V +), reg r49:V, reg l14:*, reg attr__1:cls, reg r50:V, reg x27:*, reg x28:V, reg c16:L, reg x30:V, reg dr22:V, reg dc11:L, reg dx23:V, reg dx24:V, reg iOrd2:*, reg iOrd3:V, reg __7:cls, reg r51:V, reg l15:*, reg c17:L, reg dx26:V, reg dr24:V, reg dc12:L, reg dx28:V, reg dx30:V, reg ___2:cls, reg r52:V, reg depth18:*, reg depth19:V, reg r53:V, reg c18:L, reg x31:*, reg x32:V, reg l18:*, reg c19:L, reg x34:V, reg l20:*, reg dr26:V, reg dc13:L, reg dx31:V, reg dx32:V, reg depth20:*, reg depth21:V, reg ____2:cls, reg r55:V, reg x37:*, reg x38:V, reg c20:L, reg x40:V, reg dr28:V, reg dc14:L, reg dx33:V, reg dx34:V, reg j8:*, reg j9:V, reg r56:V, reg l21:*, reg c21:L, reg x42:V, reg r58:V, reg l23:*, reg dr30:V, reg dc15:L, reg dx35:V, reg x44:V, reg r60:V, reg dx36:V, reg depth22:*, reg depth23:V, reg ___3:cls, reg r61:V, reg __8:cls, reg r62:V, reg x45:*, reg x46:V |
    mkenv;
    st x = x;
    st wts = wts;
    st depth = 0;
    integer = ldf integer;
    check L31() else D0();
  D0():
    deopt 4 [];
  L31():
    r = dyn integer();
    check L32() else D1();
  D1():
    deopt 5 [r];
  L32():
    st jj = r;
    st kk = r;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L33() else L34();
  L0(r2):
    st xx = r2;
    goto L14();
  L33():
    list = ldf list in base;
    r3 = dyn list();
    check L35() else D2();
  L34():
    r1 = dyn base();
    goto L0(r1);
  D2():
    deopt 11 [r3];
  L14():
    is_leaf = ldf `is.leaf`;
    check L36() else D3();
  L35():
    goto L0(r3);
  D3():
    deopt 14 [];
  L36():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r5 = dyn is_leaf(p);
    check L37() else D4();
  D4():
    deopt 16 [r5];
  L37():
    c = `as.logical`(r5);
    if c then L38() else L1();
  L1():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L50() else L51();
  L38():
    wts1 = ld wts;
    check L39() else D5();
  D5():
    deopt 17 [wts1];
  L5(r10):
    st k = r10;
    k = ld k;
    check L54() else D11();
  L39():
    wts2 = force? wts1;
    checkMissing(wts2);
    c1 = `is.object`(wts2);
    if c1 then L40() else L41(wts2);
  L50():
    x7 = ld x;
    check L52() else D9();
  L51():
    r9 = dyn base1(<sym x>);
    goto L5(r9);
  D9():
    deopt 33 [x7];
  D11():
    deopt 38 [k];
  L2(dx1):
    l = ld x;
    attr__ = ldf `attr<-`;
    check L47() else D7();
  L40():
    dr = tryDispatchBuiltin.1("[", wts2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L42() else L41(dr);
  L41(wts4):
    x3 = ld x;
    check L43() else D6();
  L52():
    x8 = force? x7;
    checkMissing(x8);
    length = ldf length in base;
    r11 = dyn length(x8);
    check L53() else D10();
  L54():
    k1 = force? k;
    checkMissing(k1);
    r12 = `==`(k1, 0);
    c3 = `as.logical`(r12);
    if c3 then L55() else L6();
  D6():
    deopt 19 [wts4, x3];
  D7():
    deopt 26 [dx1, l, dx1];
  D10():
    deopt 36 [r11];
  L6():
    goto L7();
  L7():
    depth = ld depth;
    check L59() else D14();
  L42():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L43():
    x4 = force? x3;
    checkMissing(x4);
    c2 = `is.object`(x4);
    if c2 then L44() else L45(wts4, x4);
  L47():
    r8 = dyn attr__(l, NULL, "value", dx1);
    check L48() else D8();
  L53():
    goto L5(r11);
  L55():
    stop = ldf stop;
    check L56() else D12();
  D8():
    deopt 29 [dx1, r8];
  D12():
    deopt 43 [];
  D14():
    deopt 48 [depth];
  L3(wts8, dx3):
    __1 = ldf `[` in base;
    r7 = dyn __1(wts8, dx3);
    goto L2(r7);
  L44():
    dr2 = tryDispatchBuiltin.1("[", x4);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L46() else L45(wts4, dr2);
  L45(wts6, x6):
    __ = ldf `[` in base;
    r6 = dyn __(x6, 1);
    goto L3(wts6, r6);
  L48():
    st x = r8;
    goto L24();
  L56():
    r13 = dyn stop("invalid (length 0) node in dendrogram");
    check L57() else D13();
  L59():
    depth1 = force? depth;
    checkMissing(depth1);
    r15 = `+`(depth1, 1);
    st depth = r15;
    k2 = ld k;
    check L60() else D15();
  D13():
    deopt 45 [r13];
  D15():
    deopt 53 [k2];
  L24():
    depth8 = ld depth;
    check L89() else D29();
  L46():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L3(wts4, dx2);
  L57():
    goto L7();
  L60():
    k3 = force? k2;
    checkMissing(k3);
    l1 = ld kk;
    c4 = `is.object`(l1);
    if c4 then L61() else L62(k3, l1);
  D29():
    deopt 101 [depth8];
  L8(dx6):
    st kk = dx6;
    storage_mode = ldf `storage.mode`;
    check L65() else D17();
  L61():
    dr4 = tryDispatchBuiltin.0("[<-", l1, k3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L63() else L62(k3, dr4);
  L62(k5, l3):
    depth2 = ld depth;
    check L64() else D16();
  L89():
    depth9 = force? depth8;
    checkMissing(depth9);
    c9 = `as.logical`(depth9);
    if c9 then L90() else L15();
  D16():
    deopt 56 [k5, l3, k3, depth2];
  D17():
    deopt 61 [];
  L15():
    depth18 = ld depth;
    check L134() else D51();
  L63():
    dx5 = getTryDispatchBuiltinValue(dr4);
    goto L8(dx5);
  L64():
    depth3 = force? depth2;
    ___ = ldf `[<-` in base;
    r16 = dyn ___(l3, k3, depth3);
    goto L8(r16);
  L65():
    p1 = prom<V +>{
      jj = ld jj;
      jj1 = force? jj;
      checkMissing(jj1);
      return jj1;
    };
    r18 = dyn storage_mode(p1);
    check L66() else D18();
  L90():
    x23 = ld x;
    check L91() else D30();
  D18():
    deopt 63 [r18];
  D30():
    deopt 103 [x23];
  D51():
    deopt 178 [depth18];
  L66():
    storage_mode1 = ldf `storage.mode`;
    check L67() else D19();
  L91():
    x24 = force? x23;
    checkMissing(x24);
    st b = x24;
    xx = ld xx;
    check L92() else D31();
  L134():
    depth19 = force? depth18;
    checkMissing(depth19);
    r53 = `!`(depth19);
    c18 = `as.logical`(r53);
    if c18 then L135() else L25();
  D19():
    deopt 64 [r18];
  D31():
    deopt 106 [xx];
  L25():
    x31 = ld x;
    check L138() else D52();
  L67():
    p2 = prom<V +>{
      kk = ld kk;
      kk1 = force? kk;
      checkMissing(kk1);
      return kk1;
    };
    r20 = dyn storage_mode1(p2);
    check L68() else D20();
  L92():
    xx1 = force? xx;
    checkMissing(xx1);
    c10 = `is.object`(xx1);
    if c10 then L93() else L94(xx1);
  L135():
    x45 = ld x;
    check L153() else D57();
  D20():
    deopt 66 [r18, r20];
  D52():
    deopt 185 [x31];
  D57():
    deopt 210 [x45];
  L16(dx14):
    st x = dx14;
    jj2 = ld jj;
    check L97() else D33();
  L68():
    r21 = `!=`(r18, r20);
    c5 = `as.logical`(r21);
    if c5 then L69() else L9();
  L93():
    dr12 = tryDispatchBuiltin.1("[[", xx1);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L95() else L94(dr12);
  L94(xx3):
    depth10 = ld depth;
    check L96() else D32();
  L138():
    x32 = force? x31;
    checkMissing(x32);
    l18 = ld xx;
    c19 = `is.object`(l18);
    if c19 then L139() else L140(x32, l18);
  L153():
    x46 = force? x45;
    checkMissing(x46);
    popenv;
    return x46;
  D32():
    deopt 108 [xx3, depth10];
  D33():
    deopt 112 [jj2];
  L9():
    goto L10();
  L10():
    x9 = ld x;
    check L75() else D25();
  L28(dx32):
    st xx = dx32;
    x37 = ld x;
    check L143() else D54();
  L69():
    storage_mode2 = ldf `storage.mode`;
    check L70() else D21();
  L95():
    dx13 = getTryDispatchBuiltinValue(dr12);
    goto L16(dx13);
  L96():
    depth11 = force? depth10;
    __3 = ldf `[[` in base;
    r33 = dyn __3(xx3, depth11);
    goto L16(r33);
  L97():
    jj3 = force? jj2;
    checkMissing(jj3);
    c11 = `is.object`(jj3);
    if c11 then L98() else L99(jj3);
  L139():
    dr26 = tryDispatchBuiltin.0("[[<-", l18, x32);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L141() else L140(x32, dr26);
  L140(x34, l20):
    depth20 = ld depth;
    check L142() else D53();
  D21():
    deopt 69 [];
  D25():
    deopt 79 [x9];
  D53():
    deopt 188 [x34, l20, x32, depth20];
  D54():
    deopt 192 [x37];
  L17(dx16):
    st j = dx16;
    b = ld b;
    check L102() else D35();
  L70():
    p3 = prom<V +>{
      kk2 = ld kk;
      kk3 = force? kk2;
      checkMissing(kk3);
      return kk3;
    };
    r23 = dyn storage_mode2(p3);
    check L71() else D22();
  L75():
    x10 = force? x9;
    checkMissing(x10);
    l5 = ld xx;
    c6 = `is.object`(l5);
    if c6 then L76() else L77(x10, l5);
  L98():
    dr14 = tryDispatchBuiltin.1("[", jj3);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L100() else L99(dr14);
  L99(jj5):
    depth12 = ld depth;
    check L101() else D34();
  L141():
    dx31 = getTryDispatchBuiltinValue(dr26);
    goto L28(dx31);
  L142():
    depth21 = force? depth20;
    ____2 = ldf `[[<-` in base;
    r55 = dyn ____2(l20, x32, depth21);
    goto L28(r55);
  L143():
    x38 = force? x37;
    checkMissing(x38);
    c20 = `is.object`(x38);
    if c20 then L144() else L145(x38);
  D22():
    deopt 71 [r23];
  D34():
    deopt 114 [jj5, depth12];
  D35():
    deopt 118 [b];
  L11(dx8):
    st xx = dx8;
    x15 = ld x;
    check L80() else D27();
  L29(dx34):
    st x = dx34;
    goto L14();
  L71():
    l4 = ld jj;
    storage_mode__ = ldf `storage.mode<-`;
    check L72() else D23();
  L76():
    dr6 = tryDispatchBuiltin.0("[[<-", l5, x10);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L78() else L77(x10, dr6);
  L77(x12, l7):
    depth4 = ld depth;
    check L79() else D26();
  L100():
    dx15 = getTryDispatchBuiltinValue(dr14);
    goto L17(dx15);
  L101():
    depth13 = force? depth12;
    __4 = ldf `[` in base;
    r34 = dyn __4(jj5, depth13);
    goto L17(r34);
  L102():
    b1 = force? b;
    checkMissing(b1);
    l11 = ld x;
    c12 = `is.object`(l11);
    if c12 then L103() else L104(b1, l11);
  L144():
    dr28 = tryDispatchBuiltin.1("[[", x38);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L146() else L145(dr28);
  L145(x40):
    j8 = ld j;
    check L147() else D55();
  D23():
    deopt 73 [r23, l4, r23];
  D26():
    deopt 82 [x12, l7, x10, depth4];
  D27():
    deopt 86 [x15];
  D55():
    deopt 195 [x40, j8];
  L18(dx18):
    st x = dx18;
    j2 = ld j;
    check L107() else D37();
  L72():
    r24 = dyn storage_mode__(l4, NULL, r23);
    check L73() else D24();
  L78():
    dx7 = getTryDispatchBuiltinValue(dr6);
    goto L11(dx7);
  L79():
    depth5 = force? depth4;
    ____ = ldf `[[<-` in base;
    r26 = dyn ____(l7, x10, depth5);
    goto L11(r26);
  L80():
    x16 = force? x15;
    checkMissing(x16);
    c7 = `is.object`(x16);
    if c7 then L81() else L82(x16);
  L103():
    dr16 = tryDispatchBuiltin.0("[[<-", l11, b1);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L105() else L104(b1, dr16);
  L104(b3, l13):
    j = ld j;
    check L106() else D36();
  L146():
    dx33 = getTryDispatchBuiltinValue(dr28);
    goto L29(dx33);
  L147():
    j9 = force? j8;
    checkMissing(j9);
    r56 = `+`(j9, 1);
    l21 = ld jj;
    c21 = `is.object`(l21);
    if c21 then L148() else L149(x40, r56, l21);
  D24():
    deopt 75 [r23, r24];
  D36():
    deopt 121 [b3, l13, b1, j];
  D37():
    deopt 125 [j2];
  L12(dx10):
    st x = dx10;
    goto L14();
  L30(x44, r60, dx36):
    st jj = dx36;
    __8 = ldf `[[` in base;
    r62 = dyn __8(x44, r60);
    goto L29(r62);
  L73():
    st jj = r24;
    goto L10();
  L81():
    dr8 = tryDispatchBuiltin.1("[[", x16);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L83() else L82(dr8);
  L82(x18):
    l8 = ld jj;
    c8 = `is.object`(l8);
    if c8 then L84() else L85(x18, 1, l8);
  L105():
    dx17 = getTryDispatchBuiltinValue(dr16);
    goto L18(dx17);
  L106():
    j1 = force? j;
    ____1 = ldf `[[<-` in base;
    r35 = dyn ____1(l13, b1, j1);
    goto L18(r35);
  L107():
    j3 = force? j2;
    checkMissing(j3);
    kk4 = ld kk;
    check L108() else D38();
  L148():
    dr30 = tryDispatchBuiltin.0("[<-", l21, r56);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L150() else L149(x40, r56, dr30);
  L149(x42, r58, l23):
    depth22 = ld depth;
    check L151() else D56();
  D38():
    deopt 126 [j3, kk4];
  D56():
    deopt 200 [x42, r58, l23, r56, depth22];
  L13(x22, r30, dx12):
    st jj = dx12;
    __2 = ldf `[[` in base;
    r32 = dyn __2(x22, r30);
    goto L12(r32);
  L83():
    dx9 = getTryDispatchBuiltinValue(dr8);
    goto L12(dx9);
  L84():
    dr10 = tryDispatchBuiltin.0("[<-", l8, 1);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L86() else L85(x18, 1, dr10);
  L85(x20, r28, l10):
    depth6 = ld depth;
    check L87() else D28();
  L108():
    kk5 = force? kk4;
    checkMissing(kk5);
    c13 = `is.object`(kk5);
    if c13 then L109() else L110(j3, kk5);
  L150():
    dx35 = getTryDispatchBuiltinValue(dr30);
    goto L30(x40, r56, dx35);
  L151():
    depth23 = force? depth22;
    ___3 = ldf `[<-` in base;
    r61 = dyn ___3(l23, r56, depth23);
    goto L30(x42, r58, r61);
  D28():
    deopt 92 [x20, r28, l10, 1, depth6];
  L19(j7, dx20):
    r37 = `<`(j7, dx20);
    c14 = `as.logical`(r37);
    if c14 then L113() else L20();
  L86():
    dx11 = getTryDispatchBuiltinValue(dr10);
    goto L13(x18, 1, dx11);
  L87():
    depth7 = force? depth6;
    ___1 = ldf `[<-` in base;
    r31 = dyn ___1(l10, 1, depth7);
    goto L13(x20, r28, r31);
  L109():
    dr18 = tryDispatchBuiltin.1("[", kk5);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L111() else L110(j3, dr18);
  L110(j5, kk7):
    depth14 = ld depth;
    check L112() else D39();
  D39():
    deopt 128 [j5, kk7, depth14];
  L20():
    depth16 = ld depth;
    check L116() else D40();
  L111():
    dx19 = getTryDispatchBuiltinValue(dr18);
    goto L19(j3, dx19);
  L112():
    depth15 = force? depth14;
    __5 = ldf `[` in base;
    r36 = dyn __5(kk7, depth15);
    goto L19(j5, r36);
  L113():
    goto L15();
  D40():
    deopt 136 [depth16];
  L116():
    depth17 = force? depth16;
    checkMissing(depth17);
    r39 = `-`(depth17, 1);
    st depth = r39;
    vapply = ldf vapply;
    check L117() else D41();
  D41():
    deopt 142 [];
  L117():
    p4 = prom<V +>{
      x25 = ld x;
      x26 = force? x25;
      checkMissing(x26);
      return x26;
    };
    p5 = prom<V +>{
      attr = ld attr;
      attr1 = force? attr;
      checkMissing(attr1);
      return attr1;
    };
    p6 = prom<V +>{
      numeric = ldf numeric;
      r42 = dyn numeric(1);
      return r42;
    };
    r44 = dyn vapply[, , , which](p4, p5, p6, "value");
    check L118() else D42();
  D42():
    deopt 148 [r44];
  L118():
    st vals = r44;
    sort_list = ldf `sort.list`;
    check L119() else D43();
  D43():
    deopt 151 [];
  L119():
    p7 = prom<V +>{
      vals = ld vals;
      vals1 = force? vals;
      checkMissing(vals1);
      return vals1;
    };
    r46 = dyn sort_list(p7);
    check L120() else D44();
  D44():
    deopt 153 [r46];
  L120():
    st iOrd = r46;
    agglo_FUN = ldf `agglo.FUN`;
    check L121() else D45();
  D45():
    deopt 156 [];
  L121():
    p8 = prom<V +>{
      vals2 = ld vals;
      vals3 = force? vals2;
      checkMissing(vals3);
      c15 = `is.object`(vals3);
      if c15 then L1() else L2(vals3);
    L0(dx22):
      return dx22;
    L1():
      dr20 = tryDispatchBuiltin.1("[", vals3);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L3() else L2(dr20);
    L2(vals5):
      iOrd = ld iOrd;
      iOrd1 = force? iOrd;
      __6 = ldf `[` in base;
      r47 = dyn __6(vals5, iOrd1);
      goto L0(r47);
    L3():
      dx21 = getTryDispatchBuiltinValue(dr20);
      goto L0(dx21);
    };
    r49 = dyn agglo_FUN(p8);
    check L122() else D46();
  D46():
    deopt 158 [r49];
  L122():
    l14 = ld x;
    attr__1 = ldf `attr<-`;
    check L123() else D47();
  D47():
    deopt 160 [r49, l14, r49];
  L123():
    r50 = dyn attr__1(l14, NULL, "value", r49);
    check L124() else D48();
  D48():
    deopt 163 [r49, r50];
  L124():
    st x = r50;
    x27 = ld x;
    check L125() else D49();
  D49():
    deopt 165 [x27];
  L125():
    x28 = force? x27;
    checkMissing(x28);
    c16 = `is.object`(x28);
    if c16 then L126() else L127(x28);
  L22(dx24):
    l15 = ld x;
    c17 = `is.object`(l15);
    if c17 then L130() else L131(dx24);
  L126():
    dr22 = tryDispatchBuiltin.1("[", x28);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L128() else L127(dr22);
  L127(x30):
    iOrd2 = ld iOrd;
    check L129() else D50();
  D50():
    deopt 167 [x30, iOrd2];
  L23(dx30):
    st x = dx30;
    goto L24();
  L128():
    dx23 = getTryDispatchBuiltinValue(dr22);
    goto L22(dx23);
  L129():
    iOrd3 = force? iOrd2;
    __7 = ldf `[` in base;
    r51 = dyn __7(x30, iOrd3);
    goto L22(r51);
  L130():
    dr24 = tryDispatchBuiltin.0("[<-", l15, dx24);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L132() else L131(dx24);
  L131(dx26):
    ___2 = ldf `[<-` in base;
    r52 = dyn ___2(l15, <missing>, dx24);
    goto L23(r52);
  L132():
    dx28 = getTryDispatchBuiltinValue(dr24);
    goto L23(dx28);
  }
}