fun main() {
  () -+> V { reg r:cls, reg oneway_test:cls, reg __:cls, reg r1:V, reg p:p(V +), reg sleep:*, reg sleep1:V, reg p1:p(V +), reg r4:V, reg oneway_test1:cls, reg __1:cls, reg r5:V, reg p2:p(V +), reg sleep2:*, reg sleep3:V, reg p3:p(V +), reg r8:V, reg anova:cls, reg lm:cls, reg __2:cls, reg r9:V, reg p4:p(V +), reg sleep4:*, reg sleep5:V, reg p5:p(V +), reg r12:V, reg p6:p(V +), reg r14:V |
    mkenv;
    r = clos inner2727059896;
    st `oneway.test` = r;
    oneway_test = ldf `oneway.test`;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      __ = ldf `~` in base;
      r1 = dyn __(<sym extra>, <sym group>);
      return r1;
    };
    p1 = prom<V +>{
      sleep = ld sleep;
      sleep1 = force? sleep;
      checkMissing(sleep1);
      return sleep1;
    };
    r4 = dyn oneway_test[, data](p, p1);
    check L1() else D1();
  D1():
    deopt 8 [r4];
  L1():
    oneway_test1 = ldf `oneway.test`;
    check L2() else D2();
  D2():
    deopt 10 [];
  L2():
    p2 = prom<V +>{
      __1 = ldf `~` in base;
      r5 = dyn __1(<sym extra>, <sym group>);
      return r5;
    };
    p3 = prom<V +>{
      sleep2 = ld sleep;
      sleep3 = force? sleep2;
      checkMissing(sleep3);
      return sleep3;
    };
    r8 = dyn oneway_test1[, data, `var.equal`](p2, p3, TRUE);
    check L3() else D3();
  D3():
    deopt 16 [r8];
  L3():
    anova = ldf anova;
    check L4() else D4();
  D4():
    deopt 18 [];
  L4():
    p6 = prom<V +>{
      lm = ldf lm;
      p4 = prom<V +>{
        __2 = ldf `~` in base;
        r9 = dyn __2(<sym extra>, <sym group>);
        return r9;
      };
      p5 = prom<V +>{
        sleep4 = ld sleep;
        sleep5 = force? sleep4;
        checkMissing(sleep5);
        return sleep5;
      };
      r12 = dyn lm[, data](p4, p5);
      return r12;
    };
    r14 = dyn anova(p6);
    check L5() else D5();
  D5():
    deopt 20 [r14];
  L5():
    popenv;
    return r14;
  }
}
fun inner2727059896(formula, data, subset, `na.action`, `var.equal`) {
  (reg formula:*, reg data:*, reg subset:*, reg na_action:*, reg var_equal:*) -+> V { var formula:*, var data:*, var subset:*, var `na.action`:*, var `var.equal`:*, reg var_equal_isMissing:L, reg var_equal_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg c:L, reg c1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg c5:L, reg r4:V, reg formula1:*, reg formula2:V, reg length:cls, reg r5:V, reg r6:V, reg c6:L, reg c7:V, reg c9:L, reg stop:cls, reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg formula3:*, reg formula4:V, reg as_character:cls, reg r11:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r12:V, reg r13:V, reg dp:*, reg dp1:V, reg length1:cls, reg r14:V, reg r15:V, reg c10:L, reg stop1:cls, reg r16:V, reg paste:cls, reg dp2:*, reg dp3:V, reg c11:L, reg dp5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r18:V, reg p:p(V +), reg dp6:*, reg dp7:V, reg c12:L, reg dp9:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r20:V, reg p1:p(V +), reg r22:V, reg match_call:cls, reg r23:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r24:V, reg r25:V, reg eval:cls, reg m:*, reg m1:V, reg c13:L, reg m3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r26:V, reg p2:p(V +), reg parent_frame:cls, reg r28:V, reg p3:p(V +), reg r30:V, reg is_matrix:cls, reg r31:V, reg c14:L, reg as_data_frame:cls, reg data1:*, reg data2:V, reg p4:p(V +), reg r33:V, reg l:*, reg c15:L, reg r35:V, reg l2:*, reg dr6:V, reg dc3:L, reg dx6:V, reg r37:V, reg dx7:V, reg r38:V, reg l3:*, reg c16:L, reg r41:dots, reg l5:*, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r44:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r45:V, reg r46:V, reg quote:cls, reg r47:V, reg l6:*, reg c17:L, reg r49:V, reg l8:*, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg ____:cls, reg r52:V, reg eval1:cls, reg m4:*, reg m5:V, reg p5:p(V +), reg parent_frame1:cls, reg r54:V, reg p6:p(V +), reg r56:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r57:V, reg r58:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r59:V, reg r60:V, reg mf:*, reg mf1:V, reg attr:cls, reg r61:V, reg attr1:cls, reg r62:V, reg mf2:*, reg mf3:V, reg c18:L, reg mf5:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg response:*, reg response1:V, reg __2:cls, reg r63:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r64:V, reg r65:V, reg mf6:*, reg mf7:V, reg c19:L, reg mf9:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg response2:*, reg response3:V, reg r66:V, reg __3:cls, reg r67:V, reg length2:cls, reg r68:V, reg r69:V, reg c20:L, reg factor:cls, reg do_call:cls, reg mf10:*, reg mf11:V, reg c21:L, reg mf13:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg response4:*, reg response5:V, reg r70:V, reg __4:cls, reg r71:V, reg p7:p(V +), reg r73:V, reg p8:p(V +), reg r75:V, reg factor1:cls, reg mf14:*, reg mf15:V, reg c22:L, reg mf17:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg response6:*, reg response7:V, reg r77:V, reg __5:cls, reg r78:V, reg p9:p(V +), reg r80:V, reg nlevels:cls, reg g:*, reg g1:V, reg p10:p(V +), reg r82:V, reg k:*, reg k1:V, reg r83:V, reg c23:L, reg stop2:cls, reg r84:V, reg tapply:cls, reg y:*, reg y1:V, reg p11:p(V +), reg g2:*, reg g3:V, reg p12:p(V +), reg length3:*, reg length4:V, reg p13:p(V +), reg r89:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r90:V, reg r91:V, reg n_i:*, reg n_i1:V, reg r92:V, reg any:cls, reg r93:V, reg c24:L, reg stop3:cls, reg r94:V, reg tapply1:cls, reg y2:*, reg y3:V, reg p14:p(V +), reg g4:*, reg g5:V, reg p15:p(V +), reg mean:*, reg mean1:V, reg p16:p(V +), reg r99:V, reg tapply2:cls, reg y4:*, reg y5:V, reg p17:p(V +), reg g6:*, reg g7:V, reg p18:p(V +), reg var:*, reg var1:V, reg p19:p(V +), reg r103:V, reg n_i2:*, reg n_i3:V, reg v_i:*, reg v_i1:V, reg r104:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r105:V, reg r106:V, reg w_i:*, reg w_i1:V, reg sum:cls, reg r107:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r108:V, reg r109:V, reg w_i2:*, reg w_i3:V, reg sum_w_i:*, reg sum_w_i1:V, reg r110:V, reg r111:V, reg r112:V, reg n_i4:*, reg n_i5:V, reg r113:V, reg r114:V, reg sum1:cls, reg r115:V, reg k2:*, reg k3:V, reg r116:V, reg r117:V, reg r118:V, reg var_equal1:*, reg var_equal2:V, reg c25:L, reg sym12:cls, reg base12:cls, reg guard12:L, reg r119:V, reg r120:V, reg n_i6:*, reg n_i7:V, reg sum2:cls, reg r121:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r122:V, reg r123:V, reg n_i8:*, reg n_i9:V, reg m_i:*, reg m_i1:V, reg mean2:cls, reg y6:*, reg y7:V, reg p20:p(V +), reg r125:V, reg r126:V, reg r127:V, reg r128:V, reg sum3:cls, reg r129:V, reg k4:*, reg k5:V, reg r130:V, reg r131:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r134:V, reg r135:V, reg r136:V, reg n_i10:*, reg n_i11:V, reg r137:V, reg v_i2:*, reg v_i3:V, reg r138:V, reg sum4:cls, reg r139:V, reg n:*, reg n1:V, reg k6:*, reg k7:V, reg r140:V, reg r141:V, reg r142:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r143:V, reg r144:V, reg k8:*, reg k9:V, reg r145:V, reg n2:*, reg n3:V, reg k10:*, reg k11:V, reg r146:V, reg c26:cls, reg r147:V, reg pf:cls, reg STATISTIC:*, reg STATISTIC1:V, reg p21:p(V +), reg k12:*, reg k13:V, reg r149:V, reg p22:p(V +), reg n4:*, reg n5:V, reg k14:*, reg k15:V, reg r151:V, reg p23:p(V +), reg r153:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r155:V, reg r156:V, reg w_i4:*, reg w_i5:V, reg m_i2:*, reg m_i3:V, reg r157:V, reg sum5:cls, reg r158:V, reg sum_w_i2:*, reg sum_w_i3:V, reg r159:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r160:V, reg r161:V, reg w_i6:*, reg w_i7:V, reg m_i4:*, reg m_i5:V, reg m6:*, reg m7:V, reg r162:V, reg r163:V, reg r164:V, reg sum6:cls, reg r165:V, reg k16:*, reg k17:V, reg r166:V, reg k18:*, reg k19:V, reg r167:V, reg r168:V, reg tmp:*, reg tmp1:V, reg r169:V, reg r170:V, reg r171:V, reg r172:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r173:V, reg r174:V, reg k20:*, reg k21:V, reg r175:V, reg tmp2:*, reg tmp3:V, reg r176:V, reg r177:V, reg c27:cls, reg r178:V, reg pf1:cls, reg STATISTIC2:*, reg STATISTIC3:V, reg p24:p(V +), reg k22:*, reg k23:V, reg r180:V, reg p25:p(V +), reg tmp4:*, reg tmp5:V, reg r182:V, reg r183:V, reg p26:p(V +), reg r185:V, reg paste1:cls, reg METHOD:*, reg METHOD1:V, reg p27:p(V +), reg r187:V, reg l9:*, reg names__:cls, reg r188:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r189:V, reg r190:V, reg c28:cls, reg r191:V, reg l10:*, reg names__1:cls, reg r192:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r193:V, reg r194:V, reg STATISTIC4:*, reg STATISTIC5:V, reg PARAMETER:*, reg PARAMETER1:V, reg PVAL:*, reg PVAL1:V, reg METHOD2:*, reg METHOD3:V, reg DNAME:*, reg DNAME1:V, reg list:cls, reg r195:V, reg l11:*, reg class__:cls, reg r196:V, reg RVAL:*, reg RVAL1:V |
    mkenv;
    st formula = formula;
    st data = data;
    st subset = subset;
    st `na.action` = na_action;
    var_equal_isMissing = missing.0(var_equal);
    if var_equal_isMissing then L0(FALSE) else L0(var_equal);
  L0(var_equal_orDefault):
    st `var.equal` = var_equal_orDefault;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L40() else L41();
  L1(r1):
    c = `as.logical`(r1);
    if c then L2(c) else L42();
  L40():
    missing = ldf missing in base;
    r2 = dyn missing(<sym formula>);
    goto L1(r2);
  L41():
    r = dyn base(<sym formula>);
    goto L1(r);
  L2(c1):
    c9 = `as.logical`(c1);
    if c9 then L48() else L4();
  L42():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L43() else L44();
  L3(c5, r4):
    r6 = `!=`(r4, 3);
    c6 = `as.logical`(r6);
    c7 = `||`(c5, c6);
    goto L2(c7);
  L4():
    goto L5();
  L5():
    sym2 = ldf `as.character`;
    base2 = ldf `as.character` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L52() else L53();
  L43():
    formula1 = ld formula;
    check L45() else D0();
  L44():
    r3 = dyn base1(<sym formula>);
    goto L3(c, r3);
  L48():
    stop = ldf stop;
    check L49() else D2();
  D0():
    deopt 5 [c, formula1];
  D2():
    deopt 13 [];
  L6(r10):
    st dp = r10;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L56() else L57();
  L45():
    formula2 = force? formula1;
    checkMissing(formula2);
    length = ldf length in base;
    r5 = dyn length(formula2);
    check L46() else D1();
  L49():
    r7 = dyn stop("'formula' missing or incorrect");
    check L50() else D3();
  L52():
    formula3 = ld formula;
    check L54() else D4();
  L53():
    r9 = dyn base2(<sym formula>);
    goto L6(r9);
  D1():
    deopt 8 [c, r5];
  D3():
    deopt 15 [r7];
  D4():
    deopt 20 [formula3];
  L7(r13):
    r15 = `!=`(r13, 3);
    c10 = `as.logical`(r15);
    if c10 then L60() else L8();
  L46():
    goto L3(c, r5);
  L50():
    goto L5();
  L54():
    formula4 = force? formula3;
    checkMissing(formula4);
    as_character = ldf `as.character` in base;
    r11 = dyn as_character(formula4);
    check L55() else D5();
  L56():
    dp = ld dp;
    check L58() else D6();
  L57():
    r12 = dyn base3(<sym dp>);
    goto L7(r12);
  D5():
    deopt 23 [r11];
  D6():
    deopt 27 [dp];
  L8():
    goto L9();
  L9():
    paste = ldf paste;
    check L64() else D10();
  L55():
    goto L6(r11);
  L58():
    dp1 = force? dp;
    checkMissing(dp1);
    length1 = ldf length in base;
    r14 = dyn length1(dp1);
    check L59() else D7();
  L60():
    stop1 = ldf stop;
    check L61() else D8();
  D7():
    deopt 30 [r14];
  D8():
    deopt 34 [];
  D10():
    deopt 40 [];
  L59():
    goto L7(r14);
  L61():
    r16 = dyn stop1("a two-sided formula is required");
    check L62() else D9();
  L64():
    p = prom<V +>{
      dp2 = ld dp;
      dp3 = force? dp2;
      checkMissing(dp3);
      c11 = `is.object`(dp3);
      if c11 then L1() else L2(dp3);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", dp3);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(dp5):
      __ = ldf `[[` in base;
      r18 = dyn __(dp5, 2);
      goto L0(r18);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p1 = prom<V +>{
      dp6 = ld dp;
      dp7 = force? dp6;
      checkMissing(dp7);
      c12 = `is.object`(dp7);
      if c12 then L1() else L2(dp7);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[[", dp7);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(dp9):
      __1 = ldf `[[` in base;
      r20 = dyn __1(dp9, 3);
      goto L0(r20);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r22 = dyn paste(p, "and", p1);
    check L65() else D11();
  D9():
    deopt 36 [r16];
  D11():
    deopt 44 [r22];
  L62():
    goto L9();
  L65():
    st DNAME = r22;
    match_call = ldf `match.call`;
    check L66() else D12();
  D12():
    deopt 47 [];
  L66():
    r23 = dyn match_call[`expand.dots`](FALSE);
    check L67() else D13();
  D13():
    deopt 50 [r23];
  L67():
    st m = r23;
    sym4 = ldf `is.matrix`;
    base4 = ldf `is.matrix` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L68() else L69();
  L10(r25):
    c14 = `as.logical`(r25);
    if c14 then L73() else L11();
  L68():
    eval = ldf eval;
    check L70() else D14();
  L69():
    r24 = dyn base4(<lang eval(`$`(m, data), parent.frame())>);
    goto L10(r24);
  D14():
    deopt 55 [];
  L11():
    goto L12();
  L12():
    l3 = ld m;
    c16 = `is.object`(l3);
    if c16 then L82() else L83(NULL, l3);
  L70():
    p2 = prom<V +>{
      m = ld m;
      m1 = force? m;
      checkMissing(m1);
      c13 = `is.object`(m1);
      if c13 then L1() else L2(m1);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("$", m1);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(m3):
      r26 = `$`(m3, <sym data>);
      goto L0(r26);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p3 = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r28 = dyn parent_frame();
      return r28;
    };
    r30 = dyn eval(p2, p3);
    check L71() else D15();
  L73():
    as_data_frame = ldf `as.data.frame`;
    check L74() else D17();
  D15():
    deopt 58 [r30];
  D17():
    deopt 62 [];
  L71():
    is_matrix = ldf `is.matrix` in base;
    r31 = dyn is_matrix(r30);
    check L72() else D16();
  L74():
    p4 = prom<V +>{
      data1 = ld data;
      data2 = force? data1;
      checkMissing(data2);
      return data2;
    };
    r33 = dyn as_data_frame(p4);
    check L75() else D18();
  L81(dx9):
    st m = dx9;
    sym5 = ldf quote;
    base5 = ldf quote in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L85() else L86();
  L82():
    dr8 = tryDispatchBuiltin.0("$<-", l3, NULL);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L84() else L83(NULL, dr8);
  L83(r41, l5):
    r44 = `$<-`(l5, <sym var.equal>, NULL);
    goto L81(r44);
  D16():
    deopt 60 [r31];
  D18():
    deopt 64 [r33];
  L13(r46):
    l6 = ld m;
    c17 = `is.object`(l6);
    if c17 then L87() else L88(r46, l6);
  L72():
    goto L10(r31);
  L75():
    l = ld m;
    c15 = `is.object`(l);
    if c15 then L77() else L78(r33, l);
  L84():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L81(dx8);
  L85():
    quote = ldf quote in base;
    r47 = dyn quote(<lang `::`(stats, model.frame)>);
    goto L13(r47);
  L86():
    r45 = dyn base5(<lang `::`(stats, model.frame)>);
    goto L13(r45);
  L14(dx11):
    st m = dx11;
    eval1 = ldf eval;
    check L90() else D19();
  L76(r37, dx7):
    st m = dx7;
    goto L12();
  L77():
    dr6 = tryDispatchBuiltin.0("$<-", l, r33);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L79() else L78(r33, dr6);
  L78(r35, l2):
    r38 = `$<-`(l2, <sym data>, r33);
    goto L76(r35, r38);
  L87():
    dr10 = tryDispatchBuiltin.0("[[<-", l6, r46);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L89() else L88(r46, dr10);
  L88(r49, l8):
    ____ = ldf `[[<-` in base;
    r52 = dyn ____(l8, r46, 1);
    goto L14(r52);
  D19():
    deopt 84 [];
  L79():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L76(r33, dx6);
  L89():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L14(dx10);
  L90():
    p5 = prom<V +>{
      m4 = ld m;
      m5 = force? m4;
      checkMissing(m5);
      return m5;
    };
    p6 = prom<V +>{
      parent_frame1 = ldf `parent.frame`;
      r54 = dyn parent_frame1();
      return r54;
    };
    r56 = dyn eval1(p5, p6);
    check L91() else D20();
  D20():
    deopt 87 [r56];
  L91():
    st mf = r56;
    sym6 = ldf attr;
    base6 = ldf attr in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L92() else L93();
  L15(r58):
    st response = r58;
    mf2 = ld mf;
    check L99() else D24();
  L92():
    sym7 = ldf attr;
    base7 = ldf attr in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L94() else L95();
  L93():
    r57 = dyn base6(<lang attr(mf, "terms")>, "response");
    goto L15(r57);
  D24():
    deopt 102 [mf2];
  L16(r60):
    attr1 = ldf attr in base;
    r62 = dyn attr1(r60, "response");
    check L98() else D23();
  L94():
    mf = ld mf;
    check L96() else D21();
  L95():
    r59 = dyn base7(<sym mf>, "terms");
    goto L16(r59);
  L99():
    mf3 = force? mf2;
    checkMissing(mf3);
    c18 = `is.object`(mf3);
    if c18 then L100() else L101(mf3);
  D21():
    deopt 93 [mf];
  D23():
    deopt 100 [r62];
  L17(dx13):
    st y = dx13;
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L104() else L105();
  L96():
    mf1 = force? mf;
    checkMissing(mf1);
    attr = ldf attr in base;
    r61 = dyn attr(mf1, "terms");
    check L97() else D22();
  L98():
    goto L15(r62);
  L100():
    dr12 = tryDispatchBuiltin.1("[[", mf3);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L102() else L101(dr12);
  L101(mf5):
    response = ld response;
    check L103() else D25();
  D22():
    deopt 97 [r61];
  D25():
    deopt 104 [mf5, response];
  L18(r65):
    r69 = `>`(r65, 1);
    c20 = `as.logical`(r69);
    if c20 then L112() else L20();
  L97():
    goto L16(r61);
  L102():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L17(dx12);
  L103():
    response1 = force? response;
    __2 = ldf `[[` in base;
    r63 = dyn __2(mf5, response1);
    goto L17(r63);
  L104():
    mf6 = ld mf;
    check L106() else D26();
  L105():
    r64 = dyn base8(<lang `[`(mf, `-`(response))>);
    goto L18(r64);
  D26():
    deopt 110 [mf6];
  L20():
    factor1 = ldf factor;
    check L116() else D31();
  L21():
    nlevels = ldf nlevels;
    check L118() else D33();
  L106():
    mf7 = force? mf6;
    checkMissing(mf7);
    c19 = `is.object`(mf7);
    if c19 then L107() else L108(mf7);
  L112():
    factor = ldf factor;
    check L113() else D29();
  D29():
    deopt 121 [];
  D31():
    deopt 126 [];
  D33():
    deopt 131 [];
  L19(dx15):
    length2 = ldf length in base;
    r68 = dyn length2(dx15);
    check L111() else D28();
  L107():
    dr14 = tryDispatchBuiltin.1("[", mf7);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L109() else L108(dr14);
  L108(mf9):
    response2 = ld response;
    check L110() else D27();
  L113():
    p8 = prom<V +>{
      do_call = ldf `do.call`;
      p7 = prom<V +>{
        mf10 = ld mf;
        mf11 = force? mf10;
        checkMissing(mf11);
        c21 = `is.object`(mf11);
        if c21 then L1() else L2(mf11);
      L0(dx17):
        return dx17;
      L1():
        dr16 = tryDispatchBuiltin.1("[", mf11);
        dc8 = getTryDispatchBuiltinDispatched(dr16);
        if dc8 then L3() else L2(dr16);
      L2(mf13):
        response4 = ld response;
        response5 = force? response4;
        checkMissing(response5);
        r70 = `-`(<missing>, response5);
        __4 = ldf `[` in base;
        r71 = dyn __4(mf13, r70);
        goto L0(r71);
      L3():
        dx16 = getTryDispatchBuiltinValue(dr16);
        goto L0(dx16);
      };
      r73 = dyn do_call("interaction", p7);
      return r73;
    };
    r75 = dyn factor(p8);
    check L114() else D30();
  L116():
    p9 = prom<V +>{
      mf14 = ld mf;
      mf15 = force? mf14;
      checkMissing(mf15);
      c22 = `is.object`(mf15);
      if c22 then L1() else L2(mf15);
    L0(dx19):
      return dx19;
    L1():
      dr18 = tryDispatchBuiltin.1("[[", mf15);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L3() else L2(dr18);
    L2(mf17):
      response6 = ld response;
      response7 = force? response6;
      checkMissing(response7);
      r77 = `-`(<missing>, response7);
      __5 = ldf `[[` in base;
      r78 = dyn __5(mf17, r77);
      goto L0(r78);
    L3():
      dx18 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx18);
    };
    r80 = dyn factor1(p9);
    check L117() else D32();
  L118():
    p10 = prom<V +>{
      g = ld g;
      g1 = force? g;
      checkMissing(g1);
      return g1;
    };
    r82 = dyn nlevels(p10);
    check L119() else D34();
  D27():
    deopt 112 [mf9, response2];
  D28():
    deopt 117 [r68];
  D30():
    deopt 123 [r75];
  D32():
    deopt 128 [r80];
  D34():
    deopt 133 [r82];
  L109():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L19(dx14);
  L110():
    response3 = force? response2;
    checkMissing(response3);
    r66 = `-`(<missing>, response3);
    __3 = ldf `[` in base;
    r67 = dyn __3(mf9, r66);
    goto L19(r67);
  L111():
    goto L18(r68);
  L114():
    st g = r75;
    goto L21();
  L117():
    st g = r80;
    goto L21();
  L119():
    st k = r82;
    k = ld k;
    check L120() else D35();
  D35():
    deopt 135 [k];
  L120():
    k1 = force? k;
    checkMissing(k1);
    r83 = `<`(k1, 2);
    c23 = `as.logical`(r83);
    if c23 then L121() else L22();
  L22():
    goto L23();
  L23():
    tapply = ldf tapply;
    check L125() else D38();
  L121():
    stop2 = ldf stop;
    check L122() else D36();
  D36():
    deopt 140 [];
  D38():
    deopt 146 [];
  L122():
    r84 = dyn stop2("not enough groups");
    check L123() else D37();
  L125():
    p11 = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      return y1;
    };
    p12 = prom<V +>{
      g2 = ld g;
      g3 = force? g2;
      checkMissing(g3);
      return g3;
    };
    p13 = prom<V +>{
      length3 = ld length;
      length4 = force? length3;
      checkMissing(length4);
      return length4;
    };
    r89 = dyn tapply(p11, p12, p13);
    check L126() else D39();
  D37():
    deopt 142 [r84];
  D39():
    deopt 150 [r89];
  L123():
    goto L23();
  L126():
    st `n.i` = r89;
    sym9 = ldf any;
    base9 = ldf any in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L127() else L128();
  L24(r91):
    c24 = `as.logical`(r91);
    if c24 then L131() else L25();
  L127():
    n_i = ld `n.i`;
    check L129() else D40();
  L128():
    r90 = dyn base9(<lang `<`(n.i, 2.0)>);
    goto L24(r90);
  D40():
    deopt 154 [n_i];
  L25():
    goto L26();
  L26():
    tapply1 = ldf tapply;
    check L135() else D44();
  L129():
    n_i1 = force? n_i;
    checkMissing(n_i1);
    r92 = `<`(n_i1, 2.0);
    any = ldf any in base;
    r93 = dyn any(r92);
    check L130() else D41();
  L131():
    stop3 = ldf stop;
    check L132() else D42();
  D41():
    deopt 159 [r93];
  D42():
    deopt 161 [];
  D44():
    deopt 167 [];
  L130():
    goto L24(r93);
  L132():
    r94 = dyn stop3("not enough observations");
    check L133() else D43();
  L135():
    p14 = prom<V +>{
      y2 = ld y;
      y3 = force? y2;
      checkMissing(y3);
      return y3;
    };
    p15 = prom<V +>{
      g4 = ld g;
      g5 = force? g4;
      checkMissing(g5);
      return g5;
    };
    p16 = prom<V +>{
      mean = ld mean;
      mean1 = force? mean;
      checkMissing(mean1);
      return mean1;
    };
    r99 = dyn tapply1(p14, p15, p16);
    check L136() else D45();
  D43():
    deopt 163 [r94];
  D45():
    deopt 171 [r99];
  L133():
    goto L26();
  L136():
    st `m.i` = r99;
    tapply2 = ldf tapply;
    check L137() else D46();
  D46():
    deopt 174 [];
  L137():
    p17 = prom<V +>{
      y4 = ld y;
      y5 = force? y4;
      checkMissing(y5);
      return y5;
    };
    p18 = prom<V +>{
      g6 = ld g;
      g7 = force? g6;
      checkMissing(g7);
      return g7;
    };
    p19 = prom<V +>{
      var = ld var;
      var1 = force? var;
      checkMissing(var1);
      return var1;
    };
    r103 = dyn tapply2(p17, p18, p19);
    check L138() else D47();
  D47():
    deopt 178 [r103];
  L138():
    st `v.i` = r103;
    n_i2 = ld `n.i`;
    check L139() else D48();
  D48():
    deopt 180 [n_i2];
  L139():
    n_i3 = force? n_i2;
    checkMissing(n_i3);
    v_i = ld `v.i`;
    check L140() else D49();
  D49():
    deopt 181 [n_i3, v_i];
  L140():
    v_i1 = force? v_i;
    checkMissing(v_i1);
    r104 = `/`(n_i3, v_i1);
    st `w.i` = r104;
    sym10 = ldf sum;
    base10 = ldf sum in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L141() else L142();
  L27(r106):
    st `sum.w.i` = r106;
    sym11 = ldf sum;
    base11 = ldf sum in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L145() else L146();
  L141():
    w_i = ld `w.i`;
    check L143() else D50();
  L142():
    r105 = dyn base10(<sym w.i>);
    goto L27(r105);
  D50():
    deopt 187 [w_i];
  L28(r109):
    k2 = ld k;
    check L151() else D56();
  L143():
    w_i1 = force? w_i;
    checkMissing(w_i1);
    sum = ldf sum in base;
    r107 = dyn sum(w_i1);
    check L144() else D51();
  L145():
    w_i2 = ld `w.i`;
    check L147() else D52();
  L146():
    r108 = dyn base11(<lang `/`(`^`(`(`(`-`(1.0, `/`(w.i, sum.w.i))), 2.0), `(`(`-`(n.i, 1.0)))>);
    goto L28(r108);
  D51():
    deopt 190 [r107];
  D52():
    deopt 195 [1.0, w_i2];
  D56():
    deopt 207 [r109, k2];
  L144():
    goto L27(r107);
  L147():
    w_i3 = force? w_i2;
    checkMissing(w_i3);
    sum_w_i = ld `sum.w.i`;
    check L148() else D53();
  L151():
    k3 = force? k2;
    checkMissing(k3);
    r116 = `^`(k3, 2.0);
    r117 = `-`(r116, 1.0);
    r118 = `/`(r109, r117);
    st tmp = r118;
    st METHOD = "One-way analysis of means";
    var_equal1 = ld `var.equal`;
    check L152() else D57();
  D53():
    deopt 196 [1.0, w_i3, sum_w_i];
  D57():
    deopt 218 [var_equal1];
  L148():
    sum_w_i1 = force? sum_w_i;
    checkMissing(sum_w_i1);
    r110 = `/`(w_i3, sum_w_i1);
    r111 = `-`(1.0, r110);
    r112 = `^`(r111, 2.0);
    n_i4 = ld `n.i`;
    check L149() else D54();
  L152():
    var_equal2 = force? var_equal1;
    checkMissing(var_equal2);
    c25 = `as.logical`(var_equal2);
    if c25 then L153() else L29();
  D54():
    deopt 201 [r112, n_i4];
  L29():
    sym16 = ldf sum;
    base16 = ldf sum in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L182() else L183();
  L34():
    l9 = ld STATISTIC;
    names__ = ldf `names<-`;
    check L206() else D95();
  L149():
    n_i5 = force? n_i4;
    checkMissing(n_i5);
    r113 = `-`(n_i5, 1.0);
    r114 = `/`(r112, r113);
    sum1 = ldf sum in base;
    r115 = dyn sum1(r114);
    check L150() else D55();
  L153():
    sym12 = ldf sum;
    base12 = ldf sum in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L154() else L155();
  D55():
    deopt 207 [r115];
  D95():
    deopt 353 ["F", l9, "F"];
  L30(r120):
    st n = r120;
    sym13 = ldf sum;
    base13 = ldf sum in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L158() else L159();
  L35(r156):
    sum_w_i2 = ld `sum.w.i`;
    check L187() else D80();
  L150():
    goto L28(r115);
  L154():
    n_i6 = ld `n.i`;
    check L156() else D58();
  L155():
    r119 = dyn base12(<sym n.i>);
    goto L30(r119);
  L182():
    w_i4 = ld `w.i`;
    check L184() else D77();
  L183():
    r155 = dyn base16(<lang `*`(w.i, m.i)>);
    goto L35(r155);
  L206():
    r188 = dyn names__(l9, NULL, "F");
    check L207() else D96();
  D58():
    deopt 222 [n_i6];
  D77():
    deopt 284 [w_i4];
  D80():
    deopt 289 [r156, sum_w_i2];
  D96():
    deopt 355 ["F", r188];
  L31(r123):
    k4 = ld k;
    check L165() else D65();
  L156():
    n_i7 = force? n_i6;
    checkMissing(n_i7);
    sum2 = ldf sum in base;
    r121 = dyn sum2(n_i7);
    check L157() else D59();
  L158():
    n_i8 = ld `n.i`;
    check L160() else D60();
  L159():
    r122 = dyn base13(<lang `*`(n.i, `^`(`(`(`-`(m.i, mean(y))), 2.0))>);
    goto L31(r122);
  L184():
    w_i5 = force? w_i4;
    checkMissing(w_i5);
    m_i2 = ld `m.i`;
    check L185() else D78();
  L187():
    sum_w_i3 = force? sum_w_i2;
    checkMissing(sum_w_i3);
    r159 = `/`(r156, sum_w_i3);
    st m = r159;
    sym17 = ldf sum;
    base17 = ldf sum in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L188() else L189();
  L207():
    st STATISTIC = r188;
    sym19 = ldf c;
    base19 = ldf c in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L208() else L209();
  D59():
    deopt 225 [r121];
  D60():
    deopt 229 [n_i8];
  D65():
    deopt 240 [r123, k4];
  D78():
    deopt 285 [w_i5, m_i2];
  L36(r161):
    k16 = ld k;
    check L194() else D85();
  L38(r190):
    l10 = ld PARAMETER;
    names__1 = ldf `names<-`;
    check L211() else D98();
  L157():
    goto L30(r121);
  L160():
    n_i9 = force? n_i8;
    checkMissing(n_i9);
    m_i = ld `m.i`;
    check L161() else D61();
  L165():
    k5 = force? k4;
    checkMissing(k5);
    r130 = `-`(k5, 1.0);
    r131 = `/`(r123, r130);
    sym14 = ldf sum;
    base14 = ldf sum in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L166() else L167();
  L185():
    m_i3 = force? m_i2;
    checkMissing(m_i3);
    r157 = `*`(w_i5, m_i3);
    sum5 = ldf sum in base;
    r158 = dyn sum5(r157);
    check L186() else D79();
  L188():
    w_i6 = ld `w.i`;
    check L190() else D81();
  L189():
    r160 = dyn base17(<lang `*`(w.i, `^`(`(`(`-`(m.i, m)), 2.0))>);
    goto L36(r160);
  L208():
    c28 = ldf c in base;
    r191 = dyn c28("num df", "denom df");
    check L210() else D97();
  L209():
    r189 = dyn base19("num df", "denom df");
    goto L38(r189);
  D61():
    deopt 230 [n_i9, m_i];
  D79():
    deopt 289 [r158];
  D81():
    deopt 295 [w_i6];
  D85():
    deopt 304 [r161, k16];
  D97():
    deopt 362 [r191];
  D98():
    deopt 364 [r190, l10, r190];
  L32(r135, r136):
    n = ld n;
    check L171() else D69();
  L161():
    m_i1 = force? m_i;
    checkMissing(m_i1);
    mean2 = ldf mean;
    check L162() else D62();
  L166():
    n_i10 = ld `n.i`;
    check L168() else D66();
  L167():
    r134 = dyn base14(<lang `*`(`(`(`-`(n.i, 1.0)), v.i)>);
    goto L32(r131, r134);
  L186():
    goto L35(r158);
  L190():
    w_i7 = force? w_i6;
    checkMissing(w_i7);
    m_i4 = ld `m.i`;
    check L191() else D82();
  L194():
    k17 = force? k16;
    checkMissing(k17);
    r166 = `-`(k17, 1.0);
    k18 = ld k;
    check L195() else D86();
  L210():
    goto L38(r191);
  L211():
    r192 = dyn names__1(l10, NULL, r190);
    check L212() else D99();
  D62():
    deopt 232 [n_i9, m_i1];
  D66():
    deopt 246 [r131, n_i10];
  D69():
    deopt 253 [r135, r136, n];
  D82():
    deopt 296 [w_i7, m_i4];
  D86():
    deopt 309 [r161, r166, 1.0, 2.0, k18];
  D99():
    deopt 366 [r190, r192];
  L162():
    p20 = prom<V +>{
      y6 = ld y;
      y7 = force? y6;
      checkMissing(y7);
      return y7;
    };
    r125 = dyn mean2(p20);
    check L163() else D63();
  L168():
    n_i11 = force? n_i10;
    checkMissing(n_i11);
    r137 = `-`(n_i11, 1.0);
    v_i2 = ld `v.i`;
    check L169() else D67();
  L171():
    n1 = force? n;
    checkMissing(n1);
    k6 = ld k;
    check L172() else D70();
  L191():
    m_i5 = force? m_i4;
    checkMissing(m_i5);
    m6 = ld m;
    check L192() else D83();
  L195():
    k19 = force? k18;
    checkMissing(k19);
    r167 = `-`(k19, 2.0);
    r168 = `*`(2.0, r167);
    tmp = ld tmp;
    check L196() else D87();
  L212():
    st PARAMETER = r192;
    sym20 = ldf list;
    base20 = ldf list in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L213() else L214();
  D63():
    deopt 234 [n_i9, m_i1, r125];
  D67():
    deopt 249 [r131, r137, v_i2];
  D70():
    deopt 254 [r135, r136, n1, k6];
  D83():
    deopt 297 [w_i7, m_i5, m6];
  D87():
    deopt 313 [r161, r166, 1.0, r168, tmp];
  L39(r194):
    st RVAL = r194;
    l11 = ld RVAL;
    class__ = ldf `class<-`;
    check L221() else D106();
  L163():
    r126 = `-`(m_i1, r125);
    r127 = `^`(r126, 2.0);
    r128 = `*`(n_i9, r127);
    sum3 = ldf sum in base;
    r129 = dyn sum3(r128);
    check L164() else D64();
  L169():
    v_i3 = force? v_i2;
    checkMissing(v_i3);
    r138 = `*`(r137, v_i3);
    sum4 = ldf sum in base;
    r139 = dyn sum4(r138);
    check L170() else D68();
  L172():
    k7 = force? k6;
    checkMissing(k7);
    r140 = `-`(n1, k7);
    r141 = `/`(r136, r140);
    r142 = `/`(r135, r141);
    st STATISTIC = r142;
    sym15 = ldf c;
    base15 = ldf c in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L173() else L174();
  L192():
    m7 = force? m6;
    checkMissing(m7);
    r162 = `-`(m_i5, m7);
    r163 = `^`(r162, 2.0);
    r164 = `*`(w_i7, r163);
    sum6 = ldf sum in base;
    r165 = dyn sum6(r164);
    check L193() else D84();
  L196():
    tmp1 = force? tmp;
    checkMissing(tmp1);
    r169 = `*`(r168, tmp1);
    r170 = `+`(1.0, r169);
    r171 = `*`(r166, r170);
    r172 = `/`(r161, r171);
    st STATISTIC = r172;
    sym18 = ldf c;
    base18 = ldf c in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L197() else L198();
  L213():
    STATISTIC4 = ld STATISTIC;
    check L215() else D100();
  L214():
    r193 = dyn base20[statistic, parameter, `p.value`, method, `data.name`](<sym STATISTIC>, <sym PARAMETER>, <sym PVAL>, <sym METHOD>, <sym DNAME>);
    goto L39(r193);
  D64():
    deopt 240 [r129];
  D68():
    deopt 253 [r131, r139];
  D84():
    deopt 304 [r165];
  D100():
    deopt 370 [STATISTIC4];
  D106():
    deopt 391 ["htest", l11, "htest"];
  L33(r144):
    st PARAMETER = r144;
    pf = ldf pf;
    check L179() else D75();
  L37(r174):
    st PARAMETER = r174;
    pf1 = ldf pf;
    check L202() else D91();
  L164():
    goto L31(r129);
  L170():
    goto L32(r131, r139);
  L173():
    k8 = ld k;
    check L175() else D71();
  L174():
    r143 = dyn base15(<lang `-`(k, 1.0)>, <lang `-`(n, k)>);
    goto L33(r143);
  L193():
    goto L36(r165);
  L197():
    k20 = ld k;
    check L199() else D88();
  L198():
    r173 = dyn base18(<lang `-`(k, 1.0)>, <lang `/`(1.0, `(`(`*`(3.0, tmp)))>);
    goto L37(r173);
  L215():
    STATISTIC5 = force? STATISTIC4;
    checkMissing(STATISTIC5);
    PARAMETER = ld PARAMETER;
    check L216() else D101();
  L221():
    r196 = dyn class__(l11, NULL, "htest");
    check L222() else D107();
  D71():
    deopt 262 [k8];
  D75():
    deopt 274 [];
  D88():
    deopt 322 [k20];
  D91():
    deopt 336 [];
  D101():
    deopt 373 [PARAMETER];
  D107():
    deopt 393 ["htest", r196];
  L175():
    k9 = force? k8;
    checkMissing(k9);
    r145 = `-`(k9, 1.0);
    n2 = ld n;
    check L176() else D72();
  L179():
    p21 = prom<V +>{
      STATISTIC = ld STATISTIC;
      STATISTIC1 = force? STATISTIC;
      checkMissing(STATISTIC1);
      return STATISTIC1;
    };
    p22 = prom<V +>{
      k12 = ld k;
      k13 = force? k12;
      checkMissing(k13);
      r149 = `-`(k13, 1.0);
      return r149;
    };
    p23 = prom<V +>{
      n4 = ld n;
      n5 = force? n4;
      checkMissing(n5);
      k14 = ld k;
      k15 = force? k14;
      checkMissing(k15);
      r151 = `-`(n5, k15);
      return r151;
    };
    r153 = dyn pf[, , , `lower.tail`](p21, p22, p23, FALSE);
    check L180() else D76();
  L199():
    k21 = force? k20;
    checkMissing(k21);
    r175 = `-`(k21, 1.0);
    tmp2 = ld tmp;
    check L200() else D89();
  L202():
    p24 = prom<V +>{
      STATISTIC2 = ld STATISTIC;
      STATISTIC3 = force? STATISTIC2;
      checkMissing(STATISTIC3);
      return STATISTIC3;
    };
    p25 = prom<V +>{
      k22 = ld k;
      k23 = force? k22;
      checkMissing(k23);
      r180 = `-`(k23, 1.0);
      return r180;
    };
    p26 = prom<V +>{
      tmp4 = ld tmp;
      tmp5 = force? tmp4;
      checkMissing(tmp5);
      r182 = `*`(3.0, tmp5);
      r183 = `/`(1.0, r182);
      return r183;
    };
    r185 = dyn pf1[, , , `lower.tail`](p24, p25, p26, FALSE);
    check L203() else D92();
  L216():
    PARAMETER1 = force? PARAMETER;
    checkMissing(PARAMETER1);
    PVAL = ld PVAL;
    check L217() else D102();
  L222():
    st RVAL = r196;
    RVAL = ld RVAL;
    check L223() else D108();
  D72():
    deopt 266 [n2];
  D76():
    deopt 280 [r153];
  D89():
    deopt 328 [1.0, 3.0, tmp2];
  D92():
    deopt 342 [r185];
  D102():
    deopt 376 [PVAL];
  D108():
    deopt 395 [RVAL];
  L176():
    n3 = force? n2;
    checkMissing(n3);
    k10 = ld k;
    check L177() else D73();
  L180():
    st PVAL = r153;
    goto L34();
  L200():
    tmp3 = force? tmp2;
    checkMissing(tmp3);
    r176 = `*`(3.0, tmp3);
    r177 = `/`(1.0, r176);
    c27 = ldf c in base;
    r178 = dyn c27(r175, r177);
    check L201() else D90();
  L203():
    st PVAL = r185;
    paste1 = ldf paste;
    check L204() else D93();
  L217():
    PVAL1 = force? PVAL;
    checkMissing(PVAL1);
    METHOD2 = ld METHOD;
    check L218() else D103();
  L223():
    RVAL1 = force? RVAL;
    checkMissing(RVAL1);
    popenv;
    return RVAL1;
  D73():
    deopt 267 [n3, k10];
  D90():
    deopt 333 [r178];
  D93():
    deopt 345 [];
  D103():
    deopt 379 [METHOD2];
  L177():
    k11 = force? k10;
    checkMissing(k11);
    r146 = `-`(n3, k11);
    c26 = ldf c in base;
    r147 = dyn c26(r145, r146);
    check L178() else D74();
  L201():
    goto L37(r178);
  L204():
    p27 = prom<V +>{
      METHOD = ld METHOD;
      METHOD1 = force? METHOD;
      checkMissing(METHOD1);
      return METHOD1;
    };
    r187 = dyn paste1(p27, "(not assuming equal variances)");
    check L205() else D94();
  L218():
    METHOD3 = force? METHOD2;
    checkMissing(METHOD3);
    DNAME = ld DNAME;
    check L219() else D104();
  D74():
    deopt 271 [r147];
  D94():
    deopt 348 [r187];
  D104():
    deopt 382 [DNAME];
  L178():
    goto L33(r147);
  L205():
    st METHOD = r187;
    goto L34();
  L219():
    DNAME1 = force? DNAME;
    checkMissing(DNAME1);
    list = ldf list in base;
    r195 = dyn list(STATISTIC5, PARAMETER1, PVAL1, METHOD3, DNAME1);
    check L220() else D105();
  D105():
    deopt 386 [r195];
  L220():
    goto L39(r195);
  }
}