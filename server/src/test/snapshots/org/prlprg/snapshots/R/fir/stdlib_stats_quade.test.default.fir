fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1369141247;
    st `quade.test.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1369141247(y, groups, blocks, `...`) {
  (reg y:*, reg groups:*, reg blocks:*, reg ddd:dots) -+> V { var y:*, var groups:*, var blocks:*, var `...`:dots?, reg deparse1:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg substitute:cls, reg r2:V, reg p:p(V +), reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg y1:*, reg y2:V, reg is_matrix:cls, reg r7:V, reg c:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg y3:*, reg y4:V, reg dim:cls, reg r10:V, reg factor:cls, reg _col:cls, reg d:*, reg d1:V, reg p1:p(V +), reg r12:V, reg p2:p(V +), reg r14:V, reg factor1:cls, reg _row:cls, reg d2:*, reg d3:V, reg p3:p(V +), reg r16:V, reg p4:p(V +), reg r18:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r20:V, reg r21:V, reg groups1:*, reg groups2:V, reg anyNA:cls, reg r22:V, reg c1:L, reg c2:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r23:V, reg c6:L, reg r24:V, reg blocks1:*, reg blocks2:V, reg anyNA1:cls, reg r25:V, reg c7:L, reg c8:V, reg c10:L, reg stop:cls, reg r26:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r28:V, reg r29:V, reg diff:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r30:V, reg r31:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r32:V, reg r33:V, reg y5:*, reg y6:V, reg length:cls, reg r34:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r35:V, reg r36:V, reg groups3:*, reg groups4:V, reg length1:cls, reg r37:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r38:V, reg r39:V, reg blocks3:*, reg blocks4:V, reg length2:cls, reg r40:V, reg c11:cls, reg r41:V, reg p5:p(V +), reg r43:V, reg r44:V, reg any:cls, reg r45:V, reg c12:L, reg stop1:cls, reg r46:V, reg paste0:cls, reg DNAME:*, reg DNAME1:V, reg p6:p(V +), reg deparse2:cls, reg sym10:cls, reg base10:cls, reg guard10:L, reg r49:V, reg r50:V, reg substitute1:cls, reg r51:V, reg p7:p(V +), reg r53:V, reg p8:p(V +), reg deparse3:cls, reg sym11:cls, reg base11:cls, reg guard11:L, reg r55:V, reg r56:V, reg substitute2:cls, reg r57:V, reg p9:p(V +), reg r59:V, reg p10:p(V +), reg r61:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r62:V, reg r63:V, reg table:cls, reg groups5:*, reg groups6:V, reg p11:p(V +), reg blocks5:*, reg blocks6:V, reg p12:p(V +), reg r66:V, reg r67:V, reg any1:cls, reg r68:V, reg c13:L, reg stop2:cls, reg r69:V, reg order:cls, reg groups7:*, reg groups8:V, reg p13:p(V +), reg r72:V, reg y7:*, reg y8:V, reg c14:L, reg y10:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ord:*, reg ord1:V, reg __:cls, reg r73:V, reg factor2:cls, reg groups9:*, reg groups10:V, reg c15:L, reg groups12:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg ord2:*, reg ord3:V, reg __1:cls, reg r74:V, reg p14:p(V +), reg r76:V, reg factor3:cls, reg blocks7:*, reg blocks8:V, reg c16:L, reg blocks10:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg ord4:*, reg ord5:V, reg __2:cls, reg r77:V, reg p15:p(V +), reg r79:V, reg nlevels:cls, reg groups13:*, reg groups14:V, reg p16:p(V +), reg r81:V, reg nlevels1:cls, reg blocks11:*, reg blocks12:V, reg p17:p(V +), reg r83:V, reg matrix:cls, reg unlist:cls, reg split:cls, reg sym13:cls, reg base13:cls, reg guard13:L, reg r84:V, reg r85:V, reg y11:*, reg y12:V, reg c17:cls, reg r86:V, reg p18:p(V +), reg blocks13:*, reg blocks14:V, reg p19:p(V +), reg r89:V, reg p20:p(V +), reg r91:V, reg p21:p(V +), reg k:*, reg k1:V, reg p22:p(V +), reg r94:V, reg y13:*, reg y14:V, reg c18:L, reg y16:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg complete_cases:cls, reg y17:*, reg y18:V, reg p23:p(V +), reg r96:V, reg __3:cls, reg r97:V, reg t:cls, reg apply:cls, reg y19:*, reg y20:V, reg p24:p(V +), reg rank:*, reg rank1:V, reg p25:p(V +), reg r100:V, reg p26:p(V +), reg r102:V, reg rank2:cls, reg apply1:cls, reg y21:*, reg y22:V, reg p27:p(V +), reg r104:cls, reg p28:p(V +), reg r106:V, reg p29:p(V +), reg r108:V, reg q:*, reg q1:V, reg r109:*, reg r110:V, reg k2:*, reg k3:V, reg r111:V, reg r112:V, reg r113:V, reg r114:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r115:V, reg r116:V, reg s:*, reg s1:V, reg r117:V, reg sum:cls, reg r118:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r119:V, reg r120:V, reg colSums:cls, reg s2:*, reg s3:V, reg p30:p(V +), reg r122:V, reg r123:V, reg sum1:cls, reg r124:V, reg b:*, reg b1:V, reg r125:V, reg A:*, reg A1:V, reg B:*, reg B1:V, reg r126:V, reg c19:L, reg sym16:cls, reg base16:cls, reg guard16:L, reg r127:V, reg r128:V, reg c20:cls, reg r129:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r130:V, reg r131:V, reg k4:*, reg k5:V, reg r132:V, reg r133:V, reg b2:*, reg b3:V, reg r134:V, reg r135:V, reg b4:*, reg b5:V, reg r137:V, reg B2:*, reg B3:V, reg r138:V, reg A2:*, reg A3:V, reg B4:*, reg B5:V, reg r139:V, reg r140:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r141:V, reg r142:V, reg k6:*, reg k7:V, reg r143:V, reg b6:*, reg b7:V, reg r144:V, reg k8:*, reg k9:V, reg r145:V, reg r146:V, reg c21:cls, reg r147:V, reg pf:cls, reg STATISTIC:*, reg STATISTIC1:V, reg p31:p(V +), reg PARAMETER:*, reg PARAMETER1:V, reg c22:L, reg PARAMETER3:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __4:cls, reg r149:V, reg p32:p(V +), reg PARAMETER4:*, reg PARAMETER5:V, reg c23:L, reg PARAMETER7:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg __5:cls, reg r151:V, reg p33:p(V +), reg r153:V, reg l:*, reg names__:cls, reg r154:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r155:V, reg r156:V, reg c24:cls, reg r157:V, reg l1:*, reg names__1:cls, reg r158:V, reg structure:cls, reg sym20:cls, reg base20:cls, reg guard20:L, reg r159:V, reg r160:V, reg STATISTIC2:*, reg STATISTIC3:V, reg PARAMETER8:*, reg PARAMETER9:V, reg PVAL:*, reg PVAL1:V, reg DNAME2:*, reg DNAME3:V, reg list:cls, reg r161:V, reg p34:p(V +), reg r163:V |
    mkenv;
    st y = y;
    st groups = groups;
    st blocks = blocks;
    st `...` = ddd;
    deparse1 = ldf deparse1;
    check L25() else D0();
  D0():
    deopt 1 [];
  L25():
    p = prom<V +>{
      sym = ldf substitute;
      base = ldf substitute in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      substitute = ldf substitute in base;
      r2 = dyn substitute(<sym y>);
      goto L0(r2);
    L2():
      r = dyn base(<sym y>);
      goto L0(r);
    };
    r4 = dyn deparse1(p);
    check L26() else D1();
  D1():
    deopt 3 [r4];
  L26():
    st DNAME = r4;
    sym1 = ldf `is.matrix`;
    base1 = ldf `is.matrix` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L27() else L28();
  L0(r6):
    c = `as.logical`(r6);
    if c then L31() else L1();
  L27():
    y1 = ld y;
    check L29() else D2();
  L28():
    r5 = dyn base1(<sym y>);
    goto L0(r5);
  D2():
    deopt 7 [y1];
  L1():
    sym3 = ldf anyNA;
    base3 = ldf anyNA in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L41() else L42();
  L3():
    nlevels = ldf nlevels;
    check L86() else D36();
  L29():
    y2 = force? y1;
    checkMissing(y2);
    is_matrix = ldf `is.matrix` in base;
    r7 = dyn is_matrix(y2);
    check L30() else D3();
  L31():
    sym2 = ldf dim;
    base2 = ldf dim in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L32() else L33();
  D3():
    deopt 10 [r7];
  D36():
    deopt 111 [];
  L2(r9):
    st d = r9;
    factor = ldf factor;
    check L36() else D6();
  L4(r21):
    c1 = `as.logical`(r21);
    if c1 then L5(c1) else L45();
  L30():
    goto L0(r7);
  L32():
    y3 = ld y;
    check L34() else D4();
  L33():
    r8 = dyn base2(<sym y>);
    goto L2(r8);
  L41():
    groups1 = ld groups;
    check L43() else D10();
  L42():
    r20 = dyn base3(<sym groups>);
    goto L4(r20);
  L86():
    p16 = prom<V +>{
      groups13 = ld groups;
      groups14 = force? groups13;
      checkMissing(groups14);
      return groups14;
    };
    r81 = dyn nlevels(p16);
    check L87() else D37();
  D4():
    deopt 13 [y3];
  D6():
    deopt 19 [];
  D10():
    deopt 30 [groups1];
  D37():
    deopt 113 [r81];
  L5(c2):
    c10 = `as.logical`(c2);
    if c10 then L51() else L7();
  L34():
    y4 = force? y3;
    checkMissing(y4);
    dim = ldf dim in base;
    r10 = dyn dim(y4);
    check L35() else D5();
  L36():
    p2 = prom<V +>{
      _col = ldf `.col`;
      p1 = prom<V +>{
        d = ld d;
        d1 = force? d;
        checkMissing(d1);
        return d1;
      };
      r12 = dyn _col(p1);
      return r12;
    };
    r14 = dyn factor(p2);
    check L37() else D7();
  L43():
    groups2 = force? groups1;
    checkMissing(groups2);
    anyNA = ldf anyNA in base;
    r22 = dyn anyNA(groups2);
    check L44() else D11();
  L45():
    sym4 = ldf anyNA;
    base4 = ldf anyNA in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L46() else L47();
  L87():
    st k = r81;
    nlevels1 = ldf nlevels;
    check L88() else D38();
  D5():
    deopt 16 [r10];
  D7():
    deopt 21 [r14];
  D11():
    deopt 33 [r22];
  D38():
    deopt 116 [];
  L6(c6, r24):
    c7 = `as.logical`(r24);
    c8 = `||`(c6, c7);
    goto L5(c8);
  L7():
    goto L8();
  L8():
    sym5 = ldf any;
    base5 = ldf any in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L55() else L56();
  L35():
    goto L2(r10);
  L37():
    st groups = r14;
    factor1 = ldf factor;
    check L38() else D8();
  L44():
    goto L4(r22);
  L46():
    blocks1 = ld blocks;
    check L48() else D12();
  L47():
    r23 = dyn base4(<sym blocks>);
    goto L6(c1, r23);
  L51():
    stop = ldf stop;
    check L52() else D14();
  L88():
    p17 = prom<V +>{
      blocks11 = ld blocks;
      blocks12 = force? blocks11;
      checkMissing(blocks12);
      return blocks12;
    };
    r83 = dyn nlevels1(p17);
    check L89() else D39();
  D8():
    deopt 24 [];
  D12():
    deopt 36 [c1, blocks1];
  D14():
    deopt 42 [];
  D39():
    deopt 118 [r83];
  L9(r29):
    c12 = `as.logical`(r29);
    if c12 then L60() else L10();
  L38():
    p4 = prom<V +>{
      _row = ldf `.row`;
      p3 = prom<V +>{
        d2 = ld d;
        d3 = force? d2;
        checkMissing(d3);
        return d3;
      };
      r16 = dyn _row(p3);
      return r16;
    };
    r18 = dyn factor1(p4);
    check L39() else D9();
  L48():
    blocks2 = force? blocks1;
    checkMissing(blocks2);
    anyNA1 = ldf anyNA in base;
    r25 = dyn anyNA1(blocks2);
    check L49() else D13();
  L52():
    r26 = dyn stop("NA's are not allowed in 'groups' or 'blocks'");
    check L53() else D15();
  L55():
    diff = ldf diff;
    check L57() else D16();
  L56():
    r28 = dyn base5(<lang `!=`(diff(c(length(y), length(groups), length(blocks))), 0)>);
    goto L9(r28);
  L89():
    st b = r83;
    matrix = ldf matrix;
    check L90() else D40();
  D9():
    deopt 26 [r18];
  D13():
    deopt 39 [c1, r25];
  D15():
    deopt 44 [r26];
  D16():
    deopt 50 [];
  D40():
    deopt 121 [];
  L10():
    goto L11();
  L11():
    paste0 = ldf paste0;
    check L64() else D21();
  L39():
    st blocks = r18;
    goto L3();
  L49():
    goto L6(c1, r25);
  L53():
    goto L8();
  L57():
    p5 = prom<V +>{
      sym6 = ldf c;
      base6 = ldf c in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L4() else L5();
    L0(r31):
      return r31;
    L4():
      sym7 = ldf length;
      base7 = ldf length in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L6() else L7();
    L5():
      r30 = dyn base6(<lang length(y)>, <lang length(groups)>, <lang length(blocks)>);
      goto L0(r30);
    L1(r33):
      sym8 = ldf length;
      base8 = ldf length in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L8() else L9();
    L6():
      y5 = ld y;
      y6 = force? y5;
      checkMissing(y6);
      length = ldf length in base;
      r34 = dyn length(y6);
      goto L1(r34);
    L7():
      r32 = dyn base7(<sym y>);
      goto L1(r32);
    L2(r36):
      sym9 = ldf length;
      base9 = ldf length in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L10() else L11();
    L8():
      groups3 = ld groups;
      groups4 = force? groups3;
      checkMissing(groups4);
      length1 = ldf length in base;
      r37 = dyn length1(groups4);
      goto L2(r37);
    L9():
      r35 = dyn base8(<sym groups>);
      goto L2(r35);
    L3(r39):
      c11 = ldf c in base;
      r41 = dyn c11(r33, r36, r39);
      goto L0(r41);
    L10():
      blocks3 = ld blocks;
      blocks4 = force? blocks3;
      checkMissing(blocks4);
      length2 = ldf length in base;
      r40 = dyn length2(blocks4);
      goto L3(r40);
    L11():
      r38 = dyn base9(<sym blocks>);
      goto L3(r38);
    };
    r43 = dyn diff(p5);
    check L58() else D17();
  L60():
    stop1 = ldf stop;
    check L61() else D19();
  L90():
    p21 = prom<V +>{
      unlist = ldf unlist;
      p20 = prom<V +>{
        split = ldf split;
        p18 = prom<V +>{
          sym13 = ldf c;
          base13 = ldf c in base;
          guard13 = `==`.4(sym13, base13);
          if guard13 then L1() else L2();
        L0(r85):
          return r85;
        L1():
          y11 = ld y;
          y12 = force? y11;
          checkMissing(y12);
          c17 = ldf c in base;
          r86 = dyn c17(y12);
          goto L0(r86);
        L2():
          r84 = dyn base13(<sym y>);
          goto L0(r84);
        };
        p19 = prom<V +>{
          blocks13 = ld blocks;
          blocks14 = force? blocks13;
          checkMissing(blocks14);
          return blocks14;
        };
        r89 = dyn split(p18, p19);
        return r89;
      };
      r91 = dyn unlist(p20);
      return r91;
    };
    p22 = prom<V +>{
      k = ld k;
      k1 = force? k;
      checkMissing(k1);
      return k1;
    };
    r94 = dyn matrix[, ncol, byrow](p21, p22, TRUE);
    check L91() else D41();
  D17():
    deopt 52 [r43];
  D19():
    deopt 58 [];
  D21():
    deopt 64 [];
  D41():
    deopt 127 [r94];
  L58():
    r44 = `!=`(r43, 0);
    any = ldf any in base;
    r45 = dyn any(r44);
    check L59() else D18();
  L61():
    r46 = dyn stop1("'y', 'groups' and 'blocks' must have the same length");
    check L62() else D20();
  L64():
    p6 = prom<V +>{
      DNAME = ld DNAME;
      DNAME1 = force? DNAME;
      checkMissing(DNAME1);
      return DNAME1;
    };
    p8 = prom<V +>{
      deparse2 = ldf deparse1;
      p7 = prom<V +>{
        sym10 = ldf substitute;
        base10 = ldf substitute in base;
        guard10 = `==`.4(sym10, base10);
        if guard10 then L1() else L2();
      L0(r50):
        return r50;
      L1():
        substitute1 = ldf substitute in base;
        r51 = dyn substitute1(<sym groups>);
        goto L0(r51);
      L2():
        r49 = dyn base10(<sym groups>);
        goto L0(r49);
      };
      r53 = dyn deparse2(p7);
      return r53;
    };
    p10 = prom<V +>{
      deparse3 = ldf deparse1;
      p9 = prom<V +>{
        sym11 = ldf substitute;
        base11 = ldf substitute in base;
        guard11 = `==`.4(sym11, base11);
        if guard11 then L1() else L2();
      L0(r56):
        return r56;
      L1():
        substitute2 = ldf substitute in base;
        r57 = dyn substitute2(<sym blocks>);
        goto L0(r57);
      L2():
        r55 = dyn base11(<sym blocks>);
        goto L0(r55);
      };
      r59 = dyn deparse3(p9);
      return r59;
    };
    r61 = dyn paste0(p6, ", ", p8, " and ", p10);
    check L65() else D22();
  L91():
    st y = r94;
    y13 = ld y;
    check L92() else D42();
  D18():
    deopt 56 [r45];
  D20():
    deopt 60 [r46];
  D22():
    deopt 70 [r61];
  D42():
    deopt 129 [y13];
  L59():
    goto L9(r45);
  L62():
    goto L11();
  L65():
    st DNAME = r61;
    sym12 = ldf any;
    base12 = ldf any in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L66() else L67();
  L92():
    y14 = force? y13;
    checkMissing(y14);
    c18 = `is.object`(y14);
    if c18 then L93() else L94(y14);
  L12(r63):
    c13 = `as.logical`(r63);
    if c13 then L71() else L13();
  L16(dx7):
    st y = dx7;
    t = ldf t;
    check L98() else D45();
  L66():
    table = ldf table;
    check L68() else D23();
  L67():
    r62 = dyn base12(<lang `!=`(table(groups, blocks), 1.0)>);
    goto L12(r62);
  L93():
    dr6 = tryDispatchBuiltin.1("[", y14);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L95() else L94(dr6);
  L94(y16):
    complete_cases = ldf `complete.cases`;
    check L96() else D43();
  D23():
    deopt 75 [];
  D43():
    deopt 132 [y16];
  D45():
    deopt 140 [];
  L13():
    goto L14();
  L14():
    order = ldf order;
    check L75() else D28();
  L68():
    p11 = prom<V +>{
      groups5 = ld groups;
      groups6 = force? groups5;
      checkMissing(groups6);
      return groups6;
    };
    p12 = prom<V +>{
      blocks5 = ld blocks;
      blocks6 = force? blocks5;
      checkMissing(blocks6);
      return blocks6;
    };
    r66 = dyn table(p11, p12);
    check L69() else D24();
  L71():
    stop2 = ldf stop;
    check L72() else D26();
  L95():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L16(dx6);
  L96():
    p23 = prom<V +>{
      y17 = ld y;
      y18 = force? y17;
      checkMissing(y18);
      return y18;
    };
    r96 = dyn complete_cases(p23);
    check L97() else D44();
  L98():
    p26 = prom<V +>{
      apply = ldf apply;
      p24 = prom<V +>{
        y19 = ld y;
        y20 = force? y19;
        checkMissing(y20);
        return y20;
      };
      p25 = prom<V +>{
        rank = ld rank;
        rank1 = force? rank;
        checkMissing(rank1);
        return rank1;
      };
      r100 = dyn apply(p24, 1, p25);
      return r100;
    };
    r102 = dyn t(p26);
    check L99() else D46();
  D24():
    deopt 78 [r66];
  D26():
    deopt 84 [];
  D28():
    deopt 90 [];
  D44():
    deopt 134 [y16, r96];
  D46():
    deopt 142 [r102];
  L69():
    r67 = `!=`(r66, 1.0);
    any1 = ldf any in base;
    r68 = dyn any1(r67);
    check L70() else D25();
  L72():
    r69 = dyn stop2("not an unreplicated complete block design");
    check L73() else D27();
  L75():
    p13 = prom<V +>{
      groups7 = ld groups;
      groups8 = force? groups7;
      checkMissing(groups8);
      return groups8;
    };
    r72 = dyn order(p13);
    check L76() else D29();
  L97():
    __3 = ldf `[` in base;
    r97 = dyn __3(y14, r96, <missing>);
    goto L16(r97);
  L99():
    st r = r102;
    rank2 = ldf rank;
    check L100() else D47();
  D25():
    deopt 82 [r68];
  D27():
    deopt 86 [r69];
  D29():
    deopt 92 [r72];
  D47():
    deopt 145 [];
  L70():
    goto L12(r68);
  L73():
    goto L14();
  L76():
    st ord = r72;
    y7 = ld y;
    check L77() else D30();
  L100():
    p29 = prom<V +>{
      apply1 = ldf apply;
      p27 = prom<V +>{
        y21 = ld y;
        y22 = force? y21;
        checkMissing(y22);
        return y22;
      };
      p28 = prom<V +>{
        r104 = clos inner883694641;
        return r104;
      };
      r106 = dyn apply1(p27, 1.0, p28);
      return r106;
    };
    r108 = dyn rank2(p29);
    check L101() else D48();
  D30():
    deopt 94 [y7];
  D48():
    deopt 147 [r108];
  L77():
    y8 = force? y7;
    checkMissing(y8);
    c14 = `is.object`(y8);
    if c14 then L78() else L79(y8);
  L101():
    st q = r108;
    q = ld q;
    check L102() else D49();
  D49():
    deopt 149 [q];
  L15(dx1):
    st y = dx1;
    factor2 = ldf factor;
    check L82() else D32();
  L78():
    dr = tryDispatchBuiltin.1("[", y8);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L80() else L79(dr);
  L79(y10):
    ord = ld ord;
    check L81() else D31();
  L102():
    q1 = force? q;
    checkMissing(q1);
    r109 = ld r;
    check L103() else D50();
  D31():
    deopt 96 [y10, ord];
  D32():
    deopt 101 [];
  D50():
    deopt 150 [q1, r109];
  L80():
    dx = getTryDispatchBuiltinValue(dr);
    goto L15(dx);
  L81():
    ord1 = force? ord;
    __ = ldf `[` in base;
    r73 = dyn __(y10, ord1);
    goto L15(r73);
  L82():
    p14 = prom<V +>{
      groups9 = ld groups;
      groups10 = force? groups9;
      checkMissing(groups10);
      c15 = `is.object`(groups10);
      if c15 then L1() else L2(groups10);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", groups10);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(groups12):
      ord2 = ld ord;
      ord3 = force? ord2;
      __1 = ldf `[` in base;
      r74 = dyn __1(groups12, ord3);
      goto L0(r74);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r76 = dyn factor2(p14);
    check L83() else D33();
  L103():
    r110 = force? r109;
    checkMissing(r110);
    k2 = ld k;
    check L104() else D51();
  D33():
    deopt 103 [r76];
  D51():
    deopt 151 [q1, r110, k2];
  L83():
    st groups = r76;
    factor3 = ldf factor;
    check L84() else D34();
  L104():
    k3 = force? k2;
    checkMissing(k3);
    r111 = `+`(k3, 1.0);
    r112 = `/`(r111, 2.0);
    r113 = `-`(r110, r112);
    r114 = `*`(q1, r113);
    st s = r114;
    sym14 = ldf sum;
    base14 = ldf sum in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L105() else L106();
  D34():
    deopt 106 [];
  L17(r116):
    st A = r116;
    sym15 = ldf sum;
    base15 = ldf sum in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L109() else L110();
  L84():
    p15 = prom<V +>{
      blocks7 = ld blocks;
      blocks8 = force? blocks7;
      checkMissing(blocks8);
      c16 = `is.object`(blocks8);
      if c16 then L1() else L2(blocks8);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[", blocks8);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(blocks10):
      ord4 = ld ord;
      ord5 = force? ord4;
      __2 = ldf `[` in base;
      r77 = dyn __2(blocks10, ord5);
      goto L0(r77);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r79 = dyn factor3(p15);
    check L85() else D35();
  L105():
    s = ld s;
    check L107() else D52();
  L106():
    r115 = dyn base14(<lang `^`(s, 2.0)>);
    goto L17(r115);
  D35():
    deopt 108 [r79];
  D52():
    deopt 162 [s];
  L18(r120):
    b = ld b;
    check L114() else D57();
  L85():
    st blocks = r79;
    goto L3();
  L107():
    s1 = force? s;
    checkMissing(s1);
    r117 = `^`(s1, 2.0);
    sum = ldf sum in base;
    r118 = dyn sum(r117);
    check L108() else D53();
  L109():
    colSums = ldf colSums;
    check L111() else D54();
  L110():
    r119 = dyn base15(<lang `^`(colSums(s), 2.0)>);
    goto L18(r119);
  D53():
    deopt 167 [r118];
  D54():
    deopt 172 [];
  D57():
    deopt 178 [r120, b];
  L108():
    goto L17(r118);
  L111():
    p30 = prom<V +>{
      s2 = ld s;
      s3 = force? s2;
      checkMissing(s3);
      return s3;
    };
    r122 = dyn colSums(p30);
    check L112() else D55();
  L114():
    b1 = force? b;
    checkMissing(b1);
    r125 = `/`(r120, b1);
    st B = r125;
    A = ld A;
    check L115() else D58();
  D55():
    deopt 174 [r122];
  D58():
    deopt 182 [A];
  L112():
    r123 = `^`(r122, 2.0);
    sum1 = ldf sum in base;
    r124 = dyn sum1(r123);
    check L113() else D56();
  L115():
    A1 = force? A;
    checkMissing(A1);
    B = ld B;
    check L116() else D59();
  D56():
    deopt 178 [r124];
  D59():
    deopt 183 [A1, B];
  L113():
    goto L18(r124);
  L116():
    B1 = force? B;
    checkMissing(B1);
    r126 = `==`(A1, B1);
    c19 = `as.logical`(r126);
    if c19 then L117() else L19();
  L19():
    b4 = ld b;
    check L126() else D63();
  L22():
    l = ld STATISTIC;
    names__ = ldf `names<-`;
    check L138() else D73();
  L117():
    st STATISTIC = NA_REAL;
    sym16 = ldf c;
    base16 = ldf c in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L118() else L119();
  D63():
    deopt 207 [b4];
  D73():
    deopt 247 ["Quade F", l, "Quade F"];
  L20(r128):
    st PARAMETER = r128;
    sym17 = ldf gamma;
    base17 = ldf gamma in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L121() else L122();
  L118():
    c20 = ldf c in base;
    r129 = dyn c20(NA_LGL, NA_LGL);
    check L120() else D60();
  L119():
    r127 = dyn base16(NA_LGL, NA_LGL);
    goto L20(r127);
  L126():
    b5 = force? b4;
    checkMissing(b5);
    r137 = `-`(b5, 1.0);
    B2 = ld B;
    check L127() else D64();
  L138():
    r154 = dyn names__(l, NULL, "Quade F");
    check L139() else D74();
  D60():
    deopt 194 [r129];
  D64():
    deopt 210 [r137, B2];
  D74():
    deopt 249 ["Quade F", r154];
  L21(r131):
    b2 = ld b;
    check L124() else D62();
  L120():
    goto L20(r129);
  L121():
    k4 = ld k;
    check L123() else D61();
  L122():
    r130 = dyn base17(<lang `+`(k, 1.0)>);
    goto L21(r130);
  L127():
    B3 = force? B2;
    checkMissing(B3);
    r138 = `*`(r137, B3);
    A2 = ld A;
    check L128() else D65();
  L139():
    st STATISTIC = r154;
    sym19 = ldf c;
    base19 = ldf c in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L140() else L141();
  D61():
    deopt 197 [k4];
  D62():
    deopt 202 [r131, 1.0, b2];
  D65():
    deopt 212 [r138, A2];
  L24(r156):
    l1 = ld PARAMETER;
    names__1 = ldf `names<-`;
    check L143() else D76();
  L123():
    k5 = force? k4;
    checkMissing(k5);
    r132 = `+`(k5, 1.0);
    r133 = gamma(r132);
    goto L21(r133);
  L124():
    b3 = force? b2;
    checkMissing(b3);
    r134 = `-`(1.0, b3);
    r135 = `^`(r131, r134);
    st PVAL = r135;
    goto L22();
  L128():
    A3 = force? A2;
    checkMissing(A3);
    B4 = ld B;
    check L129() else D66();
  L140():
    c24 = ldf c in base;
    r157 = dyn c24("num df", "denom df");
    check L142() else D75();
  L141():
    r155 = dyn base19("num df", "denom df");
    goto L24(r155);
  D66():
    deopt 213 [r138, A3, B4];
  D75():
    deopt 256 [r157];
  D76():
    deopt 258 [r156, l1, r156];
  L129():
    B5 = force? B4;
    checkMissing(B5);
    r139 = `-`(A3, B5);
    r140 = `/`(r138, r139);
    st STATISTIC = r140;
    sym18 = ldf c;
    base18 = ldf c in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L130() else L131();
  L142():
    goto L24(r157);
  L143():
    r158 = dyn names__1(l1, NULL, r156);
    check L144() else D77();
  D77():
    deopt 260 [r156, r158];
  L23(r142):
    st PARAMETER = r142;
    pf = ldf pf;
    check L136() else D71();
  L130():
    k6 = ld k;
    check L132() else D67();
  L131():
    r141 = dyn base18(<lang `-`(k, 1.0)>, <lang `*`(`(`(`-`(b, 1.0)), `(`(`-`(k, 1.0)))>);
    goto L23(r141);
  L144():
    st PARAMETER = r158;
    structure = ldf structure;
    check L145() else D78();
  D67():
    deopt 220 [k6];
  D71():
    deopt 236 [];
  D78():
    deopt 263 [];
  L132():
    k7 = force? k6;
    checkMissing(k7);
    r143 = `-`(k7, 1.0);
    b6 = ld b;
    check L133() else D68();
  L136():
    p31 = prom<V +>{
      STATISTIC = ld STATISTIC;
      STATISTIC1 = force? STATISTIC;
      checkMissing(STATISTIC1);
      return STATISTIC1;
    };
    p32 = prom<V +>{
      PARAMETER = ld PARAMETER;
      PARAMETER1 = force? PARAMETER;
      checkMissing(PARAMETER1);
      c22 = `is.object`(PARAMETER1);
      if c22 then L1() else L2(PARAMETER1);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("[", PARAMETER1);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(PARAMETER3):
      __4 = ldf `[` in base;
      r149 = dyn __4(PARAMETER3, 1);
      goto L0(r149);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    p33 = prom<V +>{
      PARAMETER4 = ld PARAMETER;
      PARAMETER5 = force? PARAMETER4;
      checkMissing(PARAMETER5);
      c23 = `is.object`(PARAMETER5);
      if c23 then L1() else L2(PARAMETER5);
    L0(dx11):
      return dx11;
    L1():
      dr10 = tryDispatchBuiltin.1("[", PARAMETER5);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(PARAMETER7):
      __5 = ldf `[` in base;
      r151 = dyn __5(PARAMETER7, 2);
      goto L0(r151);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx10);
    };
    r153 = dyn pf[, , , `lower.tail`](p31, p32, p33, FALSE);
    check L137() else D72();
  L145():
    p34 = prom<V +>{
      sym20 = ldf list;
      base20 = ldf list in base;
      guard20 = `==`.4(sym20, base20);
      if guard20 then L1() else L2();
    L0(r160):
      return r160;
    L1():
      STATISTIC2 = ld STATISTIC;
      STATISTIC3 = force? STATISTIC2;
      checkMissing(STATISTIC3);
      PARAMETER8 = ld PARAMETER;
      PARAMETER9 = force? PARAMETER8;
      checkMissing(PARAMETER9);
      PVAL = ld PVAL;
      PVAL1 = force? PVAL;
      checkMissing(PVAL1);
      DNAME2 = ld DNAME;
      DNAME3 = force? DNAME2;
      checkMissing(DNAME3);
      list = ldf list in base;
      r161 = dyn list(STATISTIC3, PARAMETER9, PVAL1, "Quade test", DNAME3);
      goto L0(r161);
    L2():
      r159 = dyn base20[statistic, parameter, `p.value`, method, `data.name`](<sym STATISTIC>, <sym PARAMETER>, <sym PVAL>, "Quade test", <sym DNAME>);
      goto L0(r159);
    };
    r163 = dyn structure[, class](p34, "htest");
    check L146() else D79();
  D68():
    deopt 224 [b6];
  D72():
    deopt 242 [r153];
  D79():
    deopt 267 [r163];
  L133():
    b7 = force? b6;
    checkMissing(b7);
    r144 = `-`(b7, 1.0);
    k8 = ld k;
    check L134() else D69();
  L137():
    st PVAL = r153;
    goto L22();
  L146():
    popenv;
    return r163;
  D69():
    deopt 227 [r144, k8];
  L134():
    k9 = force? k8;
    checkMissing(k9);
    r145 = `-`(k9, 1.0);
    r146 = `*`(r144, r145);
    c21 = ldf c in base;
    r147 = dyn c21(r143, r146);
    check L135() else D70();
  D70():
    deopt 233 [r147];
  L135():
    goto L23(r147);
  }
}
fun inner883694641(u) {
  (reg u:*) -+> V { var u:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg u1:*, reg u2:V, reg max:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg r7:V, reg u3:*, reg u4:V, reg min:cls, reg r8:V, reg r9:V |
    mkenv;
    st u = u;
    sym = ldf max;
    base = ldf max in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    sym1 = ldf min;
    base1 = ldf min in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L6() else L7();
  L2():
    u1 = ld u;
    check L4() else D0();
  L3():
    r = dyn base(<sym u>);
    goto L0(r);
  D0():
    deopt 2 [u1];
  L1(r6, r7):
    r9 = `-`(r6, r7);
    popenv;
    return r9;
  L4():
    u2 = force? u1;
    checkMissing(u2);
    max = ldf max in base;
    r2 = dyn max(u2);
    check L5() else D1();
  L6():
    u3 = ld u;
    check L8() else D2();
  L7():
    r5 = dyn base1(<sym u>);
    goto L1(r1, r5);
  D1():
    deopt 5 [r2];
  D2():
    deopt 7 [r1, u3];
  L5():
    goto L0(r2);
  L8():
    u4 = force? u3;
    checkMissing(u4);
    min = ldf min in base;
    r8 = dyn min(u4);
    check L9() else D3();
  D3():
    deopt 10 [r1, r8];
  L9():
    goto L1(r1, r8);
  }
}