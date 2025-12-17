fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2346625945;
    st qqplot = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2346625945(x, y, `plot.it`, xlab, ylab, `...`, `conf.level`, `conf.args`) {
  (reg x:*, reg y:*, reg plot_it:*, reg xlab:*, reg ylab:*, reg ddd:dots, reg conf_level:*, reg conf_args:*) -+> V { var x:*, var y:*, var `plot.it`:*, reg plot_it_isMissing:L, reg plot_it_orDefault:*, var xlab:*, reg xlab_isMissing:L, reg xlab_orDefault:*, reg deparse1:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg substitute:cls, reg r2:V, reg p:p(V +), reg r4:V, reg p1:p(V +), var ylab:*, reg ylab_isMissing:L, reg ylab_orDefault:*, reg deparse2:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg substitute1:cls, reg r8:V, reg p2:p(V +), reg r10:V, reg p3:p(V +), var `...`:dots?, var `conf.level`:*, reg conf_level_isMissing:L, reg conf_level_orDefault:*, var `conf.args`:*, reg conf_args_isMissing:L, reg conf_args_orDefault:*, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg list:cls, reg r14:V, reg p4:p(V +), reg force:cls, reg xlab1:*, reg xlab2:V, reg p5:p(V +), reg r17:V, reg force1:cls, reg ylab1:*, reg ylab2:V, reg p6:p(V +), reg r19:V, reg sort:cls, reg x1:*, reg x2:V, reg p7:p(V +), reg r21:V, reg sort1:cls, reg y1:*, reg y2:V, reg p8:p(V +), reg r23:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r24:V, reg r25:V, reg sx:*, reg sx1:V, reg length:cls, reg r26:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r27:V, reg r28:V, reg sy:*, reg sy1:V, reg length1:cls, reg r29:V, reg leny:*, reg leny1:V, reg lenx:*, reg lenx1:V, reg r30:V, reg c:L, reg approx:cls, reg lenx2:*, reg lenx3:V, reg r31:V, reg p9:p(V +), reg sx2:*, reg sx3:V, reg p10:p(V +), reg leny2:*, reg leny3:V, reg p11:p(V +), reg r35:V, reg c1:L, reg r37:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r38:V, reg leny4:*, reg leny5:V, reg lenx4:*, reg lenx5:V, reg r39:V, reg c2:L, reg approx1:cls, reg leny6:*, reg leny7:V, reg r40:V, reg p12:p(V +), reg sy2:*, reg sy3:V, reg p13:p(V +), reg lenx6:*, reg lenx7:V, reg p14:p(V +), reg r44:V, reg c3:L, reg r46:V, reg dr2:V, reg dc1:L, reg dx3:V, reg dx4:V, reg r47:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r48:V, reg r49:V, reg conf_level1:*, reg conf_level2:V, reg c4:V, reg c5:L, reg plot_it1:*, reg plot_it2:V, reg c6:L, reg plot:cls, reg sx4:*, reg sx5:V, reg p15:p(V +), reg sy4:*, reg sy5:V, reg p16:p(V +), reg xlab3:*, reg xlab4:V, reg p17:p(V +), reg ylab3:*, reg ylab4:V, reg p18:p(V +), reg ddd1:dots?, reg r54:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r56:V, reg r57:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r58:V, reg r59:V, reg sx6:*, reg sx7:V, reg sy6:*, reg sy7:V, reg list1:cls, reg r60:V, reg invisible:cls, reg r61:V, reg conf_level3:*, reg conf_level4:V, reg r64:V, reg c7:L, reg c8:V, reg conf_level5:*, reg conf_level6:V, reg r65:V, reg c10:L, reg c11:V, reg c13:L, reg stop:cls, reg r66:V, reg lenx8:*, reg lenx9:V, reg leny8:*, reg leny9:V, reg r68:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r69:V, reg r70:V, reg conf_args1:*, reg conf_args2:V, reg c14:L, reg conf_args4:V, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg r71:V, reg c15:V, reg c16:L, reg l:*, reg c17:L, reg r73:dots, reg l2:*, reg dr6:V, reg dc3:L, reg dx7:V, reg r75:dots, reg dx8:V, reg r76:V, reg conf_args5:*, reg conf_args6:V, reg c18:L, reg conf_args8:V, reg dr8:V, reg dc4:L, reg dx9:V, reg dx10:V, reg r78:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r79:V, reg r80:V, reg conf_args9:*, reg conf_args10:V, reg c19:L, reg conf_args12:V, reg dr10:V, reg dc5:L, reg dx11:V, reg dx12:V, reg r81:V, reg c20:V, reg c21:L, reg l3:*, reg c22:L, reg r83:L, reg l5:*, reg dr12:V, reg dc6:L, reg dx13:V, reg r85:L, reg dx14:V, reg r86:V, reg conf_args13:*, reg conf_args14:V, reg c23:L, reg conf_args16:V, reg dr14:V, reg dc7:L, reg dx15:V, reg dx16:V, reg r88:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r89:V, reg r90:V, reg conf_args17:*, reg conf_args18:V, reg c24:L, reg conf_args20:V, reg dr16:V, reg dc8:L, reg dx17:V, reg dx18:V, reg r91:V, reg c25:V, reg c26:L, reg l6:*, reg c27:L, reg r93:R, reg l8:*, reg dr18:V, reg dc9:L, reg dx19:V, reg r95:R, reg dx20:V, reg r96:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r98:V, reg r99:V, reg conf_args21:*, reg conf_args22:V, reg c28:L, reg conf_args24:V, reg dr20:V, reg dc10:L, reg dx21:V, reg dx22:V, reg r100:V, reg c29:V, reg c30:L, reg l9:*, reg c31:L, reg r102:L, reg l11:*, reg dr22:V, reg dc11:L, reg dx23:V, reg r104:L, reg dx24:V, reg r105:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r107:V, reg r108:V, reg conf_args25:*, reg conf_args26:V, reg c32:L, reg conf_args28:V, reg dr24:V, reg dc12:L, reg dx25:V, reg dx26:V, reg r109:V, reg c33:V, reg c34:L, reg l12:*, reg c35:L, reg r111:dots, reg l14:*, reg dr26:V, reg dc13:L, reg dx27:V, reg r113:dots, reg dx28:V, reg r114:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r116:V, reg r117:V, reg exact:*, reg exact1:V, reg c36:V, reg c37:L, reg lenx10:*, reg lenx11:V, reg leny10:*, reg leny11:V, reg r118:V, reg r119:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r121:V, reg r122:V, reg x3:*, reg x4:V, reg y3:*, reg y4:V, reg c38:cls, reg r123:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r124:V, reg r125:V, reg duplicated:cls, reg z:*, reg z1:V, reg p19:p(V +), reg r127:V, reg any:cls, reg r128:V, reg TIES:*, reg TIES1:V, reg r129:V, reg c39:L, reg qsmirnov:cls, reg conf_level7:*, reg conf_level8:V, reg p20:p(V +), reg sym16:cls, reg base16:cls, reg guard16:L, reg r132:V, reg r133:V, reg lenx12:*, reg lenx13:V, reg leny12:*, reg leny13:V, reg c40:cls, reg r134:V, reg p21:p(V +), reg z2:*, reg z3:V, reg p22:p(V +), reg exact2:*, reg exact3:V, reg c41:L, reg c43:V, reg simulate:*, reg simulate1:V, reg r137:V, reg c44:L, reg c45:V, reg p23:p(V +), reg simulate2:*, reg simulate3:V, reg p24:p(V +), reg conf_args29:*, reg conf_args30:V, reg c47:L, reg conf_args32:V, reg dr28:V, reg dc14:L, reg dx29:V, reg dx30:V, reg r140:V, reg p25:p(V +), reg r142:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r143:V, reg r144:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r145:V, reg r146:V, reg x5:*, reg x6:V, reg r147:I, reg as_double:cls, reg r148:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r149:V, reg r150:V, reg i:*, reg i1:V, reg N:*, reg N1:V, reg r151:V, reg lenx14:*, reg lenx15:V, reg r152:V, reg ca:*, reg ca1:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r155:V, reg r156:V, reg ca4:V, reg r157:V, reg leny14:*, reg leny15:V, reg as_double1:cls, reg r158:V, reg r159:V, reg r160:V, reg r161:V, reg i2:*, reg i3:V, reg r162:V, reg l15:*, reg c48:L, reg r164:L, reg l17:*, reg dr30:V, reg dc15:L, reg dx31:V, reg dx32:V, reg Rl:*, reg Rl1:V, reg r167:V, reg ___:cls, reg r168:V, reg l18:*, reg c49:L, reg r170:L, reg l20:*, reg dr32:V, reg dc16:L, reg dx33:V, reg dx34:V, reg Rl2:*, reg Rl3:V, reg leny16:*, reg leny17:V, reg r173:V, reg ___1:cls, reg r174:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r175:V, reg r176:V, reg i4:*, reg i5:V, reg N2:*, reg N3:V, reg r177:V, reg lenx16:*, reg lenx17:V, reg r178:V, reg leny18:*, reg leny19:V, reg lenx18:*, reg lenx19:V, reg r179:V, reg r180:V, reg ca5:*, reg ca6:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r183:V, reg r184:V, reg ca9:V, reg r185:V, reg leny20:*, reg leny21:V, reg as_double2:cls, reg r186:V, reg r187:V, reg r188:V, reg r189:V, reg i6:*, reg i7:V, reg r190:V, reg r191:V, reg l21:*, reg c50:L, reg r193:L, reg l23:*, reg dr34:V, reg dc17:L, reg dx35:V, reg dx36:V, reg Rr:*, reg Rr1:V, reg r196:V, reg ___2:cls, reg r197:V, reg l24:*, reg c51:L, reg r199:L, reg l26:*, reg dr36:V, reg dc18:L, reg dx37:V, reg dx38:V, reg Rr2:*, reg Rr3:V, reg leny22:*, reg leny23:V, reg r202:V, reg ___3:cls, reg r203:V, reg y5:*, reg y6:V, reg c52:L, reg y8:V, reg dr38:V, reg dc19:L, reg dx39:V, reg dx40:V, reg Rl4:*, reg Rl5:V, reg __:cls, reg r204:V, reg y9:*, reg y10:V, reg c53:L, reg y12:V, reg dr40:V, reg dc20:L, reg dx41:V, reg dx42:V, reg Rr4:*, reg Rr5:V, reg __1:cls, reg r205:V, reg leny24:*, reg leny25:V, reg lenx20:*, reg lenx21:V, reg r206:V, reg c54:L, reg approx2:cls, reg x7:*, reg x8:V, reg p26:p(V +), reg lwr:*, reg lwr1:V, reg p27:p(V +), reg sx8:*, reg sx9:V, reg p28:p(V +), reg r210:V, reg c55:L, reg r212:V, reg dr42:V, reg dc21:L, reg dx43:V, reg dx44:V, reg r213:V, reg approx3:cls, reg x9:*, reg x10:V, reg p29:p(V +), reg upr:*, reg upr1:V, reg p30:p(V +), reg sx10:*, reg sx11:V, reg p31:p(V +), reg r217:V, reg c56:L, reg r219:V, reg dr44:V, reg dc22:L, reg dx45:V, reg dx46:V, reg r220:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r221:V, reg r222:V, reg sx12:*, reg sx13:V, reg sy8:*, reg sy9:V, reg lwr2:*, reg lwr3:V, reg upr2:*, reg upr3:V, reg list2:cls, reg r223:V, reg plot_it3:*, reg plot_it4:V, reg c57:L, reg plot1:cls, reg sx14:*, reg sx15:V, reg p32:p(V +), reg sy10:*, reg sy11:V, reg p33:p(V +), reg xlab5:*, reg xlab6:V, reg p34:p(V +), reg ylab5:*, reg ylab6:V, reg p35:p(V +), reg ddd2:dots?, reg r228:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r229:V, reg r230:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r231:V, reg r232:V, reg x11:*, reg x12:V, reg min:cls, reg r233:V, reg diff:cls, reg sym26:cls, reg base26:cls, reg guard26:L, reg r234:V, reg r235:V, reg x13:*, reg x14:V, reg range:cls, reg r236:V, reg p36:p(V +), reg r238:V, reg r239:V, reg r240:V, reg sx16:*, reg sx17:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r241:V, reg r242:V, reg x15:*, reg x16:V, reg max:cls, reg r243:V, reg diff1:cls, reg sym28:cls, reg base28:cls, reg guard28:L, reg r244:V, reg r245:V, reg x17:*, reg x18:V, reg range1:cls, reg r246:V, reg p37:p(V +), reg r248:V, reg r249:V, reg r250:V, reg c58:cls, reg r251:V, reg sym29:cls, reg base29:cls, reg guard29:L, reg r252:V, reg r253:V, reg sym30:cls, reg base30:cls, reg guard30:L, reg r254:V, reg r255:V, reg sy12:*, reg sy13:V, reg min1:cls, reg r256:V, reg diff2:cls, reg sym31:cls, reg base31:cls, reg guard31:L, reg r257:V, reg r258:V, reg sy14:*, reg sy15:V, reg range2:cls, reg r259:V, reg p38:p(V +), reg r261:V, reg r262:V, reg r263:V, reg lwr4:*, reg lwr5:V, reg sym32:cls, reg base32:cls, reg guard32:L, reg r264:V, reg r265:V, reg sy16:*, reg sy17:V, reg max1:cls, reg r266:V, reg diff3:cls, reg sym33:cls, reg base33:cls, reg guard33:L, reg r267:V, reg r268:V, reg sy18:*, reg sy19:V, reg range3:cls, reg r269:V, reg p39:p(V +), reg r271:V, reg r272:V, reg r273:V, reg c59:cls, reg r274:V, reg sym34:cls, reg base34:cls, reg guard34:L, reg r275:V, reg r276:V, reg sym35:cls, reg base35:cls, reg guard35:L, reg r277:V, reg r278:V, reg sy20:*, reg sy21:V, reg min2:cls, reg r279:V, reg diff4:cls, reg sym36:cls, reg base36:cls, reg guard36:L, reg r280:V, reg r281:V, reg sy22:*, reg sy23:V, reg range4:cls, reg r282:V, reg p40:p(V +), reg r284:V, reg r285:V, reg r286:V, reg upr4:*, reg upr5:V, reg sym37:cls, reg base37:cls, reg guard37:L, reg r287:V, reg r288:V, reg sy24:*, reg sy25:V, reg max2:cls, reg r289:V, reg diff5:cls, reg sym38:cls, reg base38:cls, reg guard38:L, reg r290:V, reg r291:V, reg sy26:*, reg sy27:V, reg range5:cls, reg r292:V, reg p41:p(V +), reg r294:V, reg r295:V, reg r296:V, reg c60:cls, reg r297:V, reg sym39:cls, reg base39:cls, reg guard39:L, reg r298:V, reg r299:V, reg x19:*, reg x20:V, reg rev:cls, reg x21:*, reg x22:V, reg p42:p(V +), reg r301:V, reg c61:cls, reg r302:V, reg sym40:cls, reg base40:cls, reg guard40:L, reg r303:V, reg r304:V, reg lwr6:*, reg lwr7:V, reg rev1:cls, reg upr6:*, reg upr7:V, reg p43:p(V +), reg r306:V, reg c62:cls, reg r307:V, reg x23:*, reg x24:V, reg c63:L, reg x26:V, reg dr46:V, reg dc23:L, reg dx48:V, reg dx49:V, reg sym41:cls, reg base41:cls, reg guard41:L, reg r308:V, reg x29:V, reg r309:V, reg y13:*, reg y14:V, reg is_na:cls, reg r310:V, reg r311:V, reg __2:cls, reg r312:V, reg y15:*, reg y16:V, reg c64:L, reg y18:V, reg dr48:V, reg dc24:L, reg dx50:V, reg dx51:V, reg sym42:cls, reg base42:cls, reg guard42:L, reg r313:V, reg y21:V, reg r314:V, reg y22:*, reg y23:V, reg is_na1:cls, reg r315:V, reg r316:V, reg __3:cls, reg r317:V, reg sym43:cls, reg base43:cls, reg guard43:L, reg r318:V, reg r319:V, reg x30:*, reg x31:V, reg c65:L, reg x33:V, reg dr50:V, reg dc25:L, reg dx52:V, reg dx53:V, reg __4:cls, reg r320:V, reg sym44:cls, reg base44:cls, reg guard44:L, reg r321:V, reg r322:V, reg rep:cls, reg r323:V, reg c66:cls, reg r324:V, reg sym45:cls, reg base45:cls, reg guard45:L, reg r325:V, reg r326:V, reg sym46:cls, reg base46:cls, reg guard46:L, reg r327:V, reg r328:V, reg rep1:cls, reg r329:V, reg y24:*, reg y25:V, reg c67:L, reg y27:V, reg dr52:V, reg dc26:L, reg dx54:V, reg dx55:V, reg sym47:cls, reg base47:cls, reg guard47:L, reg r330:V, reg y30:V, reg r331:V, reg y31:*, reg y32:V, reg length2:cls, reg r332:V, reg __5:cls, reg r333:V, reg c68:cls, reg r334:V, reg polygon:cls, reg xn:*, reg xn1:V, reg p44:p(V +), reg yn:*, reg yn1:V, reg p45:p(V +), reg conf_args33:*, reg conf_args34:V, reg c69:L, reg conf_args36:V, reg dr54:V, reg dc27:L, reg dx56:V, reg dx57:V, reg r337:V, reg p46:p(V +), reg conf_args37:*, reg conf_args38:V, reg c70:L, reg conf_args40:V, reg dr56:V, reg dc28:L, reg dx58:V, reg dx59:V, reg r339:V, reg p47:p(V +), reg r341:V, reg points:cls, reg sx18:*, reg sx19:V, reg p48:p(V +), reg sy28:*, reg sy29:V, reg p49:p(V +), reg ddd3:dots?, reg r344:V, reg sym48:cls, reg base48:cls, reg guard48:L, reg r346:V, reg r347:V, reg ret:*, reg ret1:V, reg invisible1:cls, reg r348:V |
    mkenv;
    st x = x;
    st y = y;
    plot_it_isMissing = missing.0(plot_it);
    if plot_it_isMissing then L0(TRUE) else L0(plot_it);
  L0(plot_it_orDefault):
    st `plot.it` = plot_it_orDefault;
    xlab_isMissing = missing.0(xlab);
    if xlab_isMissing then L1() else L2(xlab);
  L1():
    p1 = prom<V +>{
      deparse1 = ldf deparse1;
      p = prom<V +>{
        sym = ldf substitute;
        base = ldf substitute in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r1):
        return r1;
      L1():
        substitute = ldf substitute in base;
        r2 = dyn substitute(<sym x>);
        goto L0(r2);
      L2():
        r = dyn base(<sym x>);
        goto L0(r);
      };
      r4 = dyn deparse1(p);
      return r4;
    };
    goto L2(p1);
  L2(xlab_orDefault):
    st xlab = xlab_orDefault;
    ylab_isMissing = missing.0(ylab);
    if ylab_isMissing then L3() else L4(ylab);
  L3():
    p3 = prom<V +>{
      deparse2 = ldf deparse1;
      p2 = prom<V +>{
        sym1 = ldf substitute;
        base1 = ldf substitute in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r7):
        return r7;
      L1():
        substitute1 = ldf substitute in base;
        r8 = dyn substitute1(<sym y>);
        goto L0(r8);
      L2():
        r6 = dyn base1(<sym y>);
        goto L0(r6);
      };
      r10 = dyn deparse2(p2);
      return r10;
    };
    goto L4(p3);
  L4(ylab_orDefault):
    st ylab = ylab_orDefault;
    st `...` = ddd;
    conf_level_isMissing = missing.0(conf_level);
    if conf_level_isMissing then L5(NULL) else L5(conf_level);
  L5(conf_level_orDefault):
    st `conf.level` = conf_level_orDefault;
    conf_args_isMissing = missing.0(conf_args);
    if conf_args_isMissing then L6() else L7(conf_args);
  L6():
    p4 = prom<V +>{
      sym2 = ldf list;
      base2 = ldf list in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r13):
      return r13;
    L1():
      list = ldf list in base;
      r14 = dyn list(NULL, FALSE, 2000.0, NA_LGL, NULL);
      goto L0(r14);
    L2():
      r12 = dyn base2[exact, `simulate.p.value`, B, col, border](NULL, FALSE, 2000.0, NA_LGL, NULL);
      goto L0(r12);
    };
    goto L7(p4);
  L7(conf_args_orDefault):
    st `conf.args` = conf_args_orDefault;
    force = ldf force;
    check L85() else D0();
  D0():
    deopt 1 [];
  L85():
    p5 = prom<V +>{
      xlab1 = ld xlab;
      xlab2 = force? xlab1;
      checkMissing(xlab2);
      return xlab2;
    };
    r17 = dyn force(p5);
    check L86() else D1();
  D1():
    deopt 3 [r17];
  L86():
    force1 = ldf force;
    check L87() else D2();
  D2():
    deopt 5 [];
  L87():
    p6 = prom<V +>{
      ylab1 = ld ylab;
      ylab2 = force? ylab1;
      checkMissing(ylab2);
      return ylab2;
    };
    r19 = dyn force1(p6);
    check L88() else D3();
  D3():
    deopt 7 [r19];
  L88():
    sort = ldf sort;
    check L89() else D4();
  D4():
    deopt 9 [];
  L89():
    p7 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r21 = dyn sort(p7);
    check L90() else D5();
  D5():
    deopt 11 [r21];
  L90():
    st sx = r21;
    st x = r21;
    sort1 = ldf sort;
    check L91() else D6();
  D6():
    deopt 15 [];
  L91():
    p8 = prom<V +>{
      y1 = ld y;
      y2 = force? y1;
      checkMissing(y2);
      return y2;
    };
    r23 = dyn sort1(p8);
    check L92() else D7();
  D7():
    deopt 17 [r23];
  L92():
    st sy = r23;
    st y = r23;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L93() else L94();
  L8(r25):
    st lenx = r25;
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L97() else L98();
  L93():
    sx = ld sx;
    check L95() else D8();
  L94():
    r24 = dyn base3(<sym sx>);
    goto L8(r24);
  D8():
    deopt 22 [sx];
  L9(r28):
    st leny = r28;
    leny = ld leny;
    check L101() else D12();
  L95():
    sx1 = force? sx;
    checkMissing(sx1);
    length = ldf length in base;
    r26 = dyn length(sx1);
    check L96() else D9();
  L97():
    sy = ld sy;
    check L99() else D10();
  L98():
    r27 = dyn base4(<sym sy>);
    goto L9(r27);
  D9():
    deopt 25 [r26];
  D10():
    deopt 29 [sy];
  D12():
    deopt 34 [leny];
  L96():
    goto L8(r26);
  L99():
    sy1 = force? sy;
    checkMissing(sy1);
    length1 = ldf length in base;
    r29 = dyn length1(sy1);
    check L100() else D11();
  L101():
    leny1 = force? leny;
    checkMissing(leny1);
    lenx = ld lenx;
    check L102() else D13();
  D11():
    deopt 32 [r29];
  D13():
    deopt 35 [leny1, lenx];
  L100():
    goto L9(r29);
  L102():
    lenx1 = force? lenx;
    checkMissing(lenx1);
    r30 = `<`(leny1, lenx1);
    c = `as.logical`(r30);
    if c then L103() else L10();
  L10():
    leny4 = ld leny;
    check L111() else D16();
  L11():
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L121() else L122();
  L103():
    approx = ldf approx;
    check L104() else D14();
  D14():
    deopt 39 [];
  D16():
    deopt 47 [leny4];
  L13(r49):
    c5 = `as.logical`(r49);
    if c5 then L124() else L14();
  L104():
    p9 = prom<V +>{
      lenx2 = ld lenx;
      lenx3 = force? lenx2;
      checkMissing(lenx3);
      r31 = `:`(1, lenx3);
      return r31;
    };
    p10 = prom<V +>{
      sx2 = ld sx;
      sx3 = force? sx2;
      checkMissing(sx3);
      return sx3;
    };
    p11 = prom<V +>{
      leny2 = ld leny;
      leny3 = force? leny2;
      checkMissing(leny3);
      return leny3;
    };
    r35 = dyn approx[, , n](p9, p10, p11);
    check L105() else D15();
  L111():
    leny5 = force? leny4;
    checkMissing(leny5);
    lenx4 = ld lenx;
    check L112() else D17();
  L121():
    conf_level1 = ld `conf.level`;
    check L123() else D20();
  L122():
    r48 = dyn base5(<sym conf.level>);
    goto L13(r48);
  D15():
    deopt 44 [r35];
  D17():
    deopt 48 [leny5, lenx4];
  D20():
    deopt 63 [conf_level1];
  L14():
    conf_level3 = ld `conf.level`;
    check L140() else D28();
  L105():
    c1 = `is.object`(r35);
    if c1 then L107() else L108(r35);
  L112():
    lenx5 = force? lenx4;
    checkMissing(lenx5);
    r39 = `>`(leny5, lenx5);
    c2 = `as.logical`(r39);
    if c2 then L113() else L12();
  L123():
    conf_level2 = force? conf_level1;
    checkMissing(conf_level2);
    c4 = `==`(conf_level2, NULL);
    goto L13(c4);
  L124():
    plot_it1 = ld `plot.it`;
    check L125() else D21();
  D21():
    deopt 66 [plot_it1];
  D28():
    deopt 97 [conf_level3];
  L12():
    goto L11();
  L106(dx1):
    st sx = dx1;
    goto L11();
  L107():
    dr = tryDispatchBuiltin.1("$", r35);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L109() else L108(dr);
  L108(r37):
    r38 = `$`(r37, <sym y>);
    goto L106(r38);
  L113():
    approx1 = ldf approx;
    check L114() else D18();
  L125():
    plot_it2 = force? plot_it1;
    checkMissing(plot_it2);
    c6 = `as.logical`(plot_it2);
    if c6 then L126() else L15();
  L140():
    conf_level4 = force? conf_level3;
    checkMissing(conf_level4);
    r64 = `<`(conf_level4, 0.0);
    c7 = `as.logical`(r64);
    if c7 then L20(c7) else L141();
  D18():
    deopt 52 [];
  L15():
    goto L16();
  L16():
    sym6 = ldf invisible;
    base6 = ldf invisible in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L130() else L131();
  L20(c8):
    c13 = `as.logical`(c8);
    if c13 then L144() else L21();
  L109():
    dx = getTryDispatchBuiltinValue(dr);
    goto L106(dx);
  L114():
    p12 = prom<V +>{
      leny6 = ld leny;
      leny7 = force? leny6;
      checkMissing(leny7);
      r40 = `:`(1, leny7);
      return r40;
    };
    p13 = prom<V +>{
      sy2 = ld sy;
      sy3 = force? sy2;
      checkMissing(sy3);
      return sy3;
    };
    p14 = prom<V +>{
      lenx6 = ld lenx;
      lenx7 = force? lenx6;
      checkMissing(lenx7);
      return lenx7;
    };
    r44 = dyn approx1[, , n](p12, p13, p14);
    check L115() else D19();
  L126():
    plot = ldf plot;
    check L127() else D22();
  L141():
    conf_level5 = ld `conf.level`;
    check L142() else D29();
  D19():
    deopt 57 [r44];
  D22():
    deopt 69 [];
  D29():
    deopt 101 [c7, conf_level5];
  L17(r57):
    popenv;
    return r57;
  L21():
    goto L22();
  L22():
    lenx8 = ld lenx;
    check L148() else D32();
  L115():
    c3 = `is.object`(r44);
    if c3 then L117() else L118(r44);
  L127():
    p15 = prom<V +>{
      sx4 = ld sx;
      sx5 = force? sx4;
      checkMissing(sx5);
      return sx5;
    };
    p16 = prom<V +>{
      sy4 = ld sy;
      sy5 = force? sy4;
      checkMissing(sy5);
      return sy5;
    };
    p17 = prom<V +>{
      xlab3 = ld xlab;
      xlab4 = force? xlab3;
      checkMissing(xlab4);
      return xlab4;
    };
    p18 = prom<V +>{
      ylab3 = ld ylab;
      ylab4 = force? ylab3;
      checkMissing(ylab4);
      return ylab4;
    };
    ddd1 = ld `...`;
    r54 = dyn plot[, , xlab, ylab, `...`](p15, p16, p17, p18, ddd1);
    check L128() else D23();
  L130():
    sym7 = ldf list;
    base7 = ldf list in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L132() else L133();
  L131():
    r56 = dyn base6(<lang list(x=sx, y=sy)>);
    goto L17(r56);
  L142():
    conf_level6 = force? conf_level5;
    checkMissing(conf_level6);
    r65 = `>`(conf_level6, 1.0);
    c10 = `as.logical`(r65);
    c11 = `||`(c7, c10);
    goto L20(c11);
  L144():
    stop = ldf stop;
    check L145() else D30();
  D23():
    deopt 77 [r54];
  D30():
    deopt 107 [];
  D32():
    deopt 112 [lenx8];
  L18(r59):
    invisible = ldf invisible in base;
    r61 = dyn invisible(r59);
    check L137() else D27();
  L116(dx4):
    st sy = dx4;
    goto L11();
  L117():
    dr2 = tryDispatchBuiltin.1("$", r44);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L119() else L118(dr2);
  L118(r46):
    r47 = `$`(r46, <sym y>);
    goto L116(r47);
  L128():
    goto L16();
  L132():
    sx6 = ld sx;
    check L134() else D24();
  L133():
    r58 = dyn base7[x, y](<sym sx>, <sym sy>);
    goto L18(r58);
  L145():
    r66 = dyn stop("'conf.level' is not a probability");
    check L146() else D31();
  L148():
    lenx9 = force? lenx8;
    checkMissing(lenx9);
    leny8 = ld leny;
    check L149() else D33();
  D24():
    deopt 84 [sx6];
  D27():
    deopt 93 [r61];
  D31():
    deopt 109 [r66];
  D33():
    deopt 113 [lenx9, leny8];
  L119():
    dx3 = getTryDispatchBuiltinValue(dr2);
    goto L116(dx3);
  L134():
    sx7 = force? sx6;
    checkMissing(sx7);
    sy6 = ld sy;
    check L135() else D25();
  L137():
    goto L17(r61);
  L146():
    goto L22();
  L149():
    leny9 = force? leny8;
    checkMissing(leny9);
    r68 = `+`(lenx9, leny9);
    st N = r68;
    sym8 = ldf `is.null`;
    base8 = ldf `is.null` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L150() else L151();
  D25():
    deopt 87 [sy6];
  L23(r70):
    c16 = `as.logical`(r70);
    if c16 then L157() else L24();
  L135():
    sy7 = force? sy6;
    checkMissing(sy7);
    list1 = ldf list in base;
    r60 = dyn list1(sx7, sy7);
    check L136() else D26();
  L150():
    conf_args1 = ld `conf.args`;
    check L152() else D34();
  L151():
    r69 = dyn base8(<lang `$`(conf.args, exact)>);
    goto L23(r69);
  D26():
    deopt 91 [r60];
  D34():
    deopt 118 [conf_args1];
  L24():
    goto L25();
  L25():
    conf_args5 = ld `conf.args`;
    check L163() else D35();
  L136():
    goto L18(r60);
  L152():
    conf_args2 = force? conf_args1;
    checkMissing(conf_args2);
    c14 = `is.object`(conf_args2);
    if c14 then L154() else L155(conf_args2);
  L157():
    l = ld `conf.args`;
    c17 = `is.object`(l);
    if c17 then L159() else L160(NULL, l);
  D35():
    deopt 129 [conf_args5];
  L153(dx6):
    c15 = `==`(dx6, NULL);
    goto L23(c15);
  L154():
    dr4 = tryDispatchBuiltin.1("$", conf_args2);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L156() else L155(dr4);
  L155(conf_args4):
    r71 = `$`(conf_args4, <sym exact>);
    goto L153(r71);
  L158(r75, dx8):
    st `conf.args` = dx8;
    goto L25();
  L159():
    dr6 = tryDispatchBuiltin.0("$<-", l, NULL);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L161() else L160(NULL, dr6);
  L160(r73, l2):
    r76 = `$<-`(l2, <sym exact>, NULL);
    goto L158(r73, r76);
  L163():
    conf_args6 = force? conf_args5;
    checkMissing(conf_args6);
    c18 = `is.object`(conf_args6);
    if c18 then L165() else L166(conf_args6);
  L156():
    dx5 = getTryDispatchBuiltinValue(dr4);
    goto L153(dx5);
  L161():
    dx7 = getTryDispatchBuiltinValue(dr6);
    goto L158(NULL, dx7);
  L164(dx10):
    st exact = dx10;
    sym9 = ldf `is.null`;
    base9 = ldf `is.null` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L168() else L169();
  L165():
    dr8 = tryDispatchBuiltin.1("$", conf_args6);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L167() else L166(dr8);
  L166(conf_args8):
    r78 = `$`(conf_args8, <sym exact>);
    goto L164(r78);
  L26(r80):
    c21 = `as.logical`(r80);
    if c21 then L175() else L27();
  L167():
    dx9 = getTryDispatchBuiltinValue(dr8);
    goto L164(dx9);
  L168():
    conf_args9 = ld `conf.args`;
    check L170() else D36();
  L169():
    r79 = dyn base9(<lang `$`(conf.args, simulate.p.value)>);
    goto L26(r79);
  D36():
    deopt 134 [conf_args9];
  L27():
    goto L28();
  L28():
    conf_args13 = ld `conf.args`;
    check L181() else D37();
  L170():
    conf_args10 = force? conf_args9;
    checkMissing(conf_args10);
    c19 = `is.object`(conf_args10);
    if c19 then L172() else L173(conf_args10);
  L175():
    l3 = ld `conf.args`;
    c22 = `is.object`(l3);
    if c22 then L177() else L178(FALSE, l3);
  D37():
    deopt 145 [conf_args13];
  L171(dx12):
    c20 = `==`(dx12, NULL);
    goto L26(c20);
  L172():
    dr10 = tryDispatchBuiltin.1("$", conf_args10);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L174() else L173(dr10);
  L173(conf_args12):
    r81 = `$`(conf_args12, <sym simulate.p.value>);
    goto L171(r81);
  L176(r85, dx14):
    st `conf.args` = dx14;
    goto L28();
  L177():
    dr12 = tryDispatchBuiltin.0("$<-", l3, FALSE);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L179() else L178(FALSE, dr12);
  L178(r83, l5):
    r86 = `$<-`(l5, <sym simulate.p.value>, FALSE);
    goto L176(r83, r86);
  L181():
    conf_args14 = force? conf_args13;
    checkMissing(conf_args14);
    c23 = `is.object`(conf_args14);
    if c23 then L183() else L184(conf_args14);
  L174():
    dx11 = getTryDispatchBuiltinValue(dr10);
    goto L171(dx11);
  L179():
    dx13 = getTryDispatchBuiltinValue(dr12);
    goto L176(FALSE, dx13);
  L182(dx16):
    st simulate = dx16;
    sym10 = ldf `is.null`;
    base10 = ldf `is.null` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L186() else L187();
  L183():
    dr14 = tryDispatchBuiltin.1("$", conf_args14);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L185() else L184(dr14);
  L184(conf_args16):
    r88 = `$`(conf_args16, <sym simulate.p.value>);
    goto L182(r88);
  L29(r90):
    c26 = `as.logical`(r90);
    if c26 then L193() else L30();
  L185():
    dx15 = getTryDispatchBuiltinValue(dr14);
    goto L182(dx15);
  L186():
    conf_args17 = ld `conf.args`;
    check L188() else D38();
  L187():
    r89 = dyn base10(<lang `$`(conf.args, B)>);
    goto L29(r89);
  D38():
    deopt 150 [conf_args17];
  L30():
    goto L31();
  L31():
    sym11 = ldf `is.null`;
    base11 = ldf `is.null` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L199() else L200();
  L188():
    conf_args18 = force? conf_args17;
    checkMissing(conf_args18);
    c24 = `is.object`(conf_args18);
    if c24 then L190() else L191(conf_args18);
  L193():
    l6 = ld `conf.args`;
    c27 = `is.object`(l6);
    if c27 then L195() else L196(2000.0, l6);
  L32(r99):
    c30 = `as.logical`(r99);
    if c30 then L206() else L33();
  L189(dx18):
    c25 = `==`(dx18, NULL);
    goto L29(c25);
  L190():
    dr16 = tryDispatchBuiltin.1("$", conf_args18);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L192() else L191(dr16);
  L191(conf_args20):
    r91 = `$`(conf_args20, <sym B>);
    goto L189(r91);
  L194(r95, dx20):
    st `conf.args` = dx20;
    goto L31();
  L195():
    dr18 = tryDispatchBuiltin.0("$<-", l6, 2000.0);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L197() else L196(2000.0, dr18);
  L196(r93, l8):
    r96 = `$<-`(l8, <sym B>, 2000.0);
    goto L194(r93, r96);
  L199():
    conf_args21 = ld `conf.args`;
    check L201() else D39();
  L200():
    r98 = dyn base11(<lang `$`(conf.args, col)>);
    goto L32(r98);
  D39():
    deopt 162 [conf_args21];
  L33():
    goto L34();
  L34():
    sym12 = ldf `is.null`;
    base12 = ldf `is.null` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L212() else L213();
  L192():
    dx17 = getTryDispatchBuiltinValue(dr16);
    goto L189(dx17);
  L197():
    dx19 = getTryDispatchBuiltinValue(dr18);
    goto L194(2000.0, dx19);
  L201():
    conf_args22 = force? conf_args21;
    checkMissing(conf_args22);
    c28 = `is.object`(conf_args22);
    if c28 then L203() else L204(conf_args22);
  L206():
    l9 = ld `conf.args`;
    c31 = `is.object`(l9);
    if c31 then L208() else L209(NA_LGL, l9);
  L35(r108):
    c34 = `as.logical`(r108);
    if c34 then L219() else L36();
  L202(dx22):
    c29 = `==`(dx22, NULL);
    goto L32(c29);
  L203():
    dr20 = tryDispatchBuiltin.1("$", conf_args22);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L205() else L204(dr20);
  L204(conf_args24):
    r100 = `$`(conf_args24, <sym col>);
    goto L202(r100);
  L207(r104, dx24):
    st `conf.args` = dx24;
    goto L34();
  L208():
    dr22 = tryDispatchBuiltin.0("$<-", l9, NA_LGL);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L210() else L209(NA_LGL, dr22);
  L209(r102, l11):
    r105 = `$<-`(l11, <sym col>, NA_LGL);
    goto L207(r102, r105);
  L212():
    conf_args25 = ld `conf.args`;
    check L214() else D40();
  L213():
    r107 = dyn base12(<lang `$`(conf.args, border)>);
    goto L35(r107);
  D40():
    deopt 174 [conf_args25];
  L36():
    goto L37();
  L37():
    sym13 = ldf `is.null`;
    base13 = ldf `is.null` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L225() else L226();
  L205():
    dx21 = getTryDispatchBuiltinValue(dr20);
    goto L202(dx21);
  L210():
    dx23 = getTryDispatchBuiltinValue(dr22);
    goto L207(NA_LGL, dx23);
  L214():
    conf_args26 = force? conf_args25;
    checkMissing(conf_args26);
    c32 = `is.object`(conf_args26);
    if c32 then L216() else L217(conf_args26);
  L219():
    l12 = ld `conf.args`;
    c35 = `is.object`(l12);
    if c35 then L221() else L222(NULL, l12);
  L38(r117):
    c37 = `as.logical`(r117);
    if c37 then L228() else L39();
  L215(dx26):
    c33 = `==`(dx26, NULL);
    goto L35(c33);
  L216():
    dr24 = tryDispatchBuiltin.1("$", conf_args26);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L218() else L217(dr24);
  L217(conf_args28):
    r109 = `$`(conf_args28, <sym border>);
    goto L215(r109);
  L220(r113, dx28):
    st `conf.args` = dx28;
    goto L37();
  L221():
    dr26 = tryDispatchBuiltin.0("$<-", l12, NULL);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L223() else L222(NULL, dr26);
  L222(r111, l14):
    r114 = `$<-`(l14, <sym border>, NULL);
    goto L220(r111, r114);
  L225():
    exact = ld exact;
    check L227() else D41();
  L226():
    r116 = dyn base13(<sym exact>);
    goto L38(r116);
  D41():
    deopt 186 [exact];
  L39():
    goto L40();
  L40():
    sym14 = ldf c;
    base14 = ldf c in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L232() else L233();
  L218():
    dx25 = getTryDispatchBuiltinValue(dr24);
    goto L215(dx25);
  L223():
    dx27 = getTryDispatchBuiltinValue(dr26);
    goto L220(NULL, dx27);
  L227():
    exact1 = force? exact;
    checkMissing(exact1);
    c36 = `==`(exact1, NULL);
    goto L38(c36);
  L228():
    lenx10 = ld lenx;
    check L229() else D42();
  D42():
    deopt 189 [lenx10];
  L41(r122):
    st z = r122;
    sym15 = ldf any;
    base15 = ldf any in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L237() else L238();
  L229():
    lenx11 = force? lenx10;
    checkMissing(lenx11);
    leny10 = ld leny;
    check L230() else D43();
  L232():
    x3 = ld x;
    check L234() else D44();
  L233():
    r121 = dyn base14(<sym x>, <sym y>);
    goto L41(r121);
  D43():
    deopt 190 [lenx11, leny10];
  D44():
    deopt 200 [x3];
  L42(r125):
    st TIES = r125;
    TIES = ld TIES;
    check L242() else D50();
  L230():
    leny11 = force? leny10;
    checkMissing(leny11);
    r118 = `*`(lenx11, leny11);
    r119 = `<`(r118, 10000.0);
    st exact = r119;
    goto L40();
  L234():
    x4 = force? x3;
    checkMissing(x4);
    y3 = ld y;
    check L235() else D45();
  L237():
    duplicated = ldf duplicated;
    check L239() else D47();
  L238():
    r124 = dyn base15(<lang duplicated(z)>);
    goto L42(r124);
  D45():
    deopt 202 [y3];
  D47():
    deopt 210 [];
  D50():
    deopt 216 [TIES];
  L235():
    y4 = force? y3;
    checkMissing(y4);
    c38 = ldf c in base;
    r123 = dyn c38(x4, y4);
    check L236() else D46();
  L239():
    p19 = prom<V +>{
      z = ld z;
      z1 = force? z;
      checkMissing(z1);
      return z1;
    };
    r127 = dyn duplicated(p19);
    check L240() else D48();
  L242():
    TIES1 = force? TIES;
    checkMissing(TIES1);
    r129 = `!`(TIES1);
    c39 = `as.logical`(r129);
    if c39 then L243() else L43();
  D46():
    deopt 205 [r123];
  D48():
    deopt 212 [r127];
  L43():
    goto L44();
  L44():
    qsmirnov = ldf qsmirnov;
    check L245() else D51();
  L236():
    goto L41(r123);
  L240():
    any = ldf any in base;
    r128 = dyn any(r127);
    check L241() else D49();
  L243():
    st z = NULL;
    goto L44();
  D49():
    deopt 214 [r128];
  D51():
    deopt 225 [];
  L241():
    goto L42(r128);
  L245():
    p20 = prom<V +>{
      conf_level7 = ld `conf.level`;
      conf_level8 = force? conf_level7;
      checkMissing(conf_level8);
      return conf_level8;
    };
    p21 = prom<V +>{
      sym16 = ldf c;
      base16 = ldf c in base;
      guard16 = `==`.4(sym16, base16);
      if guard16 then L1() else L2();
    L0(r133):
      return r133;
    L1():
      lenx12 = ld lenx;
      lenx13 = force? lenx12;
      checkMissing(lenx13);
      leny12 = ld leny;
      leny13 = force? leny12;
      checkMissing(leny13);
      c40 = ldf c in base;
      r134 = dyn c40(lenx13, leny13);
      goto L0(r134);
    L2():
      r132 = dyn base16(<sym lenx>, <sym leny>);
      goto L0(r132);
    };
    p22 = prom<V +>{
      z2 = ld z;
      z3 = force? z2;
      checkMissing(z3);
      return z3;
    };
    p23 = prom<V +>{
      exact2 = ld exact;
      exact3 = force? exact2;
      checkMissing(exact3);
      c41 = `as.logical`(exact3);
      if c41 then L1() else L0(c41);
    L0(c43):
      return c43;
    L1():
      simulate = ld simulate;
      simulate1 = force? simulate;
      checkMissing(simulate1);
      r137 = `!`(simulate1);
      c44 = `as.logical`(r137);
      c45 = `&&`(c41, c44);
      goto L0(c45);
    };
    p24 = prom<V +>{
      simulate2 = ld simulate;
      simulate3 = force? simulate2;
      checkMissing(simulate3);
      return simulate3;
    };
    p25 = prom<V +>{
      conf_args29 = ld `conf.args`;
      conf_args30 = force? conf_args29;
      checkMissing(conf_args30);
      c47 = `is.object`(conf_args30);
      if c47 then L1() else L2(conf_args30);
    L0(dx30):
      return dx30;
    L1():
      dr28 = tryDispatchBuiltin.1("$", conf_args30);
      dc14 = getTryDispatchBuiltinDispatched(dr28);
      if dc14 then L3() else L2(dr28);
    L2(conf_args32):
      r140 = `$`(conf_args32, <sym B>);
      goto L0(r140);
    L3():
      dx29 = getTryDispatchBuiltinValue(dr28);
      goto L0(dx29);
    };
    r142 = dyn qsmirnov[, sizes, z, exact, simulate, B](p20, p21, p22, p23, p24, p25);
    check L246() else D52();
  D52():
    deopt 237 [r142];
  L246():
    st ca = r142;
    sym17 = ldf `as.double`;
    base17 = ldf `as.double` in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L247() else L248();
  L45(r144):
    st i = r144;
    sym19 = ldf ceiling;
    base19 = ldf ceiling in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L253() else L254();
  L247():
    sym18 = ldf seq_along;
    base18 = ldf seq_along in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L249() else L250();
  L248():
    r143 = dyn base17(<lang seq_along(x)>);
    goto L45(r143);
  L46(r146):
    as_double = ldf `as.double` in base;
    r148 = dyn as_double(r146);
    check L252() else D54();
  L47(r150):
    i2 = ld i;
    check L263() else D61();
  L249():
    x5 = ld x;
    check L251() else D53();
  L250():
    r145 = dyn base18(<sym x>);
    goto L46(r145);
  L253():
    i = ld i;
    check L255() else D55();
  L254():
    r149 = dyn base19(<lang `-`(`/`(`*`(i, N), lenx), `*`(ca, as.double(leny)))>);
    goto L47(r149);
  D53():
    deopt 242 [x5];
  D54():
    deopt 246 [r148];
  D55():
    deopt 249 [i];
  D61():
    deopt 263 [r150, i2];
  L251():
    x6 = force? x5;
    checkMissing(x6);
    r147 = seq_along(x6);
    goto L46(r147);
  L252():
    goto L45(r148);
  L255():
    i1 = force? i;
    checkMissing(i1);
    N = ld N;
    check L256() else D56();
  L263():
    i3 = force? i2;
    checkMissing(i3);
    r162 = `-`(r150, i3);
    st Rl = r162;
    l15 = ld Rl;
    c48 = `is.object`(l15);
    if c48 then L264() else L265(NA_LGL, l15);
  D56():
    deopt 250 [i1, N];
  L49(dx32):
    st Rl = dx32;
    l18 = ld Rl;
    c49 = `is.object`(l18);
    if c49 then L268() else L269(NA_LGL, l18);
  L256():
    N1 = force? N;
    checkMissing(N1);
    r151 = `*`(i1, N1);
    lenx14 = ld lenx;
    check L257() else D57();
  L264():
    dr30 = tryDispatchBuiltin.0("[<-", l15, NA_LGL);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L266() else L265(NA_LGL, dr30);
  L265(r164, l17):
    Rl = ld Rl;
    check L267() else D62();
  D57():
    deopt 252 [r151, lenx14];
  D62():
    deopt 270 [r164, l17, NA_LGL, Rl];
  L50(dx34):
    st Rl = dx34;
    sym21 = ldf floor;
    base21 = ldf floor in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L273() else L274();
  L257():
    lenx15 = force? lenx14;
    checkMissing(lenx15);
    r152 = `/`(r151, lenx15);
    ca = ld ca;
    check L258() else D58();
  L266():
    dx31 = getTryDispatchBuiltinValue(dr30);
    goto L49(dx31);
  L267():
    Rl1 = force? Rl;
    checkMissing(Rl1);
    r167 = `<`(Rl1, 1.0);
    ___ = ldf `[<-` in base;
    r168 = dyn ___(l17, NA_LGL, r167);
    goto L49(r168);
  L268():
    dr32 = tryDispatchBuiltin.0("[<-", l18, NA_LGL);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L270() else L269(NA_LGL, dr32);
  L269(r170, l20):
    Rl2 = ld Rl;
    check L271() else D63();
  D58():
    deopt 254 [r152, ca];
  D63():
    deopt 279 [r170, l20, NA_LGL, Rl2];
  L51(r176):
    i6 = ld i;
    check L285() else D73();
  L258():
    ca1 = force? ca;
    checkMissing(ca1);
    sym20 = ldf `as.double`;
    base20 = ldf `as.double` in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L259() else L260();
  L270():
    dx33 = getTryDispatchBuiltinValue(dr32);
    goto L50(dx33);
  L271():
    Rl3 = force? Rl2;
    checkMissing(Rl3);
    leny16 = ld leny;
    check L272() else D64();
  L273():
    i4 = ld i;
    check L275() else D65();
  L274():
    r175 = dyn base21(<lang `+`(`-`(`/`(`*`(i, N), lenx), `/`(leny, lenx)), `*`(ca, as.double(leny)))>);
    goto L51(r175);
  D64():
    deopt 280 [r170, l20, NA_LGL, Rl3, leny16];
  D65():
    deopt 286 [i4];
  D73():
    deopt 304 [r176, i6];
  L48(r156, ca4, r157):
    r159 = `*`(ca4, r157);
    r160 = `-`(r156, r159);
    r161 = ceiling(r160);
    goto L47(r161);
  L259():
    leny14 = ld leny;
    check L261() else D59();
  L260():
    r155 = dyn base20(<sym leny>);
    goto L48(r152, ca1, r155);
  L272():
    leny17 = force? leny16;
    checkMissing(leny17);
    r173 = `>`(Rl3, leny17);
    ___1 = ldf `[<-` in base;
    r174 = dyn ___1(l20, NA_LGL, r173);
    goto L50(r174);
  L275():
    i5 = force? i4;
    checkMissing(i5);
    N2 = ld N;
    check L276() else D66();
  L285():
    i7 = force? i6;
    checkMissing(i7);
    r190 = `-`(r176, i7);
    r191 = `+`(r190, 1.0);
    st Rr = r191;
    l21 = ld Rr;
    c50 = `is.object`(l21);
    if c50 then L286() else L287(NA_LGL, l21);
  D59():
    deopt 257 [r152, ca1, leny14];
  D66():
    deopt 287 [i5, N2];
  L53(dx36):
    st Rr = dx36;
    l24 = ld Rr;
    c51 = `is.object`(l24);
    if c51 then L290() else L291(NA_LGL, l24);
  L261():
    leny15 = force? leny14;
    checkMissing(leny15);
    as_double1 = ldf `as.double` in base;
    r158 = dyn as_double1(leny15);
    check L262() else D60();
  L276():
    N3 = force? N2;
    checkMissing(N3);
    r177 = `*`(i5, N3);
    lenx16 = ld lenx;
    check L277() else D67();
  L286():
    dr34 = tryDispatchBuiltin.0("[<-", l21, NA_LGL);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L288() else L287(NA_LGL, dr34);
  L287(r193, l23):
    Rr = ld Rr;
    check L289() else D74();
  D60():
    deopt 260 [r152, ca1, r158];
  D67():
    deopt 289 [r177, lenx16];
  D74():
    deopt 313 [r193, l23, NA_LGL, Rr];
  L54(dx38):
    st Rr = dx38;
    y5 = ld y;
    check L295() else D77();
  L262():
    goto L48(r152, ca1, r158);
  L277():
    lenx17 = force? lenx16;
    checkMissing(lenx17);
    r178 = `/`(r177, lenx17);
    leny18 = ld leny;
    check L278() else D68();
  L288():
    dx35 = getTryDispatchBuiltinValue(dr34);
    goto L53(dx35);
  L289():
    Rr1 = force? Rr;
    checkMissing(Rr1);
    r196 = `<`(Rr1, 1.0);
    ___2 = ldf `[<-` in base;
    r197 = dyn ___2(l23, NA_LGL, r196);
    goto L53(r197);
  L290():
    dr36 = tryDispatchBuiltin.0("[<-", l24, NA_LGL);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L292() else L291(NA_LGL, dr36);
  L291(r199, l26):
    Rr2 = ld Rr;
    check L293() else D75();
  D68():
    deopt 291 [r178, leny18];
  D75():
    deopt 322 [r199, l26, NA_LGL, Rr2];
  D77():
    deopt 328 [y5];
  L278():
    leny19 = force? leny18;
    checkMissing(leny19);
    lenx18 = ld lenx;
    check L279() else D69();
  L292():
    dx37 = getTryDispatchBuiltinValue(dr36);
    goto L54(dx37);
  L293():
    Rr3 = force? Rr2;
    checkMissing(Rr3);
    leny22 = ld leny;
    check L294() else D76();
  L295():
    y6 = force? y5;
    checkMissing(y6);
    c52 = `is.object`(y6);
    if c52 then L296() else L297(y6);
  D69():
    deopt 292 [r178, leny19, lenx18];
  D76():
    deopt 323 [r199, l26, NA_LGL, Rr3, leny22];
  L55(dx40):
    st lwr = dx40;
    y9 = ld y;
    check L300() else D79();
  L279():
    lenx19 = force? lenx18;
    checkMissing(lenx19);
    r179 = `/`(leny19, lenx19);
    r180 = `-`(r178, r179);
    ca5 = ld ca;
    check L280() else D70();
  L294():
    leny23 = force? leny22;
    checkMissing(leny23);
    r202 = `>`(Rr3, leny23);
    ___3 = ldf `[<-` in base;
    r203 = dyn ___3(l26, NA_LGL, r202);
    goto L54(r203);
  L296():
    dr38 = tryDispatchBuiltin.1("[", y6);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L298() else L297(dr38);
  L297(y8):
    Rl4 = ld Rl;
    check L299() else D78();
  D70():
    deopt 295 [r180, ca5];
  D78():
    deopt 330 [y8, Rl4];
  D79():
    deopt 334 [y9];
  L280():
    ca6 = force? ca5;
    checkMissing(ca6);
    sym22 = ldf `as.double`;
    base22 = ldf `as.double` in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L281() else L282();
  L298():
    dx39 = getTryDispatchBuiltinValue(dr38);
    goto L55(dx39);
  L299():
    Rl5 = force? Rl4;
    __ = ldf `[` in base;
    r204 = dyn __(y8, Rl5);
    goto L55(r204);
  L300():
    y10 = force? y9;
    checkMissing(y10);
    c53 = `is.object`(y10);
    if c53 then L301() else L302(y10);
  L52(r184, ca9, r185):
    r187 = `*`(ca9, r185);
    r188 = `+`(r184, r187);
    r189 = floor(r188);
    goto L51(r189);
  L56(dx42):
    st upr = dx42;
    leny24 = ld leny;
    check L305() else D81();
  L281():
    leny20 = ld leny;
    check L283() else D71();
  L282():
    r183 = dyn base22(<sym leny>);
    goto L52(r180, ca6, r183);
  L301():
    dr40 = tryDispatchBuiltin.1("[", y10);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L303() else L302(dr40);
  L302(y12):
    Rr4 = ld Rr;
    check L304() else D80();
  D71():
    deopt 298 [r180, ca6, leny20];
  D80():
    deopt 336 [y12, Rr4];
  D81():
    deopt 340 [leny24];
  L283():
    leny21 = force? leny20;
    checkMissing(leny21);
    as_double2 = ldf `as.double` in base;
    r186 = dyn as_double2(leny21);
    check L284() else D72();
  L303():
    dx41 = getTryDispatchBuiltinValue(dr40);
    goto L56(dx41);
  L304():
    Rr5 = force? Rr4;
    __1 = ldf `[` in base;
    r205 = dyn __1(y12, Rr5);
    goto L56(r205);
  L305():
    leny25 = force? leny24;
    checkMissing(leny25);
    lenx20 = ld lenx;
    check L306() else D82();
  D72():
    deopt 301 [r180, ca6, r186];
  D82():
    deopt 341 [leny25, lenx20];
  L284():
    goto L52(r180, ca6, r186);
  L306():
    lenx21 = force? lenx20;
    checkMissing(lenx21);
    r206 = `<`(leny25, lenx21);
    c54 = `as.logical`(r206);
    if c54 then L307() else L57();
  L57():
    goto L58();
  L58():
    sym23 = ldf list;
    base23 = ldf list in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L321() else L322();
  L307():
    approx2 = ldf approx;
    check L308() else D83();
  D83():
    deopt 345 [];
  L59(r222):
    st ret = r222;
    plot_it3 = ld `plot.it`;
    check L328() else D92();
  L308():
    p26 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      return x8;
    };
    p27 = prom<V +>{
      lwr = ld lwr;
      lwr1 = force? lwr;
      checkMissing(lwr1);
      return lwr1;
    };
    p28 = prom<V +>{
      sx8 = ld sx;
      sx9 = force? sx8;
      checkMissing(sx9);
      return sx9;
    };
    r210 = dyn approx2[, , xout](p26, p27, p28);
    check L309() else D84();
  L321():
    sx12 = ld sx;
    check L323() else D87();
  L322():
    r221 = dyn base23[x, y, lwr, upr](<sym sx>, <sym sy>, <sym lwr>, <sym upr>);
    goto L59(r221);
  D84():
    deopt 350 [r210];
  D87():
    deopt 366 [sx12];
  D92():
    deopt 381 [plot_it3];
  L309():
    c55 = `is.object`(r210);
    if c55 then L311() else L312(r210);
  L323():
    sx13 = force? sx12;
    checkMissing(sx13);
    sy8 = ld sy;
    check L324() else D88();
  L328():
    plot_it4 = force? plot_it3;
    checkMissing(plot_it4);
    c57 = `as.logical`(plot_it4);
    if c57 then L329() else L60();
  D88():
    deopt 369 [sy8];
  L60():
    goto L83();
  L83():
    sym48 = ldf invisible;
    base48 = ldf invisible in base;
    guard48 = `==`.4(sym48, base48);
    if guard48 then L435() else L436();
  L310(dx44):
    st lwr = dx44;
    approx3 = ldf approx;
    check L314() else D85();
  L311():
    dr42 = tryDispatchBuiltin.1("$", r210);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L313() else L312(dr42);
  L312(r212):
    r213 = `$`(r212, <sym y>);
    goto L310(r213);
  L324():
    sy9 = force? sy8;
    checkMissing(sy9);
    lwr2 = ld lwr;
    check L325() else D89();
  L329():
    plot1 = ldf plot;
    check L330() else D93();
  D85():
    deopt 354 [];
  D89():
    deopt 372 [lwr2];
  D93():
    deopt 384 [];
  L84(r347):
    popenv;
    return r347;
  L313():
    dx43 = getTryDispatchBuiltinValue(dr42);
    goto L310(dx43);
  L314():
    p29 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    p30 = prom<V +>{
      upr = ld upr;
      upr1 = force? upr;
      checkMissing(upr1);
      return upr1;
    };
    p31 = prom<V +>{
      sx10 = ld sx;
      sx11 = force? sx10;
      checkMissing(sx11);
      return sx11;
    };
    r217 = dyn approx3[, , xout](p29, p30, p31);
    check L315() else D86();
  L325():
    lwr3 = force? lwr2;
    checkMissing(lwr3);
    upr2 = ld upr;
    check L326() else D90();
  L330():
    p32 = prom<V +>{
      sx14 = ld sx;
      sx15 = force? sx14;
      checkMissing(sx15);
      return sx15;
    };
    p33 = prom<V +>{
      sy10 = ld sy;
      sy11 = force? sy10;
      checkMissing(sy11);
      return sy11;
    };
    p34 = prom<V +>{
      xlab5 = ld xlab;
      xlab6 = force? xlab5;
      checkMissing(xlab6);
      return xlab6;
    };
    p35 = prom<V +>{
      ylab5 = ld ylab;
      ylab6 = force? ylab5;
      checkMissing(ylab6);
      return ylab6;
    };
    ddd2 = ld `...`;
    r228 = dyn plot1[, , xlab, ylab, type, `...`](p32, p33, p34, p35, "n", ddd2);
    check L331() else D94();
  L435():
    ret = ld ret;
    check L437() else D149();
  L436():
    r346 = dyn base48(<sym ret>);
    goto L84(r346);
  D86():
    deopt 359 [r217];
  D90():
    deopt 375 [upr2];
  D94():
    deopt 394 [r228];
  D149():
    deopt 583 [ret];
  L315():
    c56 = `is.object`(r217);
    if c56 then L317() else L318(r217);
  L326():
    upr3 = force? upr2;
    checkMissing(upr3);
    list2 = ldf list in base;
    r223 = dyn list2(sx13, sy9, lwr3, upr3);
    check L327() else D91();
  L331():
    sym24 = ldf c;
    base24 = ldf c in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L332() else L333();
  L437():
    ret1 = force? ret;
    checkMissing(ret1);
    invisible1 = ldf invisible in base;
    r348 = dyn invisible1(ret1);
    check L438() else D150();
  D91():
    deopt 379 [r223];
  D150():
    deopt 586 [r348];
  L61(r230):
    st x = r230;
    sym29 = ldf c;
    base29 = ldf c in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L348() else L349();
  L316(dx46):
    st upr = dx46;
    goto L58();
  L317():
    dr44 = tryDispatchBuiltin.1("$", r217);
    dc22 = getTryDispatchBuiltinDispatched(dr44);
    if dc22 then L319() else L318(dr44);
  L318(r219):
    r220 = `$`(r219, <sym y>);
    goto L316(r220);
  L327():
    goto L59(r223);
  L332():
    sym25 = ldf min;
    base25 = ldf min in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L334() else L335();
  L333():
    r229 = dyn base24(<lang `-`(min(x), `/`(diff(range(x)), 2.0))>, <sym sx>, <lang `+`(max(x), `/`(diff(range(x)), 2.0))>);
    goto L61(r229);
  L438():
    goto L84(r348);
  L62(r232):
    diff = ldf diff;
    check L338() else D97();
  L64(r253):
    st lwr = r253;
    sym34 = ldf c;
    base34 = ldf c in base;
    guard34 = `==`.4(sym34, base34);
    if guard34 then L364() else L365();
  L319():
    dx45 = getTryDispatchBuiltinValue(dr44);
    goto L316(dx45);
  L334():
    x11 = ld x;
    check L336() else D95();
  L335():
    r231 = dyn base25(<sym x>);
    goto L62(r231);
  L348():
    sym30 = ldf min;
    base30 = ldf min in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L350() else L351();
  L349():
    r252 = dyn base29(<lang `-`(min(sy), `/`(diff(range(sy)), 2.0))>, <sym lwr>, <lang `+`(max(sy), `/`(diff(range(sy)), 2.0))>);
    goto L64(r252);
  D95():
    deopt 399 [x11];
  D97():
    deopt 403 [r232];
  L65(r255):
    diff2 = ldf diff;
    check L354() else D107();
  L67(r276):
    st upr = r276;
    sym39 = ldf c;
    base39 = ldf c in base;
    guard39 = `==`.4(sym39, base39);
    if guard39 then L380() else L381();
  L336():
    x12 = force? x11;
    checkMissing(x12);
    min = ldf min in base;
    r233 = dyn min(x12);
    check L337() else D96();
  L338():
    p36 = prom<V +>{
      sym26 = ldf range;
      base26 = ldf range in base;
      guard26 = `==`.4(sym26, base26);
      if guard26 then L1() else L2();
    L0(r235):
      return r235;
    L1():
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      range = ldf range in base;
      r236 = dyn range(x14);
      goto L0(r236);
    L2():
      r234 = dyn base26(<sym x>);
      goto L0(r234);
    };
    r238 = dyn diff(p36);
    check L339() else D98();
  L350():
    sy12 = ld sy;
    check L352() else D105();
  L351():
    r254 = dyn base30(<sym sy>);
    goto L65(r254);
  L364():
    sym35 = ldf min;
    base35 = ldf min in base;
    guard35 = `==`.4(sym35, base35);
    if guard35 then L366() else L367();
  L365():
    r275 = dyn base34(<lang `-`(min(sy), `/`(diff(range(sy)), 2.0))>, <sym upr>, <lang `+`(max(sy), `/`(diff(range(sy)), 2.0))>);
    goto L67(r275);
  D96():
    deopt 402 [r233];
  D98():
    deopt 405 [r232, r238];
  D105():
    deopt 430 [sy12];
  D107():
    deopt 434 [r255];
  L68(r278):
    diff4 = ldf diff;
    check L370() else D117();
  L70(r299):
    st x = r299;
    sym40 = ldf c;
    base40 = ldf c in base;
    guard40 = `==`.4(sym40, base40);
    if guard40 then L386() else L387();
  L337():
    goto L62(r233);
  L339():
    r239 = `/`(r238, 2.0);
    r240 = `-`(r232, r239);
    sx16 = ld sx;
    check L340() else D99();
  L352():
    sy13 = force? sy12;
    checkMissing(sy13);
    min1 = ldf min in base;
    r256 = dyn min1(sy13);
    check L353() else D106();
  L354():
    p38 = prom<V +>{
      sym31 = ldf range;
      base31 = ldf range in base;
      guard31 = `==`.4(sym31, base31);
      if guard31 then L1() else L2();
    L0(r258):
      return r258;
    L1():
      sy14 = ld sy;
      sy15 = force? sy14;
      checkMissing(sy15);
      range2 = ldf range in base;
      r259 = dyn range2(sy15);
      goto L0(r259);
    L2():
      r257 = dyn base31(<sym sy>);
      goto L0(r257);
    };
    r261 = dyn diff2(p38);
    check L355() else D108();
  L366():
    sy20 = ld sy;
    check L368() else D115();
  L367():
    r277 = dyn base35(<sym sy>);
    goto L68(r277);
  L380():
    x19 = ld x;
    check L382() else D125();
  L381():
    r298 = dyn base39(<sym x>, <lang rev(x)>);
    goto L70(r298);
  D99():
    deopt 409 [sx16];
  D106():
    deopt 433 [r256];
  D108():
    deopt 436 [r255, r261];
  D115():
    deopt 461 [sy20];
  D117():
    deopt 465 [r278];
  D125():
    deopt 490 [x19];
  L71(r304):
    st y = r304;
    x23 = ld x;
    check L392() else D133();
  L340():
    sx17 = force? sx16;
    checkMissing(sx17);
    sym27 = ldf max;
    base27 = ldf max in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L341() else L342();
  L353():
    goto L65(r256);
  L355():
    r262 = `/`(r261, 2.0);
    r263 = `-`(r255, r262);
    lwr4 = ld lwr;
    check L356() else D109();
  L368():
    sy21 = force? sy20;
    checkMissing(sy21);
    min2 = ldf min in base;
    r279 = dyn min2(sy21);
    check L369() else D116();
  L370():
    p40 = prom<V +>{
      sym36 = ldf range;
      base36 = ldf range in base;
      guard36 = `==`.4(sym36, base36);
      if guard36 then L1() else L2();
    L0(r281):
      return r281;
    L1():
      sy22 = ld sy;
      sy23 = force? sy22;
      checkMissing(sy23);
      range4 = ldf range in base;
      r282 = dyn range4(sy23);
      goto L0(r282);
    L2():
      r280 = dyn base36(<sym sy>);
      goto L0(r280);
    };
    r284 = dyn diff4(p40);
    check L371() else D118();
  L382():
    x20 = force? x19;
    checkMissing(x20);
    rev = ldf rev;
    check L383() else D126();
  L386():
    lwr6 = ld lwr;
    check L388() else D129();
  L387():
    r303 = dyn base40(<sym lwr>, <lang rev(upr)>);
    goto L71(r303);
  D109():
    deopt 440 [lwr4];
  D116():
    deopt 464 [r279];
  D118():
    deopt 467 [r278, r284];
  D126():
    deopt 493 [];
  D129():
    deopt 501 [lwr6];
  D133():
    deopt 510 [x23];
  L63(r242):
    diff1 = ldf diff;
    check L345() else D102();
  L341():
    x15 = ld x;
    check L343() else D100();
  L342():
    r241 = dyn base27(<sym x>);
    goto L63(r241);
  L356():
    lwr5 = force? lwr4;
    checkMissing(lwr5);
    sym32 = ldf max;
    base32 = ldf max in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L357() else L358();
  L369():
    goto L68(r279);
  L371():
    r285 = `/`(r284, 2.0);
    r286 = `-`(r278, r285);
    upr4 = ld upr;
    check L372() else D119();
  L383():
    p42 = prom<V +>{
      x21 = ld x;
      x22 = force? x21;
      checkMissing(x22);
      return x22;
    };
    r301 = dyn rev(p42);
    check L384() else D127();
  L388():
    lwr7 = force? lwr6;
    checkMissing(lwr7);
    rev1 = ldf rev;
    check L389() else D130();
  L392():
    x24 = force? x23;
    checkMissing(x24);
    c63 = `is.object`(x24);
    if c63 then L393() else L394(x24);
  D100():
    deopt 413 [x15];
  D102():
    deopt 417 [r242];
  D119():
    deopt 471 [upr4];
  D127():
    deopt 495 [r301];
  D130():
    deopt 504 [];
  L66(r265):
    diff3 = ldf diff;
    check L361() else D112();
  L72(dx49):
    st x = dx49;
    y15 = ld y;
    check L400() else D136();
  L343():
    x16 = force? x15;
    checkMissing(x16);
    max = ldf max in base;
    r243 = dyn max(x16);
    check L344() else D101();
  L345():
    p37 = prom<V +>{
      sym28 = ldf range;
      base28 = ldf range in base;
      guard28 = `==`.4(sym28, base28);
      if guard28 then L1() else L2();
    L0(r245):
      return r245;
    L1():
      x17 = ld x;
      x18 = force? x17;
      checkMissing(x18);
      range1 = ldf range in base;
      r246 = dyn range1(x18);
      goto L0(r246);
    L2():
      r244 = dyn base28(<sym x>);
      goto L0(r244);
    };
    r248 = dyn diff1(p37);
    check L346() else D103();
  L357():
    sy16 = ld sy;
    check L359() else D110();
  L358():
    r264 = dyn base32(<sym sy>);
    goto L66(r264);
  L372():
    upr5 = force? upr4;
    checkMissing(upr5);
    sym37 = ldf max;
    base37 = ldf max in base;
    guard37 = `==`.4(sym37, base37);
    if guard37 then L373() else L374();
  L384():
    c61 = ldf c in base;
    r302 = dyn c61(x20, r301);
    check L385() else D128();
  L389():
    p43 = prom<V +>{
      upr6 = ld upr;
      upr7 = force? upr6;
      checkMissing(upr7);
      return upr7;
    };
    r306 = dyn rev1(p43);
    check L390() else D131();
  L393():
    dr46 = tryDispatchBuiltin.1("[", x24);
    dc23 = getTryDispatchBuiltinDispatched(dr46);
    if dc23 then L395() else L394(dr46);
  L394(x26):
    sym41 = ldf `is.na`;
    base41 = ldf `is.na` in base;
    guard41 = `==`.4(sym41, base41);
    if guard41 then L396() else L397();
  D101():
    deopt 416 [r243];
  D103():
    deopt 419 [r242, r248];
  D110():
    deopt 444 [sy16];
  D112():
    deopt 448 [r265];
  D128():
    deopt 497 [r302];
  D131():
    deopt 506 [r306];
  D136():
    deopt 521 [y15];
  L69(r288):
    diff5 = ldf diff;
    check L377() else D122();
  L73(x29, r309):
    r311 = `!`(r309);
    __2 = ldf `[` in base;
    r312 = dyn __2(x29, r311);
    goto L72(r312);
  L344():
    goto L63(r243);
  L346():
    r249 = `/`(r248, 2.0);
    r250 = `+`(r242, r249);
    c58 = ldf c in base;
    r251 = dyn c58(r240, sx17, r250);
    check L347() else D104();
  L359():
    sy17 = force? sy16;
    checkMissing(sy17);
    max1 = ldf max in base;
    r266 = dyn max1(sy17);
    check L360() else D111();
  L361():
    p39 = prom<V +>{
      sym33 = ldf range;
      base33 = ldf range in base;
      guard33 = `==`.4(sym33, base33);
      if guard33 then L1() else L2();
    L0(r268):
      return r268;
    L1():
      sy18 = ld sy;
      sy19 = force? sy18;
      checkMissing(sy19);
      range3 = ldf range in base;
      r269 = dyn range3(sy19);
      goto L0(r269);
    L2():
      r267 = dyn base33(<sym sy>);
      goto L0(r267);
    };
    r271 = dyn diff3(p39);
    check L362() else D113();
  L373():
    sy24 = ld sy;
    check L375() else D120();
  L374():
    r287 = dyn base37(<sym sy>);
    goto L69(r287);
  L385():
    goto L70(r302);
  L390():
    c62 = ldf c in base;
    r307 = dyn c62(lwr7, r306);
    check L391() else D132();
  L395():
    dx48 = getTryDispatchBuiltinValue(dr46);
    goto L72(dx48);
  L396():
    y13 = ld y;
    check L398() else D134();
  L397():
    r308 = dyn base41(<sym y>);
    goto L73(x26, r308);
  L400():
    y16 = force? y15;
    checkMissing(y16);
    c64 = `is.object`(y16);
    if c64 then L401() else L402(y16);
  D104():
    deopt 424 [r251];
  D111():
    deopt 447 [r266];
  D113():
    deopt 450 [r265, r271];
  D120():
    deopt 475 [sy24];
  D122():
    deopt 479 [r288];
  D132():
    deopt 508 [r307];
  D134():
    deopt 514 [x26, y13];
  L74(dx51):
    st y = dx51;
    sym43 = ldf c;
    base43 = ldf c in base;
    guard43 = `==`.4(sym43, base43);
    if guard43 then L408() else L409();
  L347():
    goto L61(r251);
  L360():
    goto L66(r266);
  L362():
    r272 = `/`(r271, 2.0);
    r273 = `+`(r265, r272);
    c59 = ldf c in base;
    r274 = dyn c59(r263, lwr5, r273);
    check L363() else D114();
  L375():
    sy25 = force? sy24;
    checkMissing(sy25);
    max2 = ldf max in base;
    r289 = dyn max2(sy25);
    check L376() else D121();
  L377():
    p41 = prom<V +>{
      sym38 = ldf range;
      base38 = ldf range in base;
      guard38 = `==`.4(sym38, base38);
      if guard38 then L1() else L2();
    L0(r291):
      return r291;
    L1():
      sy26 = ld sy;
      sy27 = force? sy26;
      checkMissing(sy27);
      range5 = ldf range in base;
      r292 = dyn range5(sy27);
      goto L0(r292);
    L2():
      r290 = dyn base38(<sym sy>);
      goto L0(r290);
    };
    r294 = dyn diff5(p41);
    check L378() else D123();
  L391():
    goto L71(r307);
  L398():
    y14 = force? y13;
    checkMissing(y14);
    is_na = ldf `is.na` in base;
    r310 = dyn is_na(y14);
    check L399() else D135();
  L401():
    dr48 = tryDispatchBuiltin.1("[", y16);
    dc24 = getTryDispatchBuiltinDispatched(dr48);
    if dc24 then L403() else L402(dr48);
  L402(y18):
    sym42 = ldf `is.na`;
    base42 = ldf `is.na` in base;
    guard42 = `==`.4(sym42, base42);
    if guard42 then L404() else L405();
  D114():
    deopt 455 [r274];
  D121():
    deopt 478 [r289];
  D123():
    deopt 481 [r288, r294];
  D135():
    deopt 517 [x26, r310];
  L75(y21, r314):
    r316 = `!`(r314);
    __3 = ldf `[` in base;
    r317 = dyn __3(y21, r316);
    goto L74(r317);
  L76(r319):
    st xn = r319;
    sym45 = ldf c;
    base45 = ldf c in base;
    guard45 = `==`.4(sym45, base45);
    if guard45 then L417() else L418();
  L363():
    goto L64(r274);
  L376():
    goto L69(r289);
  L378():
    r295 = `/`(r294, 2.0);
    r296 = `+`(r288, r295);
    c60 = ldf c in base;
    r297 = dyn c60(r286, upr5, r296);
    check L379() else D124();
  L399():
    goto L73(x26, r310);
  L403():
    dx50 = getTryDispatchBuiltinValue(dr48);
    goto L74(dx50);
  L404():
    y22 = ld y;
    check L406() else D137();
  L405():
    r313 = dyn base42(<sym y>);
    goto L75(y18, r313);
  L408():
    x30 = ld x;
    check L410() else D139();
  L409():
    r318 = dyn base43(<lang `[`(x, 1)>, <lang rep(`[`(x, `-`(1)), each=2.0)>);
    goto L76(r318);
  D124():
    deopt 486 [r297];
  D137():
    deopt 525 [y18, y22];
  D139():
    deopt 534 [x30];
  L79(r326):
    st yn = r326;
    polygon = ldf polygon;
    check L430() else D145();
  L379():
    goto L67(r297);
  L406():
    y23 = force? y22;
    checkMissing(y23);
    is_na1 = ldf `is.na` in base;
    r315 = dyn is_na1(y23);
    check L407() else D138();
  L410():
    x31 = force? x30;
    checkMissing(x31);
    c65 = `is.object`(x31);
    if c65 then L411() else L412(x31);
  L417():
    sym46 = ldf rep;
    base46 = ldf rep in base;
    guard46 = `==`.4(sym46, base46);
    if guard46 then L419() else L420();
  L418():
    r325 = dyn base45(<lang rep(`[`(y, `-`(length(y))), each=2.0)>, <lang `[`(y, length(y))>);
    goto L79(r325);
  D138():
    deopt 528 [y18, r315];
  D145():
    deopt 563 [];
  L77(dx53):
    sym44 = ldf rep;
    base44 = ldf rep in base;
    guard44 = `==`.4(sym44, base44);
    if guard44 then L414() else L415();
  L80(r328):
    y24 = ld y;
    check L421() else D141();
  L407():
    goto L75(y18, r315);
  L411():
    dr50 = tryDispatchBuiltin.1("[", x31);
    dc25 = getTryDispatchBuiltinDispatched(dr50);
    if dc25 then L413() else L412(dr50);
  L412(x33):
    __4 = ldf `[` in base;
    r320 = dyn __4(x33, 1);
    goto L77(r320);
  L419():
    rep1 = ldf rep in base;
    r329 = dyn rep1(<lang `[`(y, `-`(length(y)))>, 2.0);
    goto L80(r329);
  L420():
    r327 = dyn base46[, each](<lang `[`(y, `-`(length(y)))>, 2.0);
    goto L80(r327);
  L430():
    p44 = prom<V +>{
      xn = ld xn;
      xn1 = force? xn;
      checkMissing(xn1);
      return xn1;
    };
    p45 = prom<V +>{
      yn = ld yn;
      yn1 = force? yn;
      checkMissing(yn1);
      return yn1;
    };
    p46 = prom<V +>{
      conf_args33 = ld `conf.args`;
      conf_args34 = force? conf_args33;
      checkMissing(conf_args34);
      c69 = `is.object`(conf_args34);
      if c69 then L1() else L2(conf_args34);
    L0(dx57):
      return dx57;
    L1():
      dr54 = tryDispatchBuiltin.1("$", conf_args34);
      dc27 = getTryDispatchBuiltinDispatched(dr54);
      if dc27 then L3() else L2(dr54);
    L2(conf_args36):
      r337 = `$`(conf_args36, <sym col>);
      goto L0(r337);
    L3():
      dx56 = getTryDispatchBuiltinValue(dr54);
      goto L0(dx56);
    };
    p47 = prom<V +>{
      conf_args37 = ld `conf.args`;
      conf_args38 = force? conf_args37;
      checkMissing(conf_args38);
      c70 = `is.object`(conf_args38);
      if c70 then L1() else L2(conf_args38);
    L0(dx59):
      return dx59;
    L1():
      dr56 = tryDispatchBuiltin.1("$", conf_args38);
      dc28 = getTryDispatchBuiltinDispatched(dr56);
      if dc28 then L3() else L2(dr56);
    L2(conf_args40):
      r339 = `$`(conf_args40, <sym border>);
      goto L0(r339);
    L3():
      dx58 = getTryDispatchBuiltinValue(dr56);
      goto L0(dx58);
    };
    r341 = dyn polygon[x, y, col, border](p44, p45, p46, p47);
    check L431() else D146();
  D141():
    deopt 550 [y24];
  D146():
    deopt 572 [r341];
  L78(r322):
    c66 = ldf c in base;
    r324 = dyn c66(dx53, r322);
    check L416() else D140();
  L413():
    dx52 = getTryDispatchBuiltinValue(dr50);
    goto L77(dx52);
  L414():
    rep = ldf rep in base;
    r323 = dyn rep(<lang `[`(x, `-`(1))>, 2.0);
    goto L78(r323);
  L415():
    r321 = dyn base44[, each](<lang `[`(x, `-`(1))>, 2.0);
    goto L78(r321);
  L421():
    y25 = force? y24;
    checkMissing(y25);
    c67 = `is.object`(y25);
    if c67 then L422() else L423(y25);
  L431():
    points = ldf points;
    check L432() else D147();
  D140():
    deopt 543 [r324];
  D147():
    deopt 574 [];
  L81(dx55):
    c68 = ldf c in base;
    r334 = dyn c68(r328, dx55);
    check L429() else D144();
  L416():
    goto L76(r324);
  L422():
    dr52 = tryDispatchBuiltin.1("[", y25);
    dc26 = getTryDispatchBuiltinDispatched(dr52);
    if dc26 then L424() else L423(dr52);
  L423(y27):
    sym47 = ldf length;
    base47 = ldf length in base;
    guard47 = `==`.4(sym47, base47);
    if guard47 then L425() else L426();
  L432():
    p48 = prom<V +>{
      sx18 = ld sx;
      sx19 = force? sx18;
      checkMissing(sx19);
      return sx19;
    };
    p49 = prom<V +>{
      sy28 = ld sy;
      sy29 = force? sy28;
      checkMissing(sy29);
      return sy29;
    };
    ddd3 = ld `...`;
    r344 = dyn points[, , `...`](p48, p49, ddd3);
    check L433() else D148();
  D144():
    deopt 560 [r334];
  D148():
    deopt 578 [r344];
  L82(y30, r331):
    __5 = ldf `[` in base;
    r333 = dyn __5(y30, r331);
    goto L81(r333);
  L424():
    dx54 = getTryDispatchBuiltinValue(dr52);
    goto L81(dx54);
  L425():
    y31 = ld y;
    check L427() else D142();
  L426():
    r330 = dyn base47(<sym y>);
    goto L82(y27, r330);
  L429():
    goto L79(r334);
  L433():
    goto L83();
  D142():
    deopt 554 [y27, y31];
  L427():
    y32 = force? y31;
    checkMissing(y32);
    length2 = ldf length in base;
    r332 = dyn length2(y32);
    check L428() else D143();
  D143():
    deopt 557 [y27, r332];
  L428():
    goto L82(y27, r332);
  }
}