fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1844082849;
    st `t.test.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1844082849(x, y, alternative, mu, paired, `var.equal`, `conf.level`, `...`) {
  (reg x:*, reg y:*, reg alternative:*, reg mu:*, reg paired:*, reg var_equal:*, reg conf_level:*, reg ddd:dots) -+> V { var x:*, var y:*, reg y_isMissing:L, reg y_orDefault:*, var alternative:*, reg alternative_isMissing:L, reg alternative_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var mu:*, reg mu_isMissing:L, reg mu_orDefault:*, var paired:*, reg paired_isMissing:L, reg paired_orDefault:*, var `var.equal`:*, reg var_equal_isMissing:L, reg var_equal_orDefault:*, var `conf.level`:*, reg conf_level_isMissing:L, reg conf_level_orDefault:*, var `...`:dots?, reg match_arg:cls, reg alternative1:*, reg alternative2:V, reg p1:p(V +), reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg missing:cls, reg r8:V, reg r9:V, reg c1:L, reg c3:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg c6:L, reg r11:V, reg mu1:*, reg mu2:V, reg length:cls, reg r12:V, reg r13:V, reg c7:L, reg c8:L, reg c9:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg c16:L, reg c17:L, reg r15:V, reg mu3:*, reg mu4:V, reg is_na:cls, reg r16:V, reg c18:L, reg c19:V, reg c22:L, reg c23:V, reg c25:L, reg stop:cls, reg r17:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r19:V, reg r20:V, reg missing1:cls, reg r21:V, reg r22:V, reg c26:L, reg c28:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r23:V, reg c31:L, reg r24:V, reg conf_level1:*, reg conf_level2:V, reg length1:cls, reg r25:V, reg r26:V, reg c32:L, reg c33:L, reg c34:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r27:V, reg c41:L, reg c42:L, reg r28:V, reg conf_level3:*, reg conf_level4:V, reg is_finite:cls, reg r29:V, reg r30:V, reg c43:L, reg c44:V, reg c47:L, reg c48:L, reg c49:V, reg conf_level5:*, reg conf_level6:V, reg r31:V, reg c52:L, reg c53:V, reg c56:L, reg c57:L, reg c58:V, reg conf_level7:*, reg conf_level8:V, reg r32:V, reg c61:L, reg c62:V, reg c65:L, reg c66:V, reg c68:L, reg stop1:cls, reg r33:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r35:V, reg r36:V, reg y1:*, reg y2:V, reg c69:V, reg r37:V, reg c70:L, reg paste:cls, reg deparse1:cls, reg sym8:cls, reg base8:cls, reg guard8:L, reg r38:V, reg r39:V, reg substitute:cls, reg r40:V, reg p2:p(V +), reg r42:V, reg p3:p(V +), reg deparse2:cls, reg sym9:cls, reg base9:cls, reg guard9:L, reg r44:V, reg r45:V, reg substitute1:cls, reg r46:V, reg p4:p(V +), reg r48:V, reg p5:p(V +), reg r50:V, reg paired1:*, reg paired2:V, reg c71:L, reg complete_cases:cls, reg x1:*, reg x2:V, reg p6:p(V +), reg y3:*, reg y4:V, reg p7:p(V +), reg r53:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r55:V, reg r56:V, reg y5:*, reg y6:V, reg is_na1:cls, reg r57:V, reg r58:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r59:V, reg r60:V, reg x3:*, reg x4:V, reg is_na2:cls, reg r61:V, reg r62:V, reg y7:*, reg y8:V, reg c72:L, reg y10:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg yok:*, reg yok1:V, reg __:cls, reg r63:V, reg deparse3:cls, reg sym12:cls, reg base12:cls, reg guard12:L, reg r64:V, reg r65:V, reg substitute2:cls, reg r66:V, reg p8:p(V +), reg r68:V, reg paired3:*, reg paired4:V, reg c73:L, reg stop2:cls, reg r69:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r71:V, reg r72:V, reg x5:*, reg x6:V, reg is_na3:cls, reg r73:V, reg r74:V, reg x7:*, reg x8:V, reg c74:L, reg x10:V, reg dr2:V, reg dc1:L, reg dx3:V, reg dx4:V, reg xok:*, reg xok1:V, reg __1:cls, reg r75:V, reg paired5:*, reg paired6:V, reg c75:L, reg x11:*, reg x12:V, reg y11:*, reg y12:V, reg r76:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r78:V, reg r79:V, reg x13:*, reg x14:V, reg length2:cls, reg r80:V, reg mean:cls, reg x15:*, reg x16:V, reg p9:p(V +), reg r82:V, reg var:cls, reg x17:*, reg x18:V, reg p10:p(V +), reg r84:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r85:V, reg r86:V, reg y13:*, reg y14:V, reg c76:V, reg c77:L, reg nx:*, reg nx1:V, reg r87:V, reg c78:L, reg stop3:cls, reg r88:V, reg nx2:*, reg nx3:V, reg r90:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r91:V, reg r92:V, reg vx:*, reg vx1:V, reg nx4:*, reg nx5:V, reg r93:V, reg r94:V, reg stderr:*, reg stderr1:V, reg _Machine:*, reg _Machine1:V, reg c79:L, reg stderr3:V, reg r96:R, reg _Machine3:V, reg dr4:V, reg dc2:L, reg dx5:V, reg stderr5:V, reg r98:R, reg dx6:V, reg r99:V, reg r100:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r103:V, reg stderr8:V, reg r104:V, reg r105:V, reg mx:*, reg mx1:V, reg abs:cls, reg r106:V, reg r107:V, reg r108:V, reg c80:L, reg stop4:cls, reg r109:V, reg mx2:*, reg mx3:V, reg mu5:*, reg mu6:V, reg r111:V, reg stderr9:*, reg stderr10:V, reg r112:V, reg paired7:*, reg paired8:V, reg c81:L, reg r113:S, reg setNames:cls, reg mx4:*, reg mx5:V, reg p11:p(V +), reg paired9:*, reg paired10:V, reg c82:L, reg p12:p(V +), reg r116:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r118:V, reg r119:V, reg y15:*, reg y16:V, reg length3:cls, reg r120:V, reg nx6:*, reg nx7:V, reg r121:V, reg c83:L, reg c84:V, reg var_equal1:*, reg var_equal2:V, reg r122:V, reg c86:L, reg c89:L, reg c90:V, reg nx8:*, reg nx9:V, reg r123:V, reg c91:L, reg c92:V, reg c95:L, reg c96:V, reg c98:L, reg stop5:cls, reg r124:V, reg ny:*, reg ny1:V, reg r126:V, reg c99:L, reg c100:V, reg var_equal3:*, reg var_equal4:V, reg r127:V, reg c102:L, reg c105:L, reg c106:V, reg ny2:*, reg ny3:V, reg r128:V, reg c107:L, reg c108:V, reg c111:L, reg c112:V, reg c114:L, reg stop6:cls, reg r129:V, reg var_equal5:*, reg var_equal6:V, reg c115:L, reg c117:V, reg nx10:*, reg nx11:V, reg ny4:*, reg ny5:V, reg r131:V, reg r132:V, reg c118:L, reg c119:V, reg c121:L, reg stop7:cls, reg r133:V, reg mean1:cls, reg y17:*, reg y18:V, reg p13:p(V +), reg r136:V, reg var1:cls, reg y19:*, reg y20:V, reg p14:p(V +), reg r138:V, reg paste1:cls, reg var_equal7:*, reg var_equal8:V, reg r139:V, reg c122:L, reg p15:p(V +), reg r141:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r142:V, reg r143:V, reg mx6:*, reg mx7:V, reg my:*, reg my1:V, reg c123:cls, reg r144:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r145:V, reg r146:V, reg c124:cls, reg r147:V, reg l:*, reg names__:cls, reg r148:V, reg var_equal9:*, reg var_equal10:V, reg c125:L, reg nx12:*, reg nx13:V, reg ny6:*, reg ny7:V, reg r149:V, reg r150:V, reg nx14:*, reg nx15:V, reg r151:V, reg c126:L, reg v:*, reg v1:V, reg nx16:*, reg nx17:V, reg r152:V, reg vx2:*, reg vx3:V, reg r153:V, reg r154:V, reg ny8:*, reg ny9:V, reg r156:V, reg c127:L, reg v2:*, reg v3:V, reg ny10:*, reg ny11:V, reg r157:V, reg vy:*, reg vy1:V, reg r158:V, reg r159:V, reg v4:*, reg v5:V, reg df:*, reg df1:V, reg r161:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r162:V, reg r163:V, reg v6:*, reg v7:V, reg nx18:*, reg nx19:V, reg r164:V, reg ny12:*, reg ny13:V, reg r165:V, reg r166:V, reg r167:V, reg r168:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r170:V, reg r171:V, reg vx4:*, reg vx5:V, reg nx20:*, reg nx21:V, reg r172:V, reg r173:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r174:V, reg r175:V, reg vy2:*, reg vy3:V, reg ny14:*, reg ny15:V, reg r176:V, reg r177:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r178:V, reg r179:V, reg stderrx:*, reg stderrx1:V, reg r180:V, reg stderry:*, reg stderry1:V, reg r181:V, reg r182:V, reg r183:V, reg stderr11:*, reg stderr12:V, reg r184:V, reg stderrx2:*, reg stderrx3:V, reg r185:V, reg nx22:*, reg nx23:V, reg r186:V, reg r187:V, reg stderry2:*, reg stderry3:V, reg r188:V, reg ny16:*, reg ny17:V, reg r189:V, reg r190:V, reg r191:V, reg r192:V, reg stderr13:*, reg stderr14:V, reg _Machine4:*, reg _Machine5:V, reg c128:L, reg stderr16:V, reg r194:R, reg _Machine7:V, reg dr6:V, reg dc3:L, reg dx7:V, reg stderr18:V, reg r196:R, reg dx8:V, reg r197:V, reg r198:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r201:V, reg stderr21:V, reg r202:V, reg r203:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r206:V, reg stderr24:V, reg r207:V, reg r208:V, reg mx8:*, reg mx9:V, reg abs1:cls, reg r209:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r212:V, reg stderr27:V, reg r213:V, reg r214:V, reg my2:*, reg my3:V, reg abs2:cls, reg r215:V, reg max:cls, reg r216:V, reg r217:V, reg r218:V, reg c129:L, reg stop8:cls, reg r219:V, reg mx10:*, reg mx11:V, reg my4:*, reg my5:V, reg r221:V, reg mu7:*, reg mu8:V, reg r222:V, reg stderr28:*, reg stderr29:V, reg r223:V, reg alternative3:*, reg alternative4:V, reg r224:V, reg c130:L, reg pt:cls, reg tstat:*, reg tstat1:V, reg p16:p(V +), reg df2:*, reg df3:V, reg p17:p(V +), reg r227:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r228:V, reg r229:V, reg tstat2:*, reg tstat3:V, reg qt:cls, reg conf_level9:*, reg conf_level10:V, reg p18:p(V +), reg df4:*, reg df5:V, reg p19:p(V +), reg r232:V, reg r233:V, reg c131:cls, reg r234:V, reg alternative5:*, reg alternative6:V, reg r236:V, reg c132:L, reg pt1:cls, reg tstat4:*, reg tstat5:V, reg p20:p(V +), reg df6:*, reg df7:V, reg p21:p(V +), reg r239:V, reg sym29:cls, reg base29:cls, reg guard29:L, reg r240:V, reg r241:V, reg tstat6:*, reg tstat7:V, reg qt1:cls, reg conf_level11:*, reg conf_level12:V, reg p22:p(V +), reg df8:*, reg df9:V, reg p23:p(V +), reg r244:V, reg r245:V, reg c133:cls, reg r246:V, reg pt2:cls, reg sym30:cls, reg base30:cls, reg guard30:L, reg r247:V, reg r248:V, reg tstat8:*, reg tstat9:V, reg abs3:cls, reg r249:V, reg r250:V, reg p24:p(V +), reg df10:*, reg df11:V, reg p25:p(V +), reg r253:V, reg r254:V, reg conf_level13:*, reg conf_level14:V, reg r255:V, reg qt2:cls, reg alpha:*, reg alpha1:V, reg r256:V, reg r257:V, reg p26:p(V +), reg df12:*, reg df13:V, reg p27:p(V +), reg r260:V, reg tstat10:*, reg tstat11:V, reg sym31:cls, reg base31:cls, reg guard31:L, reg r261:V, reg tstat14:V, reg r262:V, reg cint:*, reg cint1:V, reg r263:V, reg cint2:*, reg cint3:V, reg c134:cls, reg r264:V, reg r265:V, reg mu9:*, reg mu10:V, reg cint4:*, reg cint5:V, reg stderr30:*, reg stderr31:V, reg r266:V, reg r267:V, reg l1:*, reg names__1:cls, reg r268:V, reg l2:*, reg names__2:cls, reg r269:V, reg paired11:*, reg paired12:V, reg c135:L, reg r270:S, reg sym32:cls, reg base32:cls, reg guard32:L, reg r271:V, reg r272:V, reg y21:*, reg y22:V, reg c136:V, reg r273:V, reg c137:L, reg l3:*, reg names__3:cls, reg r274:V, reg conf_level15:*, reg conf_level16:V, reg l4:*, reg attr__:cls, reg r275:V, reg sym33:cls, reg base33:cls, reg guard33:L, reg r276:V, reg r277:V, reg tstat15:*, reg tstat16:V, reg df14:*, reg df15:V, reg pval:*, reg pval1:V, reg cint6:*, reg cint7:V, reg estimate:*, reg estimate1:V, reg mu11:*, reg mu12:V, reg stderr32:*, reg stderr33:V, reg alternative7:*, reg alternative8:V, reg method:*, reg method1:V, reg dname:*, reg dname1:V, reg list:cls, reg r278:V, reg l5:*, reg class__:cls, reg r279:V, reg rval:*, reg rval1:V |
    mkenv;
    st x = x;
    y_isMissing = missing.0(y);
    if y_isMissing then L0(NULL) else L0(y);
  L0(y_orDefault):
    st y = y_orDefault;
    alternative_isMissing = missing.0(alternative);
    if alternative_isMissing then L1() else L2(alternative);
  L1():
    p = prom<V +>{
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
    goto L2(p);
  L2(alternative_orDefault):
    st alternative = alternative_orDefault;
    mu_isMissing = missing.0(mu);
    if mu_isMissing then L3(0.0) else L3(mu);
  L3(mu_orDefault):
    st mu = mu_orDefault;
    paired_isMissing = missing.0(paired);
    if paired_isMissing then L4(FALSE) else L4(paired);
  L4(paired_orDefault):
    st paired = paired_orDefault;
    var_equal_isMissing = missing.0(var_equal);
    if var_equal_isMissing then L5(FALSE) else L5(var_equal);
  L5(var_equal_orDefault):
    st `var.equal` = var_equal_orDefault;
    conf_level_isMissing = missing.0(conf_level);
    if conf_level_isMissing then L6(0.95) else L6(conf_level);
  L6(conf_level_orDefault):
    st `conf.level` = conf_level_orDefault;
    st `...` = ddd;
    match_arg = ldf `match.arg`;
    check L89() else D0();
  D0():
    deopt 1 [];
  L89():
    p1 = prom<V +>{
      alternative1 = ld alternative;
      alternative2 = force? alternative1;
      checkMissing(alternative2);
      return alternative2;
    };
    r5 = dyn match_arg(p1);
    check L90() else D1();
  D1():
    deopt 3 [r5];
  L90():
    st alternative = r5;
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L91() else L92();
  L7(r7):
    r9 = `!`(r7);
    c1 = `as.logical`(r9);
    if c1 then L93() else L8(c1);
  L91():
    missing = ldf missing in base;
    r8 = dyn missing(<sym mu>);
    goto L7(r8);
  L92():
    r6 = dyn base1(<sym mu>);
    goto L7(r6);
  L8(c3):
    c25 = `as.logical`(c3);
    if c25 then L105() else L12();
  L93():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L94() else L95();
  L9(c6, r11):
    r13 = `!=`(r11, 1.0);
    c7 = `as.logical`(r13);
    if c7 then L10(c6, c7) else L98();
  L12():
    goto L13();
  L13():
    sym4 = ldf missing;
    base4 = ldf missing in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L109() else L110();
  L94():
    mu1 = ld mu;
    check L96() else D2();
  L95():
    r10 = dyn base2(<sym mu>);
    goto L9(c1, r10);
  L105():
    stop = ldf stop;
    check L106() else D6();
  D2():
    deopt 11 [c1, mu1];
  D6():
    deopt 26 [];
  L10(c8, c9):
    c22 = `as.logical`(c9);
    c23 = `&&`(c8, c22);
    goto L8(c23);
  L14(r20):
    r22 = `!`(r20);
    c26 = `as.logical`(r22);
    if c26 then L111() else L15(c26);
  L96():
    mu2 = force? mu1;
    checkMissing(mu2);
    length = ldf length in base;
    r12 = dyn length(mu2);
    check L97() else D3();
  L98():
    sym3 = ldf `is.na`;
    base3 = ldf `is.na` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L99() else L100();
  L106():
    r17 = dyn stop("'mu' must be a single number");
    check L107() else D7();
  L109():
    missing1 = ldf missing in base;
    r21 = dyn missing1(<sym conf.level>);
    goto L14(r21);
  L110():
    r19 = dyn base4(<sym conf.level>);
    goto L14(r19);
  D3():
    deopt 14 [c1, r12];
  D7():
    deopt 28 [r17];
  L11(c16, c17, r15):
    c18 = `as.logical`(r15);
    c19 = `||`(c17, c18);
    goto L10(c16, c19);
  L15(c28):
    c68 = `as.logical`(c28);
    if c68 then L129() else L21();
  L97():
    goto L9(c1, r12);
  L99():
    mu3 = ld mu;
    check L101() else D4();
  L100():
    r14 = dyn base3(<sym mu>);
    goto L11(c6, c7, r14);
  L107():
    goto L13();
  L111():
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L112() else L113();
  D4():
    deopt 19 [c6, c7, mu3];
  L16(c31, r24):
    r26 = `!=`(r24, 1.0);
    c32 = `as.logical`(r26);
    if c32 then L17(c31, c32) else L116();
  L21():
    goto L22();
  L22():
    sym7 = ldf `is.null`;
    base7 = ldf `is.null` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L133() else L134();
  L101():
    mu4 = force? mu3;
    checkMissing(mu4);
    is_na = ldf `is.na` in base;
    r16 = dyn is_na(mu4);
    check L102() else D5();
  L112():
    conf_level1 = ld `conf.level`;
    check L114() else D8();
  L113():
    r23 = dyn base5(<sym conf.level>);
    goto L16(c26, r23);
  L129():
    stop1 = ldf stop;
    check L130() else D14();
  D5():
    deopt 22 [c6, c7, r16];
  D8():
    deopt 37 [c26, conf_level1];
  D14():
    deopt 63 [];
  L17(c33, c34):
    c47 = `as.logical`(c34);
    if c47 then L19(c33, c47) else L122();
  L23(r36):
    r37 = `!`(r36);
    c70 = `as.logical`(r37);
    if c70 then L136() else L24();
  L102():
    goto L11(c6, c7, r16);
  L114():
    conf_level2 = force? conf_level1;
    checkMissing(conf_level2);
    length1 = ldf length in base;
    r25 = dyn length1(conf_level2);
    check L115() else D9();
  L116():
    sym6 = ldf `is.finite`;
    base6 = ldf `is.finite` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L117() else L118();
  L130():
    r33 = dyn stop1("'conf.level' must be a single number between 0 and 1");
    check L131() else D15();
  L133():
    y1 = ld y;
    check L135() else D16();
  L134():
    r35 = dyn base7(<sym y>);
    goto L23(r35);
  D9():
    deopt 40 [c26, r25];
  D15():
    deopt 65 [r33];
  D16():
    deopt 69 [y1];
  L18(c41, c42, r28):
    r30 = `!`(r28);
    c43 = `as.logical`(r30);
    c44 = `||`(c42, c43);
    goto L17(c41, c44);
  L19(c48, c49):
    c56 = `as.logical`(c49);
    if c56 then L20(c48, c56) else L125();
  L24():
    deparse3 = ldf deparse1;
    check L158() else D28();
  L30():
    x7 = ld x;
    check L169() else D35();
  L115():
    goto L16(c26, r25);
  L117():
    conf_level3 = ld `conf.level`;
    check L119() else D10();
  L118():
    r27 = dyn base6(<sym conf.level>);
    goto L18(c31, c32, r27);
  L122():
    conf_level5 = ld `conf.level`;
    check L123() else D12();
  L131():
    goto L22();
  L135():
    y2 = force? y1;
    checkMissing(y2);
    c69 = `==`(y2, NULL);
    goto L23(c69);
  L136():
    paste = ldf paste;
    check L137() else D17();
  D10():
    deopt 45 [c31, c32, conf_level3];
  D12():
    deopt 51 [c33, c47, conf_level5];
  D17():
    deopt 74 [];
  D28():
    deopt 112 [];
  D35():
    deopt 135 [x7];
  L20(c57, c58):
    c65 = `as.logical`(c58);
    c66 = `&&`(c57, c65);
    goto L15(c66);
  L119():
    conf_level4 = force? conf_level3;
    checkMissing(conf_level4);
    is_finite = ldf `is.finite` in base;
    r29 = dyn is_finite(conf_level4);
    check L120() else D11();
  L123():
    conf_level6 = force? conf_level5;
    checkMissing(conf_level6);
    r31 = `<`(conf_level6, 0.0);
    c52 = `as.logical`(r31);
    c53 = `||`(c47, c52);
    goto L19(c33, c53);
  L125():
    conf_level7 = ld `conf.level`;
    check L126() else D13();
  L137():
    p3 = prom<V +>{
      deparse1 = ldf deparse1;
      p2 = prom<V +>{
        sym8 = ldf substitute;
        base8 = ldf substitute in base;
        guard8 = `==`.4(sym8, base8);
        if guard8 then L1() else L2();
      L0(r39):
        return r39;
      L1():
        substitute = ldf substitute in base;
        r40 = dyn substitute(<sym x>);
        goto L0(r40);
      L2():
        r38 = dyn base8(<sym x>);
        goto L0(r38);
      };
      r42 = dyn deparse1(p2);
      return r42;
    };
    p5 = prom<V +>{
      deparse2 = ldf deparse1;
      p4 = prom<V +>{
        sym9 = ldf substitute;
        base9 = ldf substitute in base;
        guard9 = `==`.4(sym9, base9);
        if guard9 then L1() else L2();
      L0(r45):
        return r45;
      L1():
        substitute1 = ldf substitute in base;
        r46 = dyn substitute1(<sym y>);
        goto L0(r46);
      L2():
        r44 = dyn base9(<sym y>);
        goto L0(r44);
      };
      r48 = dyn deparse2(p4);
      return r48;
    };
    r50 = dyn paste(p3, "and", p5);
    check L138() else D18();
  L158():
    p8 = prom<V +>{
      sym12 = ldf substitute;
      base12 = ldf substitute in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L1() else L2();
    L0(r65):
      return r65;
    L1():
      substitute2 = ldf substitute in base;
      r66 = dyn substitute2(<sym x>);
      goto L0(r66);
    L2():
      r64 = dyn base12(<sym x>);
      goto L0(r64);
    };
    r68 = dyn deparse3(p8);
    check L159() else D29();
  L169():
    x8 = force? x7;
    checkMissing(x8);
    c74 = `is.object`(x8);
    if c74 then L170() else L171(x8);
  D11():
    deopt 48 [c31, c32, r29];
  D13():
    deopt 56 [c48, c56, conf_level7];
  D18():
    deopt 78 [r50];
  D29():
    deopt 114 [r68];
  L34(dx4):
    st x = dx4;
    paired5 = ld paired;
    check L174() else D37();
  L120():
    goto L18(c31, c32, r29);
  L126():
    conf_level8 = force? conf_level7;
    checkMissing(conf_level8);
    r32 = `>`(conf_level8, 1.0);
    c61 = `as.logical`(r32);
    c62 = `||`(c56, c61);
    goto L20(c48, c62);
  L138():
    st dname = r50;
    paired1 = ld paired;
    check L139() else D19();
  L159():
    st dname = r68;
    paired3 = ld paired;
    check L160() else D30();
  L170():
    dr2 = tryDispatchBuiltin.1("[", x8);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L172() else L171(dr2);
  L171(x10):
    xok = ld xok;
    check L173() else D36();
  D19():
    deopt 80 [paired1];
  D30():
    deopt 116 [paired3];
  D36():
    deopt 137 [x10, xok];
  D37():
    deopt 141 [paired5];
  L139():
    paired2 = force? paired1;
    checkMissing(paired2);
    c71 = `as.logical`(paired2);
    if c71 then L140() else L25();
  L160():
    paired4 = force? paired3;
    checkMissing(paired4);
    c73 = `as.logical`(paired4);
    if c73 then L161() else L31();
  L172():
    dx3 = getTryDispatchBuiltinValue(dr2);
    goto L34(dx3);
  L173():
    xok1 = force? xok;
    __1 = ldf `[` in base;
    r75 = dyn __1(x10, xok1);
    goto L34(r75);
  L174():
    paired6 = force? paired5;
    checkMissing(paired6);
    c75 = `as.logical`(paired6);
    if c75 then L175() else L35();
  L25():
    sym10 = ldf `is.na`;
    base10 = ldf `is.na` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L144() else L145();
  L26():
    y7 = ld y;
    check L152() else D26();
  L31():
    goto L32();
  L32():
    sym13 = ldf `is.na`;
    base13 = ldf `is.na` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L165() else L166();
  L35():
    goto L36();
  L36():
    sym14 = ldf length;
    base14 = ldf length in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L179() else L180();
  L140():
    complete_cases = ldf `complete.cases`;
    check L141() else D20();
  L161():
    stop2 = ldf stop;
    check L162() else D31();
  L175():
    x11 = ld x;
    check L176() else D38();
  D20():
    deopt 83 [];
  D26():
    deopt 105 [y7];
  D31():
    deopt 119 [];
  D38():
    deopt 143 [x11];
  L27(r56):
    r58 = `!`(r56);
    st yok = r58;
    sym11 = ldf `is.na`;
    base11 = ldf `is.na` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L148() else L149();
  L33(r72):
    r74 = `!`(r72);
    st xok = r74;
    st yok = NULL;
    goto L30();
  L37(r79):
    st nx = r79;
    mean = ldf mean;
    check L183() else D42();
  L141():
    p6 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p7 = prom<V +>{
      y3 = ld y;
      y4 = force? y3;
      checkMissing(y4);
      return y4;
    };
    r53 = dyn complete_cases(p6, p7);
    check L142() else D21();
  L144():
    y5 = ld y;
    check L146() else D22();
  L145():
    r55 = dyn base10(<sym y>);
    goto L27(r55);
  L152():
    y8 = force? y7;
    checkMissing(y8);
    c72 = `is.object`(y8);
    if c72 then L153() else L154(y8);
  L162():
    r69 = dyn stop2("'y' is missing for paired test");
    check L163() else D32();
  L165():
    x5 = ld x;
    check L167() else D33();
  L166():
    r71 = dyn base13(<sym x>);
    goto L33(r71);
  L176():
    x12 = force? x11;
    checkMissing(x12);
    y11 = ld y;
    check L177() else D39();
  L179():
    x13 = ld x;
    check L181() else D40();
  L180():
    r78 = dyn base14(<sym x>);
    goto L37(r78);
  D21():
    deopt 86 [r53];
  D22():
    deopt 91 [y5];
  D32():
    deopt 121 [r69];
  D33():
    deopt 126 [x5];
  D39():
    deopt 144 [x12, y11];
  D40():
    deopt 155 [x13];
  D42():
    deopt 161 [];
  L28(r60):
    r62 = `!`(r60);
    st xok = r62;
    goto L26();
  L29(dx1):
    st y = dx1;
    goto L30();
  L142():
    st yok = r53;
    st xok = r53;
    goto L26();
  L146():
    y6 = force? y5;
    checkMissing(y6);
    is_na1 = ldf `is.na` in base;
    r57 = dyn is_na1(y6);
    check L147() else D23();
  L148():
    x3 = ld x;
    check L150() else D24();
  L149():
    r59 = dyn base11(<sym x>);
    goto L28(r59);
  L153():
    dr = tryDispatchBuiltin.1("[", y8);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L155() else L154(dr);
  L154(y10):
    yok = ld yok;
    check L156() else D27();
  L163():
    goto L32();
  L167():
    x6 = force? x5;
    checkMissing(x6);
    is_na3 = ldf `is.na` in base;
    r73 = dyn is_na3(x6);
    check L168() else D34();
  L177():
    y12 = force? y11;
    checkMissing(y12);
    r76 = `-`(x12, y12);
    st x = r76;
    st y = NULL;
    goto L36();
  L181():
    x14 = force? x13;
    checkMissing(x14);
    length2 = ldf length in base;
    r80 = dyn length2(x14);
    check L182() else D41();
  L183():
    p9 = prom<V +>{
      x15 = ld x;
      x16 = force? x15;
      checkMissing(x16);
      return x16;
    };
    r82 = dyn mean(p9);
    check L184() else D43();
  D23():
    deopt 94 [r57];
  D24():
    deopt 99 [x3];
  D27():
    deopt 107 [y10, yok];
  D34():
    deopt 129 [r73];
  D41():
    deopt 158 [r80];
  D43():
    deopt 163 [r82];
  L147():
    goto L27(r57);
  L150():
    x4 = force? x3;
    checkMissing(x4);
    is_na2 = ldf `is.na` in base;
    r61 = dyn is_na2(x4);
    check L151() else D25();
  L155():
    dx = getTryDispatchBuiltinValue(dr);
    goto L29(dx);
  L156():
    yok1 = force? yok;
    __ = ldf `[` in base;
    r63 = dyn __(y10, yok1);
    goto L29(r63);
  L168():
    goto L33(r73);
  L182():
    goto L37(r80);
  L184():
    st mx = r82;
    var = ldf var;
    check L185() else D44();
  D25():
    deopt 102 [r61];
  D44():
    deopt 166 [];
  L151():
    goto L28(r61);
  L185():
    p10 = prom<V +>{
      x17 = ld x;
      x18 = force? x17;
      checkMissing(x18);
      return x18;
    };
    r84 = dyn var(p10);
    check L186() else D45();
  D45():
    deopt 168 [r84];
  L186():
    st vx = r84;
    sym15 = ldf `is.null`;
    base15 = ldf `is.null` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L187() else L188();
  L38(r86):
    c77 = `as.logical`(r86);
    if c77 then L190() else L39();
  L187():
    y13 = ld y;
    check L189() else D46();
  L188():
    r85 = dyn base15(<sym y>);
    goto L38(r85);
  D46():
    deopt 171 [y13];
  L39():
    sym18 = ldf length;
    base18 = ldf length in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L224() else L225();
  L48():
    alternative3 = ld alternative;
    check L341() else D134();
  L189():
    y14 = force? y13;
    checkMissing(y14);
    c76 = `==`(y14, NULL);
    goto L38(c76);
  L190():
    nx = ld nx;
    check L191() else D47();
  D47():
    deopt 174 [nx];
  D134():
    deopt 475 [alternative3];
  L49(r119):
    st ny = r119;
    nx6 = ld nx;
    check L228() else D67();
  L191():
    nx1 = force? nx;
    checkMissing(nx1);
    r87 = `<`(nx1, 2.0);
    c78 = `as.logical`(r87);
    if c78 then L192() else L40();
  L224():
    y15 = ld y;
    check L226() else D65();
  L225():
    r118 = dyn base18(<sym y>);
    goto L49(r118);
  L341():
    alternative4 = force? alternative3;
    checkMissing(alternative4);
    r224 = `==`(alternative4, "less");
    c130 = `as.logical`(r224);
    if c130 then L342() else L78();
  D65():
    deopt 237 [y15];
  D67():
    deopt 242 [nx6];
  L40():
    goto L41();
  L41():
    nx2 = ld nx;
    check L196() else D50();
  L78():
    alternative5 = ld alternative;
    check L352() else D141();
  L80():
    mu9 = ld mu;
    check L374() else D157();
  L192():
    stop3 = ldf stop;
    check L193() else D48();
  L226():
    y16 = force? y15;
    checkMissing(y16);
    length3 = ldf length in base;
    r120 = dyn length3(y16);
    check L227() else D66();
  L228():
    nx7 = force? nx6;
    checkMissing(nx7);
    r121 = `<`(nx7, 1.0);
    c83 = `as.logical`(r121);
    if c83 then L50(c83) else L229();
  L342():
    pt = ldf pt;
    check L343() else D135();
  D48():
    deopt 179 [];
  D50():
    deopt 184 [nx2];
  D66():
    deopt 240 [r120];
  D135():
    deopt 480 [];
  D141():
    deopt 499 [alternative5];
  D157():
    deopt 555 [mu9];
  L50(c84):
    c98 = `as.logical`(c84);
    if c98 then L235() else L52();
  L193():
    r88 = dyn stop3("not enough 'x' observations");
    check L194() else D49();
  L196():
    nx3 = force? nx2;
    checkMissing(nx3);
    r90 = `-`(nx3, 1.0);
    st df = r90;
    sym16 = ldf sqrt;
    base16 = ldf sqrt in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L197() else L198();
  L227():
    goto L49(r120);
  L229():
    var_equal1 = ld `var.equal`;
    check L230() else D68();
  L343():
    p16 = prom<V +>{
      tstat = ld tstat;
      tstat1 = force? tstat;
      checkMissing(tstat1);
      return tstat1;
    };
    p17 = prom<V +>{
      df2 = ld df;
      df3 = force? df2;
      checkMissing(df3);
      return df3;
    };
    r227 = dyn pt(p16, p17);
    check L344() else D136();
  L352():
    alternative6 = force? alternative5;
    checkMissing(alternative6);
    r236 = `==`(alternative6, "greater");
    c132 = `as.logical`(r236);
    if c132 then L353() else L81();
  L374():
    mu10 = force? mu9;
    checkMissing(mu10);
    cint4 = ld cint;
    check L375() else D158();
  D49():
    deopt 181 [r88];
  D68():
    deopt 246 [c83, var_equal1];
  D136():
    deopt 483 [r227];
  D158():
    deopt 556 [mu10, cint4];
  L42(r92):
    st stderr = r92;
    stderr = ld stderr;
    check L201() else D53();
  L52():
    goto L53();
  L53():
    ny = ld ny;
    check L239() else D72();
  L81():
    pt2 = ldf pt;
    check L363() else D148();
  L194():
    goto L41();
  L197():
    vx = ld vx;
    check L199() else D51();
  L198():
    r91 = dyn base16(<lang `/`(vx, nx)>);
    goto L42(r91);
  L230():
    var_equal2 = force? var_equal1;
    checkMissing(var_equal2);
    r122 = `!`(var_equal2);
    c86 = `as.logical`(r122);
    if c86 then L231() else L51(c83, c86);
  L235():
    stop5 = ldf stop;
    check L236() else D70();
  L344():
    st pval = r227;
    sym28 = ldf c;
    base28 = ldf c in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L345() else L346();
  L353():
    pt1 = ldf pt;
    check L354() else D142();
  L375():
    cint5 = force? cint4;
    checkMissing(cint5);
    stderr30 = ld stderr;
    check L376() else D159();
  D51():
    deopt 190 [vx];
  D53():
    deopt 196 [stderr];
  D70():
    deopt 256 [];
  D72():
    deopt 261 [ny];
  D142():
    deopt 504 [];
  D148():
    deopt 526 [2.0];
  D159():
    deopt 557 [mu10, cint5, stderr30];
  L51(c89, c90):
    c95 = `as.logical`(c90);
    c96 = `||`(c89, c95);
    goto L50(c96);
  L79(r229):
    st cint = r229;
    goto L80();
  L199():
    vx1 = force? vx;
    checkMissing(vx1);
    nx4 = ld nx;
    check L200() else D52();
  L201():
    stderr1 = force? stderr;
    checkMissing(stderr1);
    _Machine = ld `.Machine`;
    check L202() else D54();
  L231():
    nx8 = ld nx;
    check L232() else D69();
  L236():
    r124 = dyn stop5("not enough 'x' observations");
    check L237() else D71();
  L239():
    ny1 = force? ny;
    checkMissing(ny1);
    r126 = `<`(ny1, 1.0);
    c99 = `as.logical`(r126);
    if c99 then L54(c99) else L240();
  L345():
    tstat2 = ld tstat;
    check L347() else D137();
  L346():
    r228 = dyn base28(<lang `-`(+Infinity)>, <lang `+`(tstat, qt(conf.level, df))>);
    goto L79(r228);
  L354():
    p20 = prom<V +>{
      tstat4 = ld tstat;
      tstat5 = force? tstat4;
      checkMissing(tstat5);
      return tstat5;
    };
    p21 = prom<V +>{
      df6 = ld df;
      df7 = force? df6;
      checkMissing(df7);
      return df7;
    };
    r239 = dyn pt1[, , `lower.tail`](p20, p21, FALSE);
    check L355() else D143();
  L363():
    p24 = prom<V +>{
      sym30 = ldf abs;
      base30 = ldf abs in base;
      guard30 = `==`.4(sym30, base30);
      if guard30 then L1() else L2();
    L0(r248):
      r250 = `-`(<missing>, r248);
      return r250;
    L1():
      tstat8 = ld tstat;
      tstat9 = force? tstat8;
      checkMissing(tstat9);
      abs3 = ldf abs in base;
      r249 = dyn abs3(tstat9);
      goto L0(r249);
    L2():
      r247 = dyn base30(<sym tstat>);
      goto L0(r247);
    };
    p25 = prom<V +>{
      df10 = ld df;
      df11 = force? df10;
      checkMissing(df11);
      return df11;
    };
    r253 = dyn pt2(p24, p25);
    check L364() else D149();
  L376():
    stderr31 = force? stderr30;
    checkMissing(stderr31);
    r266 = `*`(cint5, stderr31);
    r267 = `+`(mu10, r266);
    st cint = r267;
    l1 = ld tstat;
    names__1 = ldf `names<-`;
    check L377() else D160();
  D52():
    deopt 191 [vx1, nx4];
  D54():
    deopt 198 [stderr1, 10.0, _Machine];
  D69():
    deopt 249 [c83, c86, nx8];
  D71():
    deopt 258 [r124];
  D137():
    deopt 489 [tstat2];
  D143():
    deopt 509 [r239];
  D149():
    deopt 529 [2.0, r253];
  D160():
    deopt 565 ["t", l1, "t"];
  L54(c100):
    c114 = `as.logical`(c100);
    if c114 then L246() else L56();
  L200():
    nx5 = force? nx4;
    checkMissing(nx5);
    r93 = `/`(vx1, nx5);
    r94 = sqrt(r93);
    goto L42(r94);
  L202():
    _Machine1 = force? _Machine;
    checkMissing(_Machine1);
    c79 = `is.object`(_Machine1);
    if c79 then L204() else L205(stderr1, 10.0, _Machine1);
  L232():
    nx9 = force? nx8;
    checkMissing(nx9);
    r123 = `<`(nx9, 2.0);
    c91 = `as.logical`(r123);
    c92 = `&&`(c86, c91);
    goto L51(c83, c92);
  L237():
    goto L53();
  L240():
    var_equal3 = ld `var.equal`;
    check L241() else D73();
  L347():
    tstat3 = force? tstat2;
    checkMissing(tstat3);
    qt = ldf qt;
    check L348() else D138();
  L355():
    st pval = r239;
    sym29 = ldf c;
    base29 = ldf c in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L356() else L357();
  L364():
    r254 = `*`(2.0, r253);
    st pval = r254;
    conf_level13 = ld `conf.level`;
    check L365() else D150();
  L377():
    r268 = dyn names__1(l1, NULL, "t");
    check L378() else D161();
  D73():
    deopt 265 [c99, var_equal3];
  D138():
    deopt 491 [tstat3];
  D150():
    deopt 533 [1.0, conf_level13];
  D161():
    deopt 567 ["t", r268];
  L56():
    goto L57();
  L57():
    var_equal5 = ld `var.equal`;
    check L250() else D77();
  L82(r241):
    st cint = r241;
    goto L80();
  L203(stderr5, r98, dx6):
    r100 = `*`(r98, dx6);
    sym17 = ldf abs;
    base17 = ldf abs in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L207() else L208();
  L204():
    dr4 = tryDispatchBuiltin.1("$", _Machine1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L206() else L205(stderr1, 10.0, dr4);
  L205(stderr3, r96, _Machine3):
    r99 = `$`(_Machine3, <sym double.eps>);
    goto L203(stderr3, r96, r99);
  L241():
    var_equal4 = force? var_equal3;
    checkMissing(var_equal4);
    r127 = `!`(var_equal4);
    c102 = `as.logical`(r127);
    if c102 then L242() else L55(c99, c102);
  L246():
    stop6 = ldf stop;
    check L247() else D75();
  L348():
    p18 = prom<V +>{
      conf_level9 = ld `conf.level`;
      conf_level10 = force? conf_level9;
      checkMissing(conf_level10);
      return conf_level10;
    };
    p19 = prom<V +>{
      df4 = ld df;
      df5 = force? df4;
      checkMissing(df5);
      return df5;
    };
    r232 = dyn qt(p18, p19);
    check L349() else D139();
  L356():
    tstat6 = ld tstat;
    check L358() else D144();
  L357():
    r240 = dyn base29(<lang `-`(tstat, qt(conf.level, df))>, +Infinity);
    goto L82(r240);
  L365():
    conf_level14 = force? conf_level13;
    checkMissing(conf_level14);
    r255 = `-`(1.0, conf_level14);
    st alpha = r255;
    qt2 = ldf qt;
    check L366() else D151();
  L378():
    st tstat = r268;
    l2 = ld df;
    names__2 = ldf `names<-`;
    check L379() else D162();
  D75():
    deopt 275 [];
  D77():
    deopt 280 [var_equal5];
  D139():
    deopt 494 [tstat3, r232];
  D144():
    deopt 513 [tstat6];
  D151():
    deopt 538 [];
  D162():
    deopt 572 ["df", l2, "df"];
  L43(stderr8, r104, r105):
    r107 = `*`(r104, r105);
    r108 = `<`(stderr8, r107);
    c80 = `as.logical`(r108);
    if c80 then L211() else L44();
  L55(c105, c106):
    c111 = `as.logical`(c106);
    c112 = `||`(c105, c111);
    goto L54(c112);
  L206():
    dx5 = getTryDispatchBuiltinValue(dr4);
    goto L203(stderr1, 10.0, dx5);
  L207():
    mx = ld mx;
    check L209() else D55();
  L208():
    r103 = dyn base17(<sym mx>);
    goto L43(stderr5, r100, r103);
  L242():
    ny2 = ld ny;
    check L243() else D74();
  L247():
    r129 = dyn stop6("not enough 'y' observations");
    check L248() else D76();
  L250():
    var_equal6 = force? var_equal5;
    checkMissing(var_equal6);
    c115 = `as.logical`(var_equal6);
    if c115 then L251() else L58(c115);
  L349():
    r233 = `+`(tstat3, r232);
    c131 = ldf c in base;
    r234 = dyn c131(-Infinity, r233);
    check L350() else D140();
  L358():
    tstat7 = force? tstat6;
    checkMissing(tstat7);
    qt1 = ldf qt;
    check L359() else D145();
  L366():
    p26 = prom<V +>{
      alpha = ld alpha;
      alpha1 = force? alpha;
      checkMissing(alpha1);
      r256 = `/`(alpha1, 2.0);
      r257 = `-`(1.0, r256);
      return r257;
    };
    p27 = prom<V +>{
      df12 = ld df;
      df13 = force? df12;
      checkMissing(df13);
      return df13;
    };
    r260 = dyn qt2(p26, p27);
    check L367() else D152();
  L379():
    r269 = dyn names__2(l2, NULL, "df");
    check L380() else D163();
  D55():
    deopt 203 [stderr5, r100, mx];
  D74():
    deopt 268 [c99, c102, ny2];
  D76():
    deopt 277 [r129];
  D140():
    deopt 497 [r234];
  D145():
    deopt 515 [tstat7];
  D152():
    deopt 541 [r260];
  D163():
    deopt 574 ["df", r269];
  L44():
    goto L45();
  L45():
    mx2 = ld mx;
    check L215() else D59();
  L58(c117):
    c121 = `as.logical`(c117);
    if c121 then L255() else L59();
  L209():
    mx1 = force? mx;
    checkMissing(mx1);
    abs = ldf abs in base;
    r106 = dyn abs(mx1);
    check L210() else D56();
  L211():
    stop4 = ldf stop;
    check L212() else D57();
  L243():
    ny3 = force? ny2;
    checkMissing(ny3);
    r128 = `<`(ny3, 2.0);
    c107 = `as.logical`(r128);
    c108 = `&&`(c102, c107);
    goto L55(c99, c108);
  L248():
    goto L57();
  L251():
    nx10 = ld nx;
    check L252() else D78();
  L350():
    goto L79(r234);
  L359():
    p22 = prom<V +>{
      conf_level11 = ld `conf.level`;
      conf_level12 = force? conf_level11;
      checkMissing(conf_level12);
      return conf_level12;
    };
    p23 = prom<V +>{
      df8 = ld df;
      df9 = force? df8;
      checkMissing(df9);
      return df9;
    };
    r244 = dyn qt1(p22, p23);
    check L360() else D146();
  L367():
    st cint = r260;
    tstat10 = ld tstat;
    check L368() else D153();
  L380():
    st df = r269;
    paired11 = ld paired;
    check L381() else D164();
  D56():
    deopt 206 [stderr5, r100, r106];
  D57():
    deopt 210 [];
  D59():
    deopt 215 [mx2];
  D78():
    deopt 282 [c115, nx10];
  D146():
    deopt 518 [tstat7, r244];
  D153():
    deopt 543 [tstat10];
  D164():
    deopt 576 [paired11];
  L59():
    goto L60();
  L60():
    mean1 = ldf mean;
    check L259() else D82();
  L210():
    goto L43(stderr5, r100, r106);
  L212():
    r109 = dyn stop4("data are essentially constant");
    check L213() else D58();
  L215():
    mx3 = force? mx2;
    checkMissing(mx3);
    mu5 = ld mu;
    check L216() else D60();
  L252():
    nx11 = force? nx10;
    checkMissing(nx11);
    ny4 = ld ny;
    check L253() else D79();
  L255():
    stop7 = ldf stop;
    check L256() else D80();
  L360():
    r245 = `-`(tstat7, r244);
    c133 = ldf c in base;
    r246 = dyn c133(r245, +Infinity);
    check L361() else D147();
  L368():
    tstat11 = force? tstat10;
    checkMissing(tstat11);
    sym31 = ldf c;
    base31 = ldf c in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L369() else L370();
  L381():
    paired12 = force? paired11;
    checkMissing(paired12);
    c135 = `as.logical`(paired12);
    if c135 then L382() else L84();
  D58():
    deopt 212 [r109];
  D60():
    deopt 216 [mx3, mu5];
  D79():
    deopt 283 [c115, nx11, ny4];
  D80():
    deopt 290 [];
  D82():
    deopt 296 [];
  D147():
    deopt 522 [r246];
  L83(tstat14, r262):
    r265 = `+`(tstat14, r262);
    st cint = r265;
    goto L80();
  L84():
    sym32 = ldf `is.null`;
    base32 = ldf `is.null` in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L384() else L385();
  L85(r270):
    l3 = ld mu;
    names__3 = ldf `names<-`;
    check L389() else D166();
  L213():
    goto L45();
  L216():
    mu6 = force? mu5;
    checkMissing(mu6);
    r111 = `-`(mx3, mu6);
    stderr9 = ld stderr;
    check L217() else D61();
  L253():
    ny5 = force? ny4;
    checkMissing(ny5);
    r131 = `+`(nx11, ny5);
    r132 = `<`(r131, 3.0);
    c118 = `as.logical`(r132);
    c119 = `&&`(c115, c118);
    goto L58(c119);
  L256():
    r133 = dyn stop7("not enough observations");
    check L257() else D81();
  L259():
    p13 = prom<V +>{
      y17 = ld y;
      y18 = force? y17;
      checkMissing(y18);
      return y18;
    };
    r136 = dyn mean1(p13);
    check L260() else D83();
  L361():
    goto L82(r246);
  L369():
    cint = ld cint;
    check L371() else D154();
  L370():
    r261 = dyn base31(<lang `-`(cint)>, <sym cint>);
    goto L83(tstat11, r261);
  L382():
    goto L85("mean difference");
  D61():
    deopt 218 [r111, stderr9];
  D81():
    deopt 292 [r133];
  D83():
    deopt 298 [r136];
  D154():
    deopt 546 [tstat11, cint];
  D166():
    deopt 590 [r270, l3, r270];
  L86(r272):
    r273 = `!`(r272);
    c137 = `as.logical`(r273);
    if c137 then L387() else L87();
  L217():
    stderr10 = force? stderr9;
    checkMissing(stderr10);
    r112 = `/`(r111, stderr10);
    st tstat = r112;
    paired7 = ld paired;
    check L218() else D62();
  L257():
    goto L60();
  L260():
    st my = r136;
    var1 = ldf var;
    check L261() else D84();
  L371():
    cint1 = force? cint;
    checkMissing(cint1);
    r263 = `-`(<missing>, cint1);
    cint2 = ld cint;
    check L372() else D155();
  L384():
    y21 = ld y;
    check L386() else D165();
  L385():
    r271 = dyn base32(<sym y>);
    goto L86(r271);
  L389():
    r274 = dyn names__3(l3, NULL, r270);
    check L390() else D167();
  D62():
    deopt 222 [paired7];
  D84():
    deopt 301 [];
  D155():
    deopt 549 [tstat11, cint2];
  D165():
    deopt 581 [y21];
  D167():
    deopt 592 [r270, r274];
  L87():
    goto L85("mean");
  L218():
    paired8 = force? paired7;
    checkMissing(paired8);
    c81 = `as.logical`(paired8);
    if c81 then L219() else L46();
  L261():
    p14 = prom<V +>{
      y19 = ld y;
      y20 = force? y19;
      checkMissing(y20);
      return y20;
    };
    r138 = dyn var1(p14);
    check L262() else D85();
  L372():
    cint3 = force? cint2;
    checkMissing(cint3);
    c134 = ldf c in base;
    r264 = dyn c134(r263, cint3);
    check L373() else D156();
  L386():
    y22 = force? y21;
    checkMissing(y22);
    c136 = `==`(y22, NULL);
    goto L86(c136);
  L387():
    goto L85("difference in means");
  L390():
    st mu = r274;
    conf_level15 = ld `conf.level`;
    check L391() else D168();
  D85():
    deopt 303 [r138];
  D156():
    deopt 552 [tstat11, r264];
  D168():
    deopt 594 [conf_level15];
  L46():
    goto L47("One Sample t-test");
  L47(r113):
    st method = r113;
    setNames = ldf setNames;
    check L221() else D63();
  L219():
    goto L47("Paired t-test");
  L262():
    st vy = r138;
    paste1 = ldf paste;
    check L263() else D86();
  L373():
    goto L83(tstat11, r264);
  L391():
    conf_level16 = force? conf_level15;
    checkMissing(conf_level16);
    l4 = ld cint;
    attr__ = ldf `attr<-`;
    check L392() else D169();
  D63():
    deopt 230 [];
  D86():
    deopt 306 [];
  D169():
    deopt 597 [conf_level16, l4, conf_level16];
  L221():
    p11 = prom<V +>{
      mx4 = ld mx;
      mx5 = force? mx4;
      checkMissing(mx5);
      return mx5;
    };
    p12 = prom<V +>{
      paired9 = ld paired;
      paired10 = force? paired9;
      checkMissing(paired10);
      c82 = `as.logical`(paired10);
      if c82 then L1() else L0();
    L0():
      return "mean of x";
    L1():
      return "mean difference";
    };
    r116 = dyn setNames(p11, p12);
    check L222() else D64();
  L263():
    p15 = prom<V +>{
      var_equal7 = ld `var.equal`;
      var_equal8 = force? var_equal7;
      checkMissing(var_equal8);
      r139 = `!`(var_equal8);
      c122 = `as.logical`(r139);
      if c122 then L1() else L0();
    L0():
      invisible.0();
      return NULL;
    L1():
      return "Welch";
    };
    r141 = dyn paste1(p15, "Two Sample t-test");
    check L264() else D87();
  L392():
    r275 = dyn attr__(l4, NULL, "conf.level", conf_level16);
    check L393() else D170();
  D64():
    deopt 233 [r116];
  D87():
    deopt 309 [r141];
  D170():
    deopt 600 [conf_level16, r275];
  L222():
    st estimate = r116;
    goto L48();
  L264():
    st method = r141;
    sym19 = ldf c;
    base19 = ldf c in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L265() else L266();
  L393():
    st cint = r275;
    sym33 = ldf list;
    base33 = ldf list in base;
    guard33 = `==`.4(sym33, base33);
    if guard33 then L394() else L395();
  L61(r143):
    st estimate = r143;
    sym20 = ldf c;
    base20 = ldf c in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L270() else L271();
  L88(r277):
    st rval = r277;
    l5 = ld rval;
    class__ = ldf `class<-`;
    check L407() else D182();
  L265():
    mx6 = ld mx;
    check L267() else D88();
  L266():
    r142 = dyn base19(<sym mx>, <sym my>);
    goto L61(r142);
  L394():
    tstat15 = ld tstat;
    check L396() else D171();
  L395():
    r276 = dyn base33[statistic, parameter, `p.value`, `conf.int`, estimate, `null.value`, stderr, alternative, method, `data.name`](<sym tstat>, <sym df>, <sym pval>, <sym cint>, <sym estimate>, <sym mu>, <sym stderr>, <sym alternative>, <sym method>, <sym dname>);
    goto L88(r276);
  D88():
    deopt 313 [mx6];
  D171():
    deopt 604 [tstat15];
  D182():
    deopt 640 ["htest", l5, "htest"];
  L62(r146):
    l = ld estimate;
    names__ = ldf `names<-`;
    check L273() else D92();
  L267():
    mx7 = force? mx6;
    checkMissing(mx7);
    my = ld my;
    check L268() else D89();
  L270():
    c124 = ldf c in base;
    r147 = dyn c124("mean of x", "mean of y");
    check L272() else D91();
  L271():
    r145 = dyn base20("mean of x", "mean of y");
    goto L62(r145);
  L396():
    tstat16 = force? tstat15;
    checkMissing(tstat16);
    df14 = ld df;
    check L397() else D172();
  L407():
    r279 = dyn class__(l5, NULL, "htest");
    check L408() else D183();
  D89():
    deopt 315 [my];
  D91():
    deopt 325 [r147];
  D92():
    deopt 327 [r146, l, r146];
  D172():
    deopt 607 [df14];
  D183():
    deopt 642 ["htest", r279];
  L268():
    my1 = force? my;
    checkMissing(my1);
    c123 = ldf c in base;
    r144 = dyn c123(mx7, my1);
    check L269() else D90();
  L272():
    goto L62(r147);
  L273():
    r148 = dyn names__(l, NULL, r146);
    check L274() else D93();
  L397():
    df15 = force? df14;
    checkMissing(df15);
    pval = ld pval;
    check L398() else D173();
  L408():
    st rval = r279;
    rval = ld rval;
    check L409() else D184();
  D90():
    deopt 318 [r144];
  D93():
    deopt 329 [r146, r148];
  D173():
    deopt 610 [pval];
  D184():
    deopt 644 [rval];
  L269():
    goto L61(r144);
  L274():
    st estimate = r148;
    var_equal9 = ld `var.equal`;
    check L275() else D94();
  L398():
    pval1 = force? pval;
    checkMissing(pval1);
    cint6 = ld cint;
    check L399() else D174();
  L409():
    rval1 = force? rval;
    checkMissing(rval1);
    popenv;
    return rval1;
  D94():
    deopt 331 [var_equal9];
  D174():
    deopt 613 [cint6];
  L275():
    var_equal10 = force? var_equal9;
    checkMissing(var_equal10);
    c125 = `as.logical`(var_equal10);
    if c125 then L276() else L63();
  L399():
    cint7 = force? cint6;
    checkMissing(cint7);
    estimate = ld estimate;
    check L400() else D175();
  D175():
    deopt 616 [estimate];
  L63():
    sym22 = ldf sqrt;
    base22 = ldf sqrt in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L299() else L300();
  L69():
    stderr13 = ld stderr;
    check L316() else D121();
  L276():
    nx12 = ld nx;
    check L277() else D95();
  L400():
    estimate1 = force? estimate;
    checkMissing(estimate1);
    mu11 = ld mu;
    check L401() else D176();
  D95():
    deopt 333 [nx12];
  D121():
    deopt 437 [stderr13];
  D176():
    deopt 619 [mu11];
  L70(r171):
    st stderrx = r171;
    sym23 = ldf sqrt;
    base23 = ldf sqrt in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L303() else L304();
  L277():
    nx13 = force? nx12;
    checkMissing(nx13);
    ny6 = ld ny;
    check L278() else D96();
  L299():
    vx4 = ld vx;
    check L301() else D110();
  L300():
    r170 = dyn base22(<lang `/`(vx, nx)>);
    goto L70(r170);
  L316():
    stderr14 = force? stderr13;
    checkMissing(stderr14);
    _Machine4 = ld `.Machine`;
    check L317() else D122();
  L401():
    mu12 = force? mu11;
    checkMissing(mu12);
    stderr32 = ld stderr;
    check L402() else D177();
  D96():
    deopt 334 [nx13, ny6];
  D110():
    deopt 392 [vx4];
  D122():
    deopt 439 [stderr14, 10.0, _Machine4];
  D177():
    deopt 622 [stderr32];
  L71(r175):
    st stderry = r175;
    sym24 = ldf sqrt;
    base24 = ldf sqrt in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L307() else L308();
  L278():
    ny7 = force? ny6;
    checkMissing(ny7);
    r149 = `+`(nx13, ny7);
    r150 = `-`(r149, 2.0);
    st df = r150;
    st v = 0.0;
    nx14 = ld nx;
    check L279() else D97();
  L301():
    vx5 = force? vx4;
    checkMissing(vx5);
    nx20 = ld nx;
    check L302() else D111();
  L303():
    vy2 = ld vy;
    check L305() else D112();
  L304():
    r174 = dyn base23(<lang `/`(vy, ny)>);
    goto L71(r174);
  L317():
    _Machine5 = force? _Machine4;
    checkMissing(_Machine5);
    c128 = `is.object`(_Machine5);
    if c128 then L319() else L320(stderr14, 10.0, _Machine5);
  L402():
    stderr33 = force? stderr32;
    checkMissing(stderr33);
    alternative7 = ld alternative;
    check L403() else D178();
  D97():
    deopt 343 [nx14];
  D111():
    deopt 393 [vx5, nx20];
  D112():
    deopt 399 [vy2];
  D178():
    deopt 625 [alternative7];
  L72(r179):
    st stderr = r179;
    stderr11 = ld stderr;
    check L311() else D116();
  L279():
    nx15 = force? nx14;
    checkMissing(nx15);
    r151 = `>`(nx15, 1.0);
    c126 = `as.logical`(r151);
    if c126 then L280() else L64();
  L302():
    nx21 = force? nx20;
    checkMissing(nx21);
    r172 = `/`(vx5, nx21);
    r173 = sqrt(r172);
    goto L70(r173);
  L305():
    vy3 = force? vy2;
    checkMissing(vy3);
    ny14 = ld ny;
    check L306() else D113();
  L307():
    stderrx = ld stderrx;
    check L309() else D114();
  L308():
    r178 = dyn base24(<lang `+`(`^`(stderrx, 2.0), `^`(stderry, 2.0))>);
    goto L72(r178);
  L318(stderr18, r196, dx8):
    r198 = `*`(r196, dx8);
    sym25 = ldf max;
    base25 = ldf max in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L322() else L323();
  L319():
    dr6 = tryDispatchBuiltin.1("$", _Machine5);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L321() else L320(stderr14, 10.0, dr6);
  L320(stderr16, r194, _Machine7):
    r197 = `$`(_Machine7, <sym double.eps>);
    goto L318(stderr16, r194, r197);
  L403():
    alternative8 = force? alternative7;
    checkMissing(alternative8);
    method = ld method;
    check L404() else D179();
  D113():
    deopt 400 [vy3, ny14];
  D114():
    deopt 406 [stderrx];
  D116():
    deopt 416 [stderr11];
  D179():
    deopt 628 [method];
  L64():
    goto L65();
  L65():
    ny8 = ld ny;
    check L285() else D101();
  L73(stderr21, r202, r203):
    r217 = `*`(r202, r203);
    r218 = `<`(stderr21, r217);
    c129 = `as.logical`(r218);
    if c129 then L333() else L76();
  L280():
    v = ld v;
    check L281() else D98();
  L306():
    ny15 = force? ny14;
    checkMissing(ny15);
    r176 = `/`(vy3, ny15);
    r177 = sqrt(r176);
    goto L71(r177);
  L309():
    stderrx1 = force? stderrx;
    checkMissing(stderrx1);
    r180 = `^`(stderrx1, 2.0);
    stderry = ld stderry;
    check L310() else D115();
  L311():
    stderr12 = force? stderr11;
    checkMissing(stderr12);
    r184 = `^`(stderr12, 4.0);
    stderrx2 = ld stderrx;
    check L312() else D117();
  L321():
    dx7 = getTryDispatchBuiltinValue(dr6);
    goto L318(stderr14, 10.0, dx7);
  L322():
    sym26 = ldf abs;
    base26 = ldf abs in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L324() else L325();
  L323():
    r201 = dyn base25(<lang abs(mx)>, <lang abs(my)>);
    goto L73(stderr18, r198, r201);
  L404():
    method1 = force? method;
    checkMissing(method1);
    dname = ld dname;
    check L405() else D180();
  D98():
    deopt 347 [v];
  D101():
    deopt 358 [ny8];
  D115():
    deopt 409 [r180, stderry];
  D117():
    deopt 419 [r184, stderrx2];
  D180():
    deopt 631 [dname];
  L74(stderr24, r207, r208):
    sym27 = ldf abs;
    base27 = ldf abs in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L328() else L329();
  L76():
    goto L77();
  L77():
    mx10 = ld mx;
    check L337() else D130();
  L281():
    v1 = force? v;
    checkMissing(v1);
    nx16 = ld nx;
    check L282() else D99();
  L285():
    ny9 = force? ny8;
    checkMissing(ny9);
    r156 = `>`(ny9, 1.0);
    c127 = `as.logical`(r156);
    if c127 then L286() else L66();
  L310():
    stderry1 = force? stderry;
    checkMissing(stderry1);
    r181 = `^`(stderry1, 2.0);
    r182 = `+`(r180, r181);
    r183 = sqrt(r182);
    goto L72(r183);
  L312():
    stderrx3 = force? stderrx2;
    checkMissing(stderrx3);
    r185 = `^`(stderrx3, 4.0);
    nx22 = ld nx;
    check L313() else D118();
  L324():
    mx8 = ld mx;
    check L326() else D123();
  L325():
    r206 = dyn base26(<sym mx>);
    goto L74(stderr18, r198, r206);
  L333():
    stop8 = ldf stop;
    check L334() else D128();
  L405():
    dname1 = force? dname;
    checkMissing(dname1);
    list = ldf list in base;
    r278 = dyn list(tstat16, df15, pval1, cint7, estimate1, mu12, stderr33, alternative8, method1, dname1);
    check L406() else D181();
  D99():
    deopt 348 [v1, nx16];
  D118():
    deopt 422 [r184, r185, nx22];
  D123():
    deopt 446 [stderr18, r198, mx8];
  D128():
    deopt 461 [];
  D130():
    deopt 466 [mx10];
  D181():
    deopt 635 [r278];
  L66():
    goto L67();
  L67():
    v4 = ld v;
    check L291() else D105();
  L75(stderr27, r213, r214):
    max = ldf max in base;
    r216 = dyn max(r208, r214);
    check L332() else D127();
  L282():
    nx17 = force? nx16;
    checkMissing(nx17);
    r152 = `-`(nx17, 1.0);
    vx2 = ld vx;
    check L283() else D100();
  L286():
    v2 = ld v;
    check L287() else D102();
  L313():
    nx23 = force? nx22;
    checkMissing(nx23);
    r186 = `-`(nx23, 1.0);
    r187 = `/`(r185, r186);
    stderry2 = ld stderry;
    check L314() else D119();
  L326():
    mx9 = force? mx8;
    checkMissing(mx9);
    abs1 = ldf abs in base;
    r209 = dyn abs1(mx9);
    check L327() else D124();
  L328():
    my2 = ld my;
    check L330() else D125();
  L329():
    r212 = dyn base27(<sym my>);
    goto L75(stderr24, r207, r212);
  L334():
    r219 = dyn stop8("data are essentially constant");
    check L335() else D129();
  L337():
    mx11 = force? mx10;
    checkMissing(mx11);
    my4 = ld my;
    check L338() else D131();
  L406():
    goto L88(r278);
  D100():
    deopt 351 [v1, r152, vx2];
  D102():
    deopt 362 [v2];
  D105():
    deopt 373 [v4];
  D119():
    deopt 426 [r184, r187, stderry2];
  D124():
    deopt 449 [stderr18, r198, r209];
  D125():
    deopt 452 [stderr24, r207, my2];
  D127():
    deopt 457 [stderr27, r213, r216];
  D129():
    deopt 463 [r219];
  D131():
    deopt 467 [mx11, my4];
  L283():
    vx3 = force? vx2;
    checkMissing(vx3);
    r153 = `*`(r152, vx3);
    r154 = `+`(v1, r153);
    st v = r154;
    goto L65();
  L287():
    v3 = force? v2;
    checkMissing(v3);
    ny10 = ld ny;
    check L288() else D103();
  L291():
    v5 = force? v4;
    checkMissing(v5);
    df = ld df;
    check L292() else D106();
  L314():
    stderry3 = force? stderry2;
    checkMissing(stderry3);
    r188 = `^`(stderry3, 4.0);
    ny16 = ld ny;
    check L315() else D120();
  L327():
    goto L74(stderr18, r198, r209);
  L330():
    my3 = force? my2;
    checkMissing(my3);
    abs2 = ldf abs in base;
    r215 = dyn abs2(my3);
    check L331() else D126();
  L332():
    goto L73(stderr27, r213, r216);
  L335():
    goto L77();
  L338():
    my5 = force? my4;
    checkMissing(my5);
    r221 = `-`(mx11, my5);
    mu7 = ld mu;
    check L339() else D132();
  D103():
    deopt 363 [v3, ny10];
  D106():
    deopt 374 [v5, df];
  D120():
    deopt 429 [r184, r187, r188, ny16];
  D126():
    deopt 455 [stderr24, r207, r215];
  D132():
    deopt 469 [r221, mu7];
  L288():
    ny11 = force? ny10;
    checkMissing(ny11);
    r157 = `-`(ny11, 1.0);
    vy = ld vy;
    check L289() else D104();
  L292():
    df1 = force? df;
    checkMissing(df1);
    r161 = `/`(v5, df1);
    st v = r161;
    sym21 = ldf sqrt;
    base21 = ldf sqrt in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L293() else L294();
  L315():
    ny17 = force? ny16;
    checkMissing(ny17);
    r189 = `-`(ny17, 1.0);
    r190 = `/`(r188, r189);
    r191 = `+`(r187, r190);
    r192 = `/`(r184, r191);
    st df = r192;
    goto L69();
  L331():
    goto L75(stderr24, r207, r215);
  L339():
    mu8 = force? mu7;
    checkMissing(mu8);
    r222 = `-`(r221, mu8);
    stderr28 = ld stderr;
    check L340() else D133();
  D104():
    deopt 366 [v3, r157, vy];
  D133():
    deopt 471 [r222, stderr28];
  L68(r163):
    st stderr = r163;
    goto L69();
  L289():
    vy1 = force? vy;
    checkMissing(vy1);
    r158 = `*`(r157, vy1);
    r159 = `+`(v3, r158);
    st v = r159;
    goto L67();
  L293():
    v6 = ld v;
    check L295() else D107();
  L294():
    r162 = dyn base21(<lang `*`(v, `(`(`+`(`/`(1.0, nx), `/`(1.0, ny))))>);
    goto L68(r162);
  L340():
    stderr29 = force? stderr28;
    checkMissing(stderr29);
    r223 = `/`(r222, stderr29);
    st tstat = r223;
    goto L48();
  D107():
    deopt 379 [v6];
  L295():
    v7 = force? v6;
    checkMissing(v7);
    nx18 = ld nx;
    check L296() else D108();
  D108():
    deopt 381 [v7, 1.0, nx18];
  L296():
    nx19 = force? nx18;
    checkMissing(nx19);
    r164 = `/`(1.0, nx19);
    ny12 = ld ny;
    check L297() else D109();
  D109():
    deopt 384 [v7, r164, 1.0, ny12];
  L297():
    ny13 = force? ny12;
    checkMissing(ny13);
    r165 = `/`(1.0, ny13);
    r166 = `+`(r164, r165);
    r167 = `*`(v7, r166);
    r168 = sqrt(r167);
    goto L68(r168);
  }
}