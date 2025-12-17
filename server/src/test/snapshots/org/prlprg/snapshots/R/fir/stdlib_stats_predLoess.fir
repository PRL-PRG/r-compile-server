fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner207763685;
    st predLoess = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner207763685(y, x, newx, s, weights, robust, span, degree, normalize, parametric, `drop.square`, surface, cell, family, kd, divisor, se) {
  (reg y:*, reg x:*, reg newx:*, reg s:*, reg weights:*, reg robust:*, reg span:*, reg degree:*, reg normalize:*, reg parametric:*, reg drop_square:*, reg surface:*, reg cell:*, reg family:*, reg kd:*, reg divisor:*, reg se:*) -+> V { var y:*, var x:*, var newx:*, var s:*, var weights:*, var robust:*, var span:*, var degree:*, var normalize:*, var parametric:*, var `drop.square`:*, var surface:*, var cell:*, var family:*, var kd:*, var divisor:*, var se:*, reg se_isMissing:L, reg se_orDefault:*, reg NCOL:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg NROW:cls, reg x3:*, reg x4:V, reg p1:p(V +), reg r3:V, reg NROW1:cls, reg newx1:*, reg newx2:V, reg p2:p(V +), reg r5:V, reg as_matrix:cls, reg x5:*, reg x6:V, reg p3:p(V +), reg r7:V, reg as_matrix1:cls, reg newx3:*, reg newx4:V, reg p4:p(V +), reg r9:V, reg sym:cls, reg base:cls, reg guard:L, reg r10:V, reg r11:V, reg divisor1:*, reg divisor2:V, reg r12:V, reg any:cls, reg r13:V, reg c:L, reg newx5:*, reg newx6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r14:V, reg newx9:V, reg r15:V, reg rep:cls, reg r16:V, reg r17:V, reg x7:*, reg x8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r18:V, reg x11:V, reg r19:V, reg rep1:cls, reg r20:V, reg r21:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r23:V, reg r24:V, reg drop_square1:*, reg drop_square2:V, reg sum:cls, reg r25:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r26:V, reg r27:V, reg parametric1:*, reg parametric2:V, reg r28:V, reg sum1:cls, reg r29:V, reg order:cls, reg parametric3:*, reg parametric4:V, reg p5:p(V +), reg r31:V, reg x12:*, reg x13:V, reg c1:L, reg x15:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg order_parametric:*, reg order_parametric1:V, reg __:cls, reg r32:V, reg newx10:*, reg newx11:V, reg c2:L, reg newx13:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg order_parametric2:*, reg order_parametric3:V, reg __1:cls, reg r33:V, reg drop_square3:*, reg drop_square4:V, reg r34:V, reg c3:L, reg r36:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg order_parametric4:*, reg order_parametric5:V, reg __2:cls, reg r37:V, reg l:*, reg storage_mode__:cls, reg r38:V, reg l1:*, reg storage_mode__1:cls, reg r39:V, reg surface1:*, reg surface2:V, reg r40:V, reg c4:L, reg rowSums:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r41:V, reg r42:V, reg newx14:*, reg newx15:V, reg is_na:cls, reg r43:V, reg p6:p(V +), reg r45:V, reg r46:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r47:V, reg r48:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r49:V, reg r50:V, reg nas:*, reg nas1:V, reg length:cls, reg r51:V, reg rep_len:cls, reg r52:V, reg x_evaluate:*, reg x_evaluate1:V, reg c5:L, reg x_evaluate3:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg nas2:*, reg nas3:V, reg r53:V, reg __3:cls, reg r54:V, reg nrow:cls, reg x_evaluate4:*, reg x_evaluate5:V, reg p7:p(V +), reg r56:V, reg se1:*, reg se2:V, reg c6:L, reg fit:*, reg fit1:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r57:V, reg r58:V, reg C_loess_dfitse:*, reg C_loess_dfitse1:V, reg y1:*, reg y2:V, reg x16:*, reg x17:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r59:V, reg r60:V, reg x_evaluate6:*, reg x_evaluate7:V, reg as_double:cls, reg r61:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r62:V, reg r63:V, reg weights1:*, reg weights2:V, reg robust1:*, reg robust2:V, reg r64:V, reg as_double1:cls, reg r65:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r66:V, reg r67:V, reg robust3:*, reg robust4:V, reg as_double2:cls, reg r68:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r69:V, reg r70:V, reg family1:*, reg family2:V, reg r71:V, reg as_integer:cls, reg r72:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r73:V, reg r74:V, reg span1:*, reg span2:V, reg as_double3:cls, reg r75:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r76:V, reg r77:V, reg degree1:*, reg degree2:V, reg as_integer1:cls, reg r78:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r79:V, reg r80:V, reg nonparametric:*, reg nonparametric1:V, reg as_integer2:cls, reg r81:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r82:V, reg r83:V, reg order_drop_sqr:*, reg order_drop_sqr1:V, reg as_integer3:cls, reg r84:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r85:V, reg r86:V, reg sum_drop_sqr:*, reg sum_drop_sqr1:V, reg as_integer4:cls, reg r87:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r88:V, reg r89:V, reg D:*, reg D1:V, reg as_integer5:cls, reg r90:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r91:V, reg r92:V, reg N:*, reg N1:V, reg as_integer6:cls, reg r93:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r94:V, reg r95:V, reg M:*, reg M1:V, reg as_integer7:cls, reg r96:V, reg double:cls, reg M2:*, reg M3:V, reg p8:p(V +), reg r98:V, reg double1:cls, reg N2:*, reg N3:V, reg M4:*, reg M5:V, reg r99:V, reg p9:p(V +), reg r101:V, reg _C:cls, reg r102:V, reg c7:L, reg r104:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r107:V, reg r108:V, reg r109:V, reg c8:cls, reg r110:V, reg __4:cls, reg r111:V, reg z:*, reg z1:V, reg c9:L, reg z3:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r112:V, reg l2:*, reg c10:L, reg dx13:V, reg l4:*, reg dr12:V, reg dc6:L, reg dx15:V, reg dx17:V, reg nas4:*, reg nas5:V, reg r113:V, reg ___:cls, reg r114:V, reg rowSums1:cls, reg matrix:cls, reg z4:*, reg z5:V, reg c11:L, reg z7:V, reg dr14:V, reg dc7:L, reg dx18:V, reg dx19:V, reg r115:V, reg r116:V, reg p10:p(V +), reg M6:*, reg M7:V, reg p11:p(V +), reg N4:*, reg N5:V, reg p12:p(V +), reg r120:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r123:V, reg r124:V, reg r125:V, reg rep2:cls, reg r126:V, reg r127:V, reg p13:p(V +), reg r129:V, reg s1:*, reg s2:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r130:V, reg s5:V, reg r131:V, reg ses:*, reg ses1:V, reg r132:V, reg r133:V, reg l5:*, reg c12:L, reg r135:V, reg l7:*, reg dr16:V, reg dc8:L, reg dx20:V, reg r137:V, reg dx21:V, reg nas6:*, reg nas7:V, reg r138:V, reg ___1:cls, reg r139:V, reg r140:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r141:V, reg r142:V, reg C_loess_dfit:*, reg C_loess_dfit1:V, reg y3:*, reg y4:V, reg x18:*, reg x19:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r143:V, reg r144:V, reg x_evaluate8:*, reg x_evaluate9:V, reg as_double4:cls, reg r145:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r146:V, reg r147:V, reg weights3:*, reg weights4:V, reg robust5:*, reg robust6:V, reg r148:V, reg as_double5:cls, reg r149:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r150:V, reg r151:V, reg span3:*, reg span4:V, reg as_double6:cls, reg r152:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r153:V, reg r154:V, reg degree3:*, reg degree4:V, reg as_integer8:cls, reg r155:V, reg sym29:cls, reg base29:cls, reg guard29:L, reg r156:V, reg r157:V, reg nonparametric2:*, reg nonparametric3:V, reg as_integer9:cls, reg r158:V, reg sym30:cls, reg base30:cls, reg guard30:L, reg r159:V, reg r160:V, reg order_drop_sqr2:*, reg order_drop_sqr3:V, reg as_integer10:cls, reg r161:V, reg sym31:cls, reg base31:cls, reg guard31:L, reg r162:V, reg r163:V, reg sum_drop_sqr2:*, reg sum_drop_sqr3:V, reg as_integer11:cls, reg r164:V, reg sym32:cls, reg base32:cls, reg guard32:L, reg r165:V, reg r166:V, reg D2:*, reg D3:V, reg as_integer12:cls, reg r167:V, reg sym33:cls, reg base33:cls, reg guard33:L, reg r168:V, reg r169:V, reg N6:*, reg N7:V, reg as_integer13:cls, reg r170:V, reg sym34:cls, reg base34:cls, reg guard34:L, reg r171:V, reg r172:V, reg M8:*, reg M9:V, reg as_integer14:cls, reg r173:V, reg double2:cls, reg M10:*, reg M11:V, reg p14:p(V +), reg r175:V, reg _C1:cls, reg r176:V, reg c13:L, reg r178:V, reg dr18:V, reg dc9:L, reg dx22:V, reg dx23:V, reg r179:V, reg l8:*, reg c14:L, reg dx25:V, reg l10:*, reg dr20:V, reg dc10:L, reg dx27:V, reg dx28:V, reg dx29:V, reg nas8:*, reg nas9:V, reg r180:V, reg ___2:cls, reg r181:V, reg apply:cls, reg x20:*, reg x21:V, reg p15:p(V +), reg range:*, reg range1:V, reg p16:p(V +), reg r185:V, reg rowSums2:cls, reg x_evaluate10:*, reg x_evaluate11:V, reg sym35:cls, reg base35:cls, reg guard35:L, reg r186:V, reg x_evaluate14:V, reg r187:V, reg rep3:cls, reg r188:V, reg r189:V, reg x_evaluate15:*, reg x_evaluate16:V, reg sym36:cls, reg base36:cls, reg guard36:L, reg r192:V, reg r193:V, reg x_evaluate19:V, reg r194:V, reg rep4:cls, reg r195:V, reg r196:V, reg r197:V, reg p17:p(V +), reg r199:V, reg D4:*, reg D5:V, reg r200:V, reg l11:*, reg c15:L, reg r202:L, reg l13:*, reg dr22:V, reg dc11:L, reg dx30:V, reg dx31:V, reg sym37:cls, reg base37:cls, reg guard37:L, reg r209:V, reg r210:L, reg l16:*, reg r211:L, reg r212:V, reg inside:*, reg inside1:V, reg is_na1:cls, reg r213:V, reg ___3:cls, reg r214:V, reg sym38:cls, reg base38:cls, reg guard38:L, reg r215:V, reg r216:V, reg inside2:*, reg inside3:V, reg sum2:cls, reg r217:V, reg sym39:cls, reg base39:cls, reg guard39:L, reg r218:V, reg r219:V, reg M12:*, reg M13:V, reg rep_len1:cls, reg r220:V, reg sym40:cls, reg base40:cls, reg guard40:L, reg r221:V, reg r222:V, reg inside4:*, reg inside5:V, reg any1:cls, reg r223:V, reg c16:L, reg sym41:cls, reg base41:cls, reg guard41:L, reg r224:V, reg r225:V, reg C_loess_ifit:*, reg C_loess_ifit1:V, reg sym42:cls, reg base42:cls, reg guard42:L, reg r226:V, reg r227:V, reg kd1:*, reg kd2:V, reg c17:L, reg kd4:V, reg dr24:V, reg dc12:L, reg dx32:V, reg dx33:V, reg r228:V, reg as_integer15:cls, reg r229:V, reg sym43:cls, reg base43:cls, reg guard43:L, reg r230:V, reg r231:V, reg kd5:*, reg kd6:V, reg c18:L, reg kd8:V, reg dr26:V, reg dc13:L, reg dx34:V, reg dx35:V, reg r232:V, reg as_integer16:cls, reg r233:V, reg sym44:cls, reg base44:cls, reg guard44:L, reg r234:V, reg r235:V, reg kd9:*, reg kd10:V, reg c19:L, reg kd12:V, reg dr28:V, reg dc14:L, reg dx36:V, reg dx37:V, reg r236:V, reg as_double7:cls, reg r237:V, reg sym45:cls, reg base45:cls, reg guard45:L, reg r238:V, reg r239:V, reg kd13:*, reg kd14:V, reg c20:L, reg kd16:V, reg dr30:V, reg dc15:L, reg dx38:V, reg dx39:V, reg r240:V, reg as_double8:cls, reg r241:V, reg sym46:cls, reg base46:cls, reg guard46:L, reg r242:V, reg r243:V, reg kd17:*, reg kd18:V, reg c21:L, reg kd20:V, reg dr32:V, reg dc16:L, reg dx40:V, reg dx41:V, reg r244:V, reg as_double9:cls, reg r245:V, reg sym47:cls, reg base47:cls, reg guard47:L, reg r246:V, reg r247:V, reg M14:*, reg M15:V, reg as_integer17:cls, reg r248:V, reg sym48:cls, reg base48:cls, reg guard48:L, reg r249:V, reg r250:V, reg x_evaluate20:*, reg x_evaluate21:V, reg c22:L, reg x_evaluate23:V, reg dr34:V, reg dc17:L, reg dx42:V, reg dx43:V, reg inside6:*, reg inside7:V, reg __5:cls, reg r251:V, reg as_double10:cls, reg r252:V, reg double3:cls, reg M16:*, reg M17:V, reg p18:p(V +), reg r254:V, reg _C2:cls, reg r255:V, reg c23:L, reg r257:V, reg dr36:V, reg dc18:L, reg dx44:V, reg dx45:V, reg r258:V, reg l17:*, reg c24:L, reg dx47:V, reg l19:*, reg dr38:V, reg dc19:L, reg dx49:V, reg dx50:V, reg dx51:V, reg inside8:*, reg inside9:V, reg ___4:cls, reg r259:V, reg se3:*, reg se4:V, reg c25:L, reg sym49:cls, reg base49:cls, reg guard49:L, reg r260:V, reg r261:V, reg M18:*, reg M19:V, reg rep_len2:cls, reg r262:V, reg sym50:cls, reg base50:cls, reg guard50:L, reg r263:V, reg r264:V, reg inside10:*, reg inside11:V, reg any2:cls, reg r265:V, reg c26:L, reg sym51:cls, reg base51:cls, reg guard51:L, reg r266:V, reg r267:V, reg C_loess_ise:*, reg C_loess_ise1:V, reg y5:*, reg y6:V, reg x22:*, reg x23:V, reg sym52:cls, reg base52:cls, reg guard52:L, reg r268:V, reg r269:V, reg x_evaluate24:*, reg x_evaluate25:V, reg c27:L, reg x_evaluate27:V, reg dr40:V, reg dc20:L, reg dx53:V, reg dx54:V, reg inside12:*, reg inside13:V, reg __6:cls, reg r270:V, reg as_double11:cls, reg r271:V, reg sym53:cls, reg base53:cls, reg guard53:L, reg r272:V, reg r273:V, reg weights5:*, reg weights6:V, reg as_double12:cls, reg r274:V, reg sym54:cls, reg base54:cls, reg guard54:L, reg r275:V, reg r276:V, reg span5:*, reg span6:V, reg as_double13:cls, reg r277:V, reg sym55:cls, reg base55:cls, reg guard55:L, reg r278:V, reg r279:V, reg degree5:*, reg degree6:V, reg as_integer18:cls, reg r280:V, reg sym56:cls, reg base56:cls, reg guard56:L, reg r281:V, reg r282:V, reg nonparametric4:*, reg nonparametric5:V, reg as_integer19:cls, reg r283:V, reg sym57:cls, reg base57:cls, reg guard57:L, reg r284:V, reg r285:V, reg order_drop_sqr4:*, reg order_drop_sqr5:V, reg as_integer20:cls, reg r286:V, reg sym58:cls, reg base58:cls, reg guard58:L, reg r287:V, reg r288:V, reg sum_drop_sqr4:*, reg sum_drop_sqr5:V, reg as_integer21:cls, reg r289:V, reg sym59:cls, reg base59:cls, reg guard59:L, reg r290:V, reg r291:V, reg span7:*, reg span8:V, reg cell1:*, reg cell2:V, reg r292:V, reg as_double14:cls, reg r293:V, reg sym60:cls, reg base60:cls, reg guard60:L, reg r294:V, reg r295:V, reg D6:*, reg D7:V, reg as_integer22:cls, reg r296:V, reg sym61:cls, reg base61:cls, reg guard61:L, reg r297:V, reg r298:V, reg N8:*, reg N9:V, reg as_integer23:cls, reg r299:V, reg sym62:cls, reg base62:cls, reg guard62:L, reg r300:V, reg r301:V, reg M20:*, reg M21:V, reg as_integer24:cls, reg r302:V, reg double4:cls, reg M22:*, reg M23:V, reg p19:p(V +), reg r304:V, reg double5:cls, reg N10:*, reg N11:V, reg M24:*, reg M25:V, reg r305:V, reg p20:p(V +), reg r307:V, reg _C3:cls, reg r308:V, reg c28:L, reg r310:V, reg dr42:V, reg dc21:L, reg dx55:V, reg dx56:V, reg r311:V, reg rowSums3:cls, reg matrix1:cls, reg L:*, reg L1:V, reg r312:V, reg p21:p(V +), reg M26:*, reg M27:V, reg p22:p(V +), reg N12:*, reg N13:V, reg p23:p(V +), reg r316:V, reg sym63:cls, reg base63:cls, reg guard63:L, reg r319:V, reg r320:V, reg r321:V, reg rep5:cls, reg r322:V, reg r323:V, reg p24:p(V +), reg r325:V, reg s6:*, reg s7:V, reg sym64:cls, reg base64:cls, reg guard64:L, reg r326:V, reg s10:V, reg r327:V, reg tmp:*, reg tmp1:V, reg r328:V, reg r329:V, reg l20:*, reg c29:L, reg r331:V, reg l22:*, reg dr44:V, reg dc22:L, reg dx57:V, reg r333:V, reg dx58:V, reg inside14:*, reg inside15:V, reg ___5:cls, reg r334:V, reg r335:V, reg rownames:cls, reg newx16:*, reg newx17:V, reg p25:p(V +), reg r337:V, reg se5:*, reg se6:V, reg c30:L, reg sym65:cls, reg base65:cls, reg guard65:L, reg r338:V, reg r339:V, reg rn:*, reg rn1:V, reg c31:V, reg r340:V, reg c32:L, reg rn2:*, reg rn3:V, reg l23:*, reg names__:cls, reg r341:V, reg l24:*, reg names__1:cls, reg r342:V, reg sym66:cls, reg base66:cls, reg guard66:L, reg r343:V, reg r344:V, reg fit2:*, reg fit3:V, reg sym67:cls, reg base67:cls, reg guard67:L, reg r345:V, reg r346:V, reg se_fit:*, reg se_fit1:V, reg drop:cls, reg r347:V, reg s11:*, reg s12:V, reg list:cls, reg r348:V, reg sym68:cls, reg base68:cls, reg guard68:L, reg r349:V, reg r350:V, reg rn5:*, reg rn6:V, reg c33:V, reg r351:V, reg c34:L, reg rn7:*, reg rn8:V, reg l25:*, reg names__2:cls, reg r352:V, reg fit4:*, reg fit5:V |
    mkenv;
    st y = y;
    st x = x;
    st newx = newx;
    st s = s;
    st weights = weights;
    st robust = robust;
    st span = span;
    st degree = degree;
    st normalize = normalize;
    st parametric = parametric;
    st `drop.square` = drop_square;
    st surface = surface;
    st cell = cell;
    st family = family;
    st kd = kd;
    st divisor = divisor;
    se_isMissing = missing.0(se);
    if se_isMissing then L0(FALSE) else L0(se);
  L0(se_orDefault):
    st se = se_orDefault;
    NCOL = ldf NCOL;
    check L94() else D0();
  D0():
    deopt 1 [];
  L94():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn NCOL(p);
    check L95() else D1();
  D1():
    deopt 3 [r1];
  L95():
    st D = r1;
    NROW = ldf NROW;
    check L96() else D2();
  D2():
    deopt 6 [];
  L96():
    p1 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r3 = dyn NROW(p1);
    check L97() else D3();
  D3():
    deopt 8 [r3];
  L97():
    st N = r3;
    NROW1 = ldf NROW;
    check L98() else D4();
  D4():
    deopt 11 [];
  L98():
    p2 = prom<V +>{
      newx1 = ld newx;
      newx2 = force? newx1;
      checkMissing(newx2);
      return newx2;
    };
    r5 = dyn NROW1(p2);
    check L99() else D5();
  D5():
    deopt 13 [r5];
  L99():
    st M = r5;
    as_matrix = ldf `as.matrix`;
    check L100() else D6();
  D6():
    deopt 16 [];
  L100():
    p3 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r7 = dyn as_matrix(p3);
    check L101() else D7();
  D7():
    deopt 18 [r7];
  L101():
    st x = r7;
    as_matrix1 = ldf `as.matrix`;
    check L102() else D8();
  D8():
    deopt 21 [];
  L102():
    p4 = prom<V +>{
      newx3 = ld newx;
      newx4 = force? newx3;
      checkMissing(newx4);
      return newx4;
    };
    r9 = dyn as_matrix1(p4);
    check L103() else D9();
  D9():
    deopt 23 [r9];
  L103():
    st newx = r9;
    sym = ldf any;
    base = ldf any in base;
    guard = `==`.4(sym, base);
    if guard then L104() else L105();
  L1(r11):
    c = `as.logical`(r11);
    if c then L108() else L2();
  L104():
    divisor1 = ld divisor;
    check L106() else D10();
  L105():
    r10 = dyn base(<lang `!=`(divisor, 1.0)>);
    goto L1(r10);
  D10():
    deopt 27 [divisor1];
  L2():
    goto L5();
  L5():
    sym3 = ldf sum;
    base3 = ldf sum in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L116() else L117();
  L106():
    divisor2 = force? divisor1;
    checkMissing(divisor2);
    r12 = `!=`(divisor2, 1.0);
    any = ldf any in base;
    r13 = dyn any(r12);
    check L107() else D11();
  L108():
    newx5 = ld newx;
    check L109() else D12();
  D11():
    deopt 32 [r13];
  D12():
    deopt 33 [newx5];
  L6(r24):
    st `sum.drop.sqr` = r24;
    sym4 = ldf sum;
    base4 = ldf sum in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L120() else L121();
  L107():
    goto L1(r13);
  L109():
    newx6 = force? newx5;
    checkMissing(newx6);
    sym1 = ldf rep;
    base1 = ldf rep in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L110() else L111();
  L116():
    drop_square1 = ld `drop.square`;
    check L118() else D14();
  L117():
    r23 = dyn base3(<sym drop.square>);
    goto L6(r23);
  D14():
    deopt 49 [drop_square1];
  L3(newx9, r15):
    r17 = `/`(newx9, r15);
    st newx = r17;
    x7 = ld x;
    check L112() else D13();
  L7(r27):
    st nonparametric = r27;
    order = ldf order;
    check L124() else D18();
  L110():
    rep = ldf rep in base;
    r16 = dyn rep(<sym divisor>, <lang rep_len(M, D)>);
    goto L3(newx6, r16);
  L111():
    r14 = dyn base1(<sym divisor>, <lang rep_len(M, D)>);
    goto L3(newx6, r14);
  L118():
    drop_square2 = force? drop_square1;
    checkMissing(drop_square2);
    sum = ldf sum in base;
    r25 = dyn sum(drop_square2);
    check L119() else D15();
  L120():
    parametric1 = ld parametric;
    check L122() else D16();
  L121():
    r26 = dyn base4(<lang `!`(parametric)>);
    goto L7(r26);
  D13():
    deopt 39 [x7];
  D15():
    deopt 52 [r25];
  D16():
    deopt 56 [parametric1];
  D18():
    deopt 63 [];
  L112():
    x8 = force? x7;
    checkMissing(x8);
    sym2 = ldf rep;
    base2 = ldf rep in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L113() else L114();
  L119():
    goto L6(r25);
  L122():
    parametric2 = force? parametric1;
    checkMissing(parametric2);
    r28 = `!`(parametric2);
    sum1 = ldf sum in base;
    r29 = dyn sum1(r28);
    check L123() else D17();
  L124():
    p5 = prom<V +>{
      parametric3 = ld parametric;
      parametric4 = force? parametric3;
      checkMissing(parametric4);
      return parametric4;
    };
    r31 = dyn order(p5);
    check L125() else D19();
  D17():
    deopt 60 [r29];
  D19():
    deopt 65 [r31];
  L4(x11, r19):
    r21 = `/`(x11, r19);
    st x = r21;
    goto L5();
  L113():
    rep1 = ldf rep in base;
    r20 = dyn rep1(<sym divisor>, <lang rep_len(N, D)>);
    goto L4(x8, r20);
  L114():
    r18 = dyn base2(<sym divisor>, <lang rep_len(N, D)>);
    goto L4(x8, r18);
  L123():
    goto L7(r29);
  L125():
    st `order.parametric` = r31;
    x12 = ld x;
    check L126() else D20();
  D20():
    deopt 67 [x12];
  L126():
    x13 = force? x12;
    checkMissing(x13);
    c1 = `is.object`(x13);
    if c1 then L127() else L128(x13);
  L8(dx1):
    st x = dx1;
    newx10 = ld newx;
    check L131() else D22();
  L127():
    dr = tryDispatchBuiltin.1("[", x13);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L129() else L128(dr);
  L128(x15):
    order_parametric = ld `order.parametric`;
    check L130() else D21();
  D21():
    deopt 70 [x15, order_parametric];
  D22():
    deopt 77 [newx10];
  L129():
    dx = getTryDispatchBuiltinValue(dr);
    goto L8(dx);
  L130():
    order_parametric1 = force? order_parametric;
    __ = ldf `[` in base;
    r32 = dyn __(x13, <missing>, order_parametric1, FALSE);
    goto L8(r32);
  L131():
    newx11 = force? newx10;
    checkMissing(newx11);
    c2 = `is.object`(newx11);
    if c2 then L132() else L133(newx11);
  L9(dx3):
    st `x.evaluate` = dx3;
    drop_square3 = ld `drop.square`;
    check L136() else D24();
  L132():
    dr2 = tryDispatchBuiltin.1("[", newx11);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L134() else L133(dr2);
  L133(newx13):
    order_parametric2 = ld `order.parametric`;
    check L135() else D23();
  D23():
    deopt 80 [newx13, order_parametric2];
  D24():
    deopt 88 [2, drop_square3];
  L134():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L9(dx2);
  L135():
    order_parametric3 = force? order_parametric2;
    __1 = ldf `[` in base;
    r33 = dyn __1(newx11, <missing>, order_parametric3, FALSE);
    goto L9(r33);
  L136():
    drop_square4 = force? drop_square3;
    checkMissing(drop_square4);
    r34 = `-`(2, drop_square4);
    c3 = `is.object`(r34);
    if c3 then L137() else L138(r34);
  L10(dx5):
    st `order.drop.sqr` = dx5;
    l = ld x;
    storage_mode__ = ldf `storage.mode<-`;
    check L141() else D26();
  L137():
    dr4 = tryDispatchBuiltin.1("[", r34);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L139() else L138(dr4);
  L138(r36):
    order_parametric4 = ld `order.parametric`;
    check L140() else D25();
  D25():
    deopt 91 [r36, order_parametric4];
  D26():
    deopt 98 ["double", l, "double"];
  L139():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L10(dx4);
  L140():
    order_parametric5 = force? order_parametric4;
    __2 = ldf `[` in base;
    r37 = dyn __2(r36, order_parametric5);
    goto L10(r37);
  L141():
    r38 = dyn storage_mode__(l, NULL, "double");
    check L142() else D27();
  D27():
    deopt 100 ["double", r38];
  L142():
    st x = r38;
    l1 = ld y;
    storage_mode__1 = ldf `storage.mode<-`;
    check L143() else D28();
  D28():
    deopt 105 ["double", l1, "double"];
  L143():
    r39 = dyn storage_mode__1(l1, NULL, "double");
    check L144() else D29();
  D29():
    deopt 107 ["double", r39];
  L144():
    st y = r39;
    surface1 = ld surface;
    check L145() else D30();
  D30():
    deopt 109 [surface1];
  L145():
    surface2 = force? surface1;
    checkMissing(surface2);
    r40 = `==`(surface2, "direct");
    c4 = `as.logical`(r40);
    if c4 then L146() else L11();
  L11():
    apply = ldf apply;
    check L309() else D111();
  L47():
    rownames = ldf rownames;
    check L487() else D186();
  L146():
    rowSums = ldf rowSums;
    check L147() else D31();
  D31():
    deopt 114 [];
  D111():
    deopt 368 [];
  D186():
    deopt 615 [];
  L147():
    p6 = prom<V +>{
      sym5 = ldf `is.na`;
      base5 = ldf `is.na` in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r42):
      return r42;
    L1():
      newx14 = ld newx;
      newx15 = force? newx14;
      checkMissing(newx15);
      is_na = ldf `is.na` in base;
      r43 = dyn is_na(newx15);
      goto L0(r43);
    L2():
      r41 = dyn base5(<sym newx>);
      goto L0(r41);
    };
    r45 = dyn rowSums(p6);
    check L148() else D32();
  L309():
    p15 = prom<V +>{
      x20 = ld x;
      x21 = force? x20;
      checkMissing(x21);
      return x21;
    };
    p16 = prom<V +>{
      range = ld range;
      range1 = force? range;
      checkMissing(range1);
      return range1;
    };
    r185 = dyn apply(p15, 2, p16);
    check L310() else D112();
  L487():
    p25 = prom<V +>{
      newx16 = ld newx;
      newx17 = force? newx16;
      checkMissing(newx17);
      return newx17;
    };
    r337 = dyn rownames(p25);
    check L488() else D187();
  D32():
    deopt 116 [r45];
  D112():
    deopt 372 [r185];
  D187():
    deopt 617 [r337];
  L148():
    r46 = `>`(r45, 0.0);
    st nas = r46;
    sym6 = ldf rep_len;
    base6 = ldf rep_len in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L149() else L150();
  L310():
    st ranges = r185;
    rowSums2 = ldf rowSums;
    check L311() else D113();
  L488():
    st rn = r337;
    se5 = ld se;
    check L489() else D188();
  D113():
    deopt 375 [];
  D188():
    deopt 619 [se5];
  L12(r48):
    st fit = r48;
    x_evaluate = ld `x.evaluate`;
    check L156() else D36();
  L149():
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L151() else L152();
  L150():
    r47 = dyn base6(NA_REAL, <lang length(nas)>);
    goto L12(r47);
  L311():
    p17 = prom<V +>{
      x_evaluate10 = ld `x.evaluate`;
      x_evaluate11 = force? x_evaluate10;
      checkMissing(x_evaluate11);
      sym35 = ldf rep;
      base35 = ldf rep in base;
      guard35 = `==`.4(sym35, base35);
      if guard35 then L2() else L3();
    L0(x_evaluate14, r187):
      r189 = `<=`(x_evaluate14, r187);
      x_evaluate15 = ld `x.evaluate`;
      x_evaluate16 = force? x_evaluate15;
      checkMissing(x_evaluate16);
      sym36 = ldf rep;
      base36 = ldf rep in base;
      guard36 = `==`.4(sym36, base36);
      if guard36 then L4() else L5();
    L2():
      rep3 = ldf rep in base;
      r188 = dyn rep3(<lang `[`(ranges, 2, )>, <lang rep_len(M, D)>);
      goto L0(x_evaluate11, r188);
    L3():
      r186 = dyn base35(<lang `[`(ranges, 2, )>, <lang rep_len(M, D)>);
      goto L0(x_evaluate11, r186);
    L1(r193, x_evaluate19, r194):
      r196 = `>=`(x_evaluate19, r194);
      r197 = `&&`(r193, r196);
      return r197;
    L4():
      rep4 = ldf rep in base;
      r195 = dyn rep4(<lang `[`(ranges, 1, )>, <lang rep_len(M, D)>);
      goto L1(r189, x_evaluate16, r195);
    L5():
      r192 = dyn base36(<lang `[`(ranges, 1, )>, <lang rep_len(M, D)>);
      goto L1(r189, x_evaluate16, r192);
    };
    r199 = dyn rowSums2(p17);
    check L312() else D114();
  L489():
    se6 = force? se5;
    checkMissing(se6);
    c30 = `as.logical`(se6);
    if c30 then L490() else L85();
  D36():
    deopt 132 [x_evaluate];
  D114():
    deopt 377 [r199];
  L13(r50):
    rep_len = ldf rep_len in base;
    r52 = dyn rep_len(NA_REAL, r50);
    check L155() else D35();
  L85():
    sym68 = ldf `is.null`;
    base68 = ldf `is.null` in base;
    guard68 = `==`.4(sym68, base68);
    if guard68 then L511() else L512();
  L151():
    nas = ld nas;
    check L153() else D33();
  L152():
    r49 = dyn base7(<sym nas>);
    goto L13(r49);
  L156():
    x_evaluate1 = force? x_evaluate;
    checkMissing(x_evaluate1);
    c5 = `is.object`(x_evaluate1);
    if c5 then L157() else L158(x_evaluate1);
  L312():
    D4 = ld D;
    check L313() else D115();
  L490():
    sym65 = ldf `is.null`;
    base65 = ldf `is.null` in base;
    guard65 = `==`.4(sym65, base65);
    if guard65 then L491() else L492();
  D33():
    deopt 125 [nas];
  D35():
    deopt 130 [r52];
  D115():
    deopt 377 [r199, D4];
  L14(dx7):
    st `x.evaluate` = dx7;
    nrow = ldf nrow;
    check L161() else D38();
  L86(r339):
    r340 = `!`(r339);
    c32 = `as.logical`(r340);
    if c32 then L494() else L87();
  L91(r350):
    r351 = `!`(r350);
    c34 = `as.logical`(r351);
    if c34 then L514() else L92();
  L153():
    nas1 = force? nas;
    checkMissing(nas1);
    length = ldf length in base;
    r51 = dyn length(nas1);
    check L154() else D34();
  L155():
    goto L12(r52);
  L157():
    dr6 = tryDispatchBuiltin.1("[", x_evaluate1);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L159() else L158(dr6);
  L158(x_evaluate3):
    nas2 = ld nas;
    check L160() else D37();
  L313():
    D5 = force? D4;
    checkMissing(D5);
    r200 = `==`(r199, D5);
    st inside = r200;
    l11 = ld inside;
    c15 = `is.object`(l11);
    if c15 then L314() else L315(FALSE, l11);
  L491():
    rn = ld rn;
    check L493() else D189();
  L492():
    r338 = dyn base65(<sym rn>);
    goto L86(r338);
  L511():
    rn5 = ld rn;
    check L513() else D200();
  L512():
    r349 = dyn base68(<sym rn>);
    goto L91(r349);
  D34():
    deopt 128 [r51];
  D37():
    deopt 134 [x_evaluate3, nas2];
  D38():
    deopt 144 [];
  D189():
    deopt 622 [rn];
  D200():
    deopt 658 [rn5];
  L48(dx31):
    st inside = dx31;
    sym38 = ldf sum;
    base38 = ldf sum in base;
    guard38 = `==`.4(sym38, base38);
    if guard38 then L321() else L322();
  L87():
    goto L88();
  L88():
    sym66 = ldf list;
    base66 = ldf list in base;
    guard66 = `==`.4(sym66, base66);
    if guard66 then L501() else L502();
  L92():
    goto L93();
  L93():
    fit4 = ld fit;
    check L519() else D204();
  L154():
    goto L13(r51);
  L159():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L14(dx6);
  L160():
    nas3 = force? nas2;
    checkMissing(nas3);
    r53 = `!`(nas3);
    __3 = ldf `[` in base;
    r54 = dyn __3(x_evaluate1, r53, <missing>, FALSE);
    goto L14(r54);
  L161():
    p7 = prom<V +>{
      x_evaluate4 = ld `x.evaluate`;
      x_evaluate5 = force? x_evaluate4;
      checkMissing(x_evaluate5);
      return x_evaluate5;
    };
    r56 = dyn nrow(p7);
    check L162() else D39();
  L314():
    dr22 = tryDispatchBuiltin.0("[<-", l11, FALSE);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L316() else L315(FALSE, dr22);
  L315(r202, l13):
    sym37 = ldf `is.na`;
    base37 = ldf `is.na` in base;
    guard37 = `==`.4(sym37, base37);
    if guard37 then L317() else L318();
  L493():
    rn1 = force? rn;
    checkMissing(rn1);
    c31 = `==`(rn1, NULL);
    goto L86(c31);
  L494():
    rn2 = ld rn;
    check L495() else D190();
  L513():
    rn6 = force? rn5;
    checkMissing(rn6);
    c33 = `==`(rn6, NULL);
    goto L91(c33);
  L514():
    rn7 = ld rn;
    check L515() else D201();
  D39():
    deopt 146 [r56];
  D190():
    deopt 626 [rn2];
  D201():
    deopt 662 [rn7];
  D204():
    deopt 671 [fit4];
  L49(r210, l16, r211, r212):
    ___3 = ldf `[<-` in base;
    r214 = dyn ___3(l16, r211, r212);
    goto L48(r214);
  L50(r216):
    st M1 = r216;
    sym39 = ldf rep_len;
    base39 = ldf rep_len in base;
    guard39 = `==`.4(sym39, base39);
    if guard39 then L325() else L326();
  L89(r344):
    popenv;
    return r344;
  L162():
    st M = r56;
    se1 = ld se;
    check L163() else D40();
  L316():
    dx30 = getTryDispatchBuiltinValue(dr22);
    goto L48(dx30);
  L317():
    inside = ld inside;
    check L319() else D116();
  L318():
    r209 = dyn base37(<sym inside>);
    goto L49(r202, l13, FALSE, r209);
  L321():
    inside2 = ld inside;
    check L323() else D118();
  L322():
    r215 = dyn base38(<sym inside>);
    goto L50(r215);
  L495():
    rn3 = force? rn2;
    checkMissing(rn3);
    l23 = ld `se.fit`;
    names__ = ldf `names<-`;
    check L496() else D191();
  L501():
    fit2 = ld fit;
    check L503() else D195();
  L502():
    r343 = dyn base66[fit, `se.fit`, `residual.scale`](<sym fit>, <lang drop(se.fit)>, <sym s>);
    goto L89(r343);
  L515():
    rn8 = force? rn7;
    checkMissing(rn8);
    l25 = ld fit;
    names__2 = ldf `names<-`;
    check L516() else D202();
  L519():
    fit5 = force? fit4;
    checkMissing(fit5);
    popenv;
    return fit5;
  D40():
    deopt 148 [se1];
  D116():
    deopt 386 [r202, l13, FALSE, inside];
  D118():
    deopt 394 [inside2];
  D191():
    deopt 629 [rn3, l23, rn3];
  D195():
    deopt 642 [fit2];
  D202():
    deopt 665 [rn8, l25, rn8];
  L51(r219):
    st fit = r219;
    sym40 = ldf any;
    base40 = ldf any in base;
    guard40 = `==`.4(sym40, base40);
    if guard40 then L329() else L330();
  L163():
    se2 = force? se1;
    checkMissing(se2);
    c6 = `as.logical`(se2);
    if c6 then L164() else L15();
  L319():
    inside1 = force? inside;
    checkMissing(inside1);
    is_na1 = ldf `is.na` in base;
    r213 = dyn is_na1(inside1);
    check L320() else D117();
  L323():
    inside3 = force? inside2;
    checkMissing(inside3);
    sum2 = ldf sum in base;
    r217 = dyn sum2(inside3);
    check L324() else D119();
  L325():
    M12 = ld M;
    check L327() else D120();
  L326():
    r218 = dyn base39(NA_REAL, <sym M>);
    goto L51(r218);
  L496():
    r341 = dyn names__(l23, NULL, rn3);
    check L497() else D192();
  L503():
    fit3 = force? fit2;
    checkMissing(fit3);
    sym67 = ldf drop;
    base67 = ldf drop in base;
    guard67 = `==`.4(sym67, base67);
    if guard67 then L504() else L505();
  L516():
    r352 = dyn names__2(l25, NULL, rn8);
    check L517() else D203();
  D117():
    deopt 389 [r202, l13, FALSE, r213];
  D119():
    deopt 397 [r217];
  D120():
    deopt 402 [M12];
  D192():
    deopt 631 [rn3, r341];
  D203():
    deopt 667 [rn8, r352];
  L15():
    sym24 = ldf `.C`;
    base24 = ldf `.C` in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L251() else L252();
  L34(r140):
    goto L47();
  L52(r222):
    c16 = `as.logical`(r222);
    if c16 then L333() else L53();
  L90(r346):
    s11 = ld s;
    check L508() else D198();
  L164():
    fit = ld fit;
    check L165() else D41();
  L320():
    goto L49(r202, l13, FALSE, r213);
  L324():
    goto L50(r217);
  L327():
    M13 = force? M12;
    checkMissing(M13);
    rep_len1 = ldf rep_len in base;
    r220 = dyn rep_len1(NA_REAL, M13);
    check L328() else D121();
  L329():
    inside4 = ld inside;
    check L331() else D122();
  L330():
    r221 = dyn base40(<sym inside>);
    goto L52(r221);
  L497():
    st `se.fit` = r341;
    l24 = ld fit;
    names__1 = ldf `names<-`;
    check L498() else D193();
  L504():
    se_fit = ld `se.fit`;
    check L506() else D196();
  L505():
    r345 = dyn base67(<sym se.fit>);
    goto L90(r345);
  L517():
    st fit = r352;
    goto L93();
  D41():
    deopt 150 [fit];
  D121():
    deopt 405 [r220];
  D122():
    deopt 409 [inside4];
  D193():
    deopt 634 [rn3, l24, rn3];
  D196():
    deopt 647 [se_fit];
  D198():
    deopt 652 [s11];
  L35(r142):
    c13 = `is.object`(r142);
    if c13 then L301() else L302(r142);
  L53():
    goto L64();
  L64():
    se3 = ld se;
    check L401() else D144();
  L165():
    fit1 = force? fit;
    checkMissing(fit1);
    st `se.fit` = fit1;
    sym8 = ldf `.C`;
    base8 = ldf `.C` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L166() else L167();
  L251():
    C_loess_dfit = ld C_loess_dfit;
    check L253() else D83();
  L252():
    r141 = dyn base24[, , , , , , , , , , , , , fit](<sym C_loess_dfit>, <sym y>, <sym x>, <lang as.double(x.evaluate)>, <lang as.double(`*`(weights, robust))>, <lang as.double(span)>, <lang as.integer(degree)>, <lang as.integer(nonparametric)>, <lang as.integer(order.drop.sqr)>, <lang as.integer(sum.drop.sqr)>, <lang as.integer(D)>, <lang as.integer(N)>, <lang as.integer(M)>, <lang double(M)>);
    goto L35(r141);
  L328():
    goto L51(r220);
  L331():
    inside5 = force? inside4;
    checkMissing(inside5);
    any1 = ldf any in base;
    r223 = dyn any1(inside5);
    check L332() else D123();
  L333():
    sym41 = ldf `.C`;
    base41 = ldf `.C` in base;
    guard41 = `==`.4(sym41, base41);
    if guard41 then L334() else L335();
  L498():
    r342 = dyn names__1(l24, NULL, rn3);
    check L499() else D194();
  L506():
    se_fit1 = force? se_fit;
    checkMissing(se_fit1);
    drop = ldf drop in base;
    r347 = dyn drop(se_fit1);
    check L507() else D197();
  L508():
    s12 = force? s11;
    checkMissing(s12);
    list = ldf list in base;
    r348 = dyn list(fit3, r346, s12);
    check L509() else D199();
  D83():
    deopt 285 [C_loess_dfit];
  D123():
    deopt 412 [r223];
  D144():
    deopt 484 [se3];
  D194():
    deopt 636 [rn3, r342];
  D197():
    deopt 650 [r347];
  D199():
    deopt 656 [r348];
  L16(r58):
    c7 = `is.object`(r58);
    if c7 then L225() else L226(r58);
  L54(r225):
    c23 = `is.object`(r225);
    if c23 then L393() else L394(r225);
  L166():
    C_loess_dfitse = ld C_loess_dfitse;
    check L168() else D42();
  L167():
    r57 = dyn base8[, , , , , , , , , , , , , , , fit, L](<sym C_loess_dfitse>, <sym y>, <sym x>, <lang as.double(x.evaluate)>, <lang as.double(`*`(weights, robust))>, <lang as.double(robust)>, <lang as.integer(`==`(family, "gaussian"))>, <lang as.double(span)>, <lang as.integer(degree)>, <lang as.integer(nonparametric)>, <lang as.integer(order.drop.sqr)>, <lang as.integer(sum.drop.sqr)>, <lang as.integer(D)>, <lang as.integer(N)>, <lang as.integer(M)>, <lang double(M)>, <lang double(`*`(N, M))>);
    goto L16(r57);
  L253():
    C_loess_dfit1 = force? C_loess_dfit;
    checkMissing(C_loess_dfit1);
    y3 = ld y;
    check L254() else D84();
  L300(dx23):
    l8 = ld fit;
    c14 = `is.object`(l8);
    if c14 then L304() else L305(dx23, l8);
  L301():
    dr18 = tryDispatchBuiltin.1("$", r142);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L303() else L302(dr18);
  L302(r178):
    r179 = `$`(r178, <sym fit>);
    goto L300(r179);
  L332():
    goto L52(r223);
  L334():
    C_loess_ifit = ld C_loess_ifit;
    check L336() else D124();
  L335():
    r224 = dyn base41[, , , , , , , , fit](<sym C_loess_ifit>, <lang as.integer(`$`(kd, parameter))>, <lang as.integer(`$`(kd, a))>, <lang as.double(`$`(kd, xi))>, <lang as.double(`$`(kd, vert))>, <lang as.double(`$`(kd, vval))>, <lang as.integer(M1)>, <lang as.double(`[`(x.evaluate, inside, ))>, <lang double(M1)>);
    goto L54(r224);
  L401():
    se4 = force? se3;
    checkMissing(se4);
    c25 = `as.logical`(se4);
    if c25 then L402() else L65();
  L499():
    st fit = r342;
    goto L88();
  L507():
    goto L90(r347);
  L509():
    goto L89(r348);
  D42():
    deopt 155 [C_loess_dfitse];
  D84():
    deopt 287 [y3];
  D124():
    deopt 415 [C_loess_ifit];
  L29(dx9):
    st z = dx9;
    z = ld z;
    check L231() else D76();
  L46(dx28, dx29):
    st fit = dx29;
    goto L34(dx28);
  L65():
    goto L47();
  L168():
    C_loess_dfitse1 = force? C_loess_dfitse;
    checkMissing(C_loess_dfitse1);
    y1 = ld y;
    check L169() else D43();
  L225():
    dr8 = tryDispatchBuiltin.1("[", r58);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L227() else L226(dr8);
  L226(r104):
    sym21 = ldf c;
    base21 = ldf c in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L228() else L229();
  L254():
    y4 = force? y3;
    checkMissing(y4);
    x18 = ld x;
    check L255() else D85();
  L303():
    dx22 = getTryDispatchBuiltinValue(dr18);
    goto L300(dx22);
  L304():
    dr20 = tryDispatchBuiltin.0("[<-", l8, dx23);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L306() else L305(dx23, dr20);
  L305(dx25, l10):
    nas8 = ld nas;
    check L307() else D110();
  L336():
    C_loess_ifit1 = force? C_loess_ifit;
    checkMissing(C_loess_ifit1);
    sym42 = ldf `as.integer`;
    base42 = ldf `as.integer` in base;
    guard42 = `==`.4(sym42, base42);
    if guard42 then L337() else L338();
  L392(dx45):
    l17 = ld fit;
    c24 = `is.object`(l17);
    if c24 then L396() else L397(dx45, l17);
  L393():
    dr36 = tryDispatchBuiltin.1("$", r225);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L395() else L394(dr36);
  L394(r257):
    r258 = `$`(r257, <sym fit>);
    goto L392(r258);
  L402():
    sym49 = ldf rep_len;
    base49 = ldf rep_len in base;
    guard49 = `==`.4(sym49, base49);
    if guard49 then L403() else L404();
  D43():
    deopt 157 [y1];
  D76():
    deopt 257 [z];
  D85():
    deopt 289 [x18];
  D110():
    deopt 362 [dx25, l10, dx23, nas8];
  L30(r108, r109):
    __4 = ldf `[` in base;
    r111 = dyn __4(r108, r109);
    goto L29(r111);
  L55(r227):
    sym43 = ldf `as.integer`;
    base43 = ldf `as.integer` in base;
    guard43 = `==`.4(sym43, base43);
    if guard43 then L345() else L346();
  L63(dx50, dx51):
    st fit = dx51;
    goto L64();
  L66(r261):
    st `se.fit` = r261;
    sym50 = ldf any;
    base50 = ldf any in base;
    guard50 = `==`.4(sym50, base50);
    if guard50 then L407() else L408();
  L169():
    y2 = force? y1;
    checkMissing(y2);
    x16 = ld x;
    check L170() else D44();
  L227():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L29(dx8);
  L228():
    c8 = ldf c in base;
    r110 = dyn c8("fit", "L");
    check L230() else D75();
  L229():
    r107 = dyn base21("fit", "L");
    goto L30(r104, r107);
  L231():
    z1 = force? z;
    checkMissing(z1);
    c9 = `is.object`(z1);
    if c9 then L233() else L234(z1);
  L255():
    x19 = force? x18;
    checkMissing(x19);
    sym25 = ldf `as.double`;
    base25 = ldf `as.double` in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L256() else L257();
  L306():
    dx27 = getTryDispatchBuiltinValue(dr20);
    goto L46(dx23, dx27);
  L307():
    nas9 = force? nas8;
    checkMissing(nas9);
    r180 = `!`(nas9);
    ___2 = ldf `[<-` in base;
    r181 = dyn ___2(l10, dx23, r180);
    goto L46(dx25, r181);
  L337():
    kd1 = ld kd;
    check L339() else D125();
  L338():
    r226 = dyn base42(<lang `$`(kd, parameter)>);
    goto L55(r226);
  L395():
    dx44 = getTryDispatchBuiltinValue(dr36);
    goto L392(dx44);
  L396():
    dr38 = tryDispatchBuiltin.0("[<-", l17, dx45);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L398() else L397(dx45, dr38);
  L397(dx47, l19):
    inside8 = ld inside;
    check L399() else D143();
  L403():
    M18 = ld M;
    check L405() else D145();
  L404():
    r260 = dyn base49(NA_REAL, <sym M>);
    goto L66(r260);
  D44():
    deopt 159 [x16];
  D75():
    deopt 254 [r104, r110];
  D125():
    deopt 419 [kd1];
  D143():
    deopt 478 [dx47, l19, dx45, inside8];
  D145():
    deopt 489 [M18];
  L36(r144):
    sym26 = ldf `as.double`;
    base26 = ldf `as.double` in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L260() else L261();
  L56(r231):
    sym44 = ldf `as.double`;
    base44 = ldf `as.double` in base;
    guard44 = `==`.4(sym44, base44);
    if guard44 then L353() else L354();
  L67(r264):
    c26 = `as.logical`(r264);
    if c26 then L411() else L68();
  L170():
    x17 = force? x16;
    checkMissing(x17);
    sym9 = ldf `as.double`;
    base9 = ldf `as.double` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L171() else L172();
  L230():
    goto L30(r104, r110);
  L232(dx11):
    l2 = ld fit;
    c10 = `is.object`(l2);
    if c10 then L236() else L237(dx11, l2);
  L233():
    dr10 = tryDispatchBuiltin.1("$", z1);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L235() else L234(dr10);
  L234(z3):
    r112 = `$`(z3, <sym fit>);
    goto L232(r112);
  L256():
    x_evaluate8 = ld `x.evaluate`;
    check L258() else D86();
  L257():
    r143 = dyn base25(<sym x.evaluate>);
    goto L36(r143);
  L339():
    kd2 = force? kd1;
    checkMissing(kd2);
    c17 = `is.object`(kd2);
    if c17 then L341() else L342(kd2);
  L345():
    kd5 = ld kd;
    check L347() else D127();
  L346():
    r230 = dyn base43(<lang `$`(kd, a)>);
    goto L56(r230);
  L398():
    dx49 = getTryDispatchBuiltinValue(dr38);
    goto L63(dx45, dx49);
  L399():
    inside9 = force? inside8;
    ___4 = ldf `[<-` in base;
    r259 = dyn ___4(l19, dx45, inside9);
    goto L63(dx47, r259);
  L405():
    M19 = force? M18;
    checkMissing(M19);
    rep_len2 = ldf rep_len in base;
    r262 = dyn rep_len2(NA_REAL, M19);
    check L406() else D146();
  L407():
    inside10 = ld inside;
    check L409() else D147();
  L408():
    r263 = dyn base50(<sym inside>);
    goto L67(r263);
  D86():
    deopt 293 [x_evaluate8];
  D127():
    deopt 426 [kd5];
  D146():
    deopt 492 [r262];
  D147():
    deopt 496 [inside10];
  L17(r60):
    sym10 = ldf `as.double`;
    base10 = ldf `as.double` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L175() else L176();
  L31(dx17):
    st fit = dx17;
    rowSums1 = ldf rowSums;
    check L240() else D78();
  L37(r147):
    sym27 = ldf `as.double`;
    base27 = ldf `as.double` in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L265() else L266();
  L57(r235):
    sym45 = ldf `as.double`;
    base45 = ldf `as.double` in base;
    guard45 = `==`.4(sym45, base45);
    if guard45 then L361() else L362();
  L68():
    goto L84(NULL);
  L84(r335):
    goto L47();
  L171():
    x_evaluate6 = ld `x.evaluate`;
    check L173() else D45();
  L172():
    r59 = dyn base9(<sym x.evaluate>);
    goto L17(r59);
  L235():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L232(dx10);
  L236():
    dr12 = tryDispatchBuiltin.0("[<-", l2, dx11);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L238() else L237(dx11, dr12);
  L237(dx13, l4):
    nas4 = ld nas;
    check L239() else D77();
  L258():
    x_evaluate9 = force? x_evaluate8;
    checkMissing(x_evaluate9);
    as_double4 = ldf `as.double` in base;
    r145 = dyn as_double4(x_evaluate9);
    check L259() else D87();
  L260():
    weights3 = ld weights;
    check L262() else D88();
  L261():
    r146 = dyn base26(<lang `*`(weights, robust)>);
    goto L37(r146);
  L340(dx33):
    as_integer15 = ldf `as.integer` in base;
    r229 = dyn as_integer15(dx33);
    check L344() else D126();
  L341():
    dr24 = tryDispatchBuiltin.1("$", kd2);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L343() else L342(dr24);
  L342(kd4):
    r228 = `$`(kd4, <sym parameter>);
    goto L340(r228);
  L347():
    kd6 = force? kd5;
    checkMissing(kd6);
    c18 = `is.object`(kd6);
    if c18 then L349() else L350(kd6);
  L353():
    kd9 = ld kd;
    check L355() else D129();
  L354():
    r234 = dyn base44(<lang `$`(kd, xi)>);
    goto L57(r234);
  L406():
    goto L66(r262);
  L409():
    inside11 = force? inside10;
    checkMissing(inside11);
    any2 = ldf any in base;
    r265 = dyn any2(inside11);
    check L410() else D148();
  L411():
    sym51 = ldf `.C`;
    base51 = ldf `.C` in base;
    guard51 = `==`.4(sym51, base51);
    if guard51 then L412() else L413();
  D45():
    deopt 163 [x_evaluate6];
  D77():
    deopt 261 [dx13, l4, dx11, nas4];
  D78():
    deopt 267 [];
  D87():
    deopt 296 [r145];
  D88():
    deopt 299 [weights3];
  D126():
    deopt 423 [r229];
  D129():
    deopt 433 [kd9];
  D148():
    deopt 499 [r265];
  L18(r63):
    sym11 = ldf `as.double`;
    base11 = ldf `as.double` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L180() else L181();
  L38(r151):
    sym28 = ldf `as.integer`;
    base28 = ldf `as.integer` in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L269() else L270();
  L58(r239):
    sym46 = ldf `as.double`;
    base46 = ldf `as.double` in base;
    guard46 = `==`.4(sym46, base46);
    if guard46 then L369() else L370();
  L69(r267):
    c28 = `is.object`(r267);
    if c28 then L472() else L473(r267);
  L173():
    x_evaluate7 = force? x_evaluate6;
    checkMissing(x_evaluate7);
    as_double = ldf `as.double` in base;
    r61 = dyn as_double(x_evaluate7);
    check L174() else D46();
  L175():
    weights1 = ld weights;
    check L177() else D47();
  L176():
    r62 = dyn base10(<lang `*`(weights, robust)>);
    goto L18(r62);
  L238():
    dx15 = getTryDispatchBuiltinValue(dr12);
    goto L31(dx15);
  L239():
    nas5 = force? nas4;
    checkMissing(nas5);
    r113 = `!`(nas5);
    ___ = ldf `[<-` in base;
    r114 = dyn ___(l4, dx11, r113);
    goto L31(r114);
  L240():
    p13 = prom<V +>{
      matrix = ldf matrix;
      p10 = prom<V +>{
        z4 = ld z;
        z5 = force? z4;
        checkMissing(z5);
        c11 = `is.object`(z5);
        if c11 then L1() else L2(z5);
      L0(dx19):
        r116 = `^`(dx19, 2.0);
        return r116;
      L1():
        dr14 = tryDispatchBuiltin.1("$", z5);
        dc7 = getTryDispatchBuiltinDispatched(dr14);
        if dc7 then L3() else L2(dr14);
      L2(z7):
        r115 = `$`(z7, <sym L>);
        goto L0(r115);
      L3():
        dx18 = getTryDispatchBuiltinValue(dr14);
        goto L0(dx18);
      };
      p11 = prom<V +>{
        M6 = ld M;
        M7 = force? M6;
        checkMissing(M7);
        return M7;
      };
      p12 = prom<V +>{
        N4 = ld N;
        N5 = force? N4;
        checkMissing(N5);
        return N5;
      };
      r120 = dyn matrix(p10, p11, p12);
      sym22 = ldf rep;
      base22 = ldf rep in base;
      guard22 = `==`.4(sym22, base22);
      if guard22 then L1() else L2();
    L0(r124, r125):
      r127 = `/`(r124, r125);
      return r127;
    L1():
      rep2 = ldf rep in base;
      r126 = dyn rep2(<sym weights>, <lang rep_len(M, N)>);
      goto L0(r120, r126);
    L2():
      r123 = dyn base22(<sym weights>, <lang rep_len(M, N)>);
      goto L0(r120, r123);
    };
    r129 = dyn rowSums1(p13);
    check L241() else D79();
  L259():
    goto L36(r145);
  L262():
    weights4 = force? weights3;
    checkMissing(weights4);
    robust5 = ld robust;
    check L263() else D89();
  L265():
    span3 = ld span;
    check L267() else D91();
  L266():
    r150 = dyn base27(<sym span>);
    goto L38(r150);
  L343():
    dx32 = getTryDispatchBuiltinValue(dr24);
    goto L340(dx32);
  L344():
    goto L55(r229);
  L348(dx35):
    as_integer16 = ldf `as.integer` in base;
    r233 = dyn as_integer16(dx35);
    check L352() else D128();
  L349():
    dr26 = tryDispatchBuiltin.1("$", kd6);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L351() else L350(dr26);
  L350(kd8):
    r232 = `$`(kd8, <sym a>);
    goto L348(r232);
  L355():
    kd10 = force? kd9;
    checkMissing(kd10);
    c19 = `is.object`(kd10);
    if c19 then L357() else L358(kd10);
  L361():
    kd13 = ld kd;
    check L363() else D131();
  L362():
    r238 = dyn base45(<lang `$`(kd, vert)>);
    goto L58(r238);
  L410():
    goto L67(r265);
  L412():
    C_loess_ise = ld C_loess_ise;
    check L414() else D149();
  L413():
    r266 = dyn base51[, , , , , , , , , , , , , , , L](<sym C_loess_ise>, <sym y>, <sym x>, <lang as.double(`[`(x.evaluate, inside, ))>, <lang as.double(weights)>, <lang as.double(span)>, <lang as.integer(degree)>, <lang as.integer(nonparametric)>, <lang as.integer(order.drop.sqr)>, <lang as.integer(sum.drop.sqr)>, <lang as.double(`*`(span, cell))>, <lang as.integer(D)>, <lang as.integer(N)>, <lang as.integer(M1)>, <lang double(M1)>, <lang double(`*`(N, M1))>);
    goto L69(r266);
  D46():
    deopt 166 [r61];
  D47():
    deopt 169 [weights1];
  D79():
    deopt 269 [r129];
  D89():
    deopt 300 [weights4, robust5];
  D91():
    deopt 307 [span3];
  D128():
    deopt 430 [r233];
  D131():
    deopt 440 [kd13];
  D149():
    deopt 502 [C_loess_ise];
  L19(r67):
    sym12 = ldf `as.integer`;
    base12 = ldf `as.integer` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L184() else L185();
  L39(r154):
    sym29 = ldf `as.integer`;
    base29 = ldf `as.integer` in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L273() else L274();
  L59(r243):
    sym47 = ldf `as.integer`;
    base47 = ldf `as.integer` in base;
    guard47 = `==`.4(sym47, base47);
    if guard47 then L377() else L378();
  L174():
    goto L17(r61);
  L177():
    weights2 = force? weights1;
    checkMissing(weights2);
    robust1 = ld robust;
    check L178() else D48();
  L180():
    robust3 = ld robust;
    check L182() else D50();
  L181():
    r66 = dyn base11(<sym robust>);
    goto L19(r66);
  L241():
    st ses = r129;
    s1 = ld s;
    check L242() else D80();
  L263():
    robust6 = force? robust5;
    checkMissing(robust6);
    r148 = `*`(weights4, robust6);
    as_double5 = ldf `as.double` in base;
    r149 = dyn as_double5(r148);
    check L264() else D90();
  L267():
    span4 = force? span3;
    checkMissing(span4);
    as_double6 = ldf `as.double` in base;
    r152 = dyn as_double6(span4);
    check L268() else D92();
  L269():
    degree3 = ld degree;
    check L271() else D93();
  L270():
    r153 = dyn base28(<sym degree>);
    goto L39(r153);
  L351():
    dx34 = getTryDispatchBuiltinValue(dr26);
    goto L348(dx34);
  L352():
    goto L56(r233);
  L356(dx37):
    as_double7 = ldf `as.double` in base;
    r237 = dyn as_double7(dx37);
    check L360() else D130();
  L357():
    dr28 = tryDispatchBuiltin.1("$", kd10);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L359() else L358(dr28);
  L358(kd12):
    r236 = `$`(kd12, <sym xi>);
    goto L356(r236);
  L363():
    kd14 = force? kd13;
    checkMissing(kd14);
    c20 = `is.object`(kd14);
    if c20 then L365() else L366(kd14);
  L369():
    kd17 = ld kd;
    check L371() else D133();
  L370():
    r242 = dyn base46(<lang `$`(kd, vval)>);
    goto L59(r242);
  L414():
    C_loess_ise1 = force? C_loess_ise;
    checkMissing(C_loess_ise1);
    y5 = ld y;
    check L415() else D150();
  L471(dx56):
    st L = dx56;
    rowSums3 = ldf rowSums;
    check L475() else D181();
  L472():
    dr42 = tryDispatchBuiltin.1("$", r267);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L474() else L473(dr42);
  L473(r310):
    r311 = `$`(r310, <sym L>);
    goto L471(r311);
  D48():
    deopt 170 [weights2, robust1];
  D50():
    deopt 177 [robust3];
  D80():
    deopt 271 [s1];
  D90():
    deopt 304 [r149];
  D92():
    deopt 310 [r152];
  D93():
    deopt 313 [degree3];
  D130():
    deopt 437 [r237];
  D133():
    deopt 447 [kd17];
  D150():
    deopt 504 [y5];
  D181():
    deopt 595 [];
  L20(r70):
    sym13 = ldf `as.double`;
    base13 = ldf `as.double` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L188() else L189();
  L40(r157):
    sym30 = ldf `as.integer`;
    base30 = ldf `as.integer` in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L277() else L278();
  L60(r247):
    sym48 = ldf `as.double`;
    base48 = ldf `as.double` in base;
    guard48 = `==`.4(sym48, base48);
    if guard48 then L381() else L382();
  L178():
    robust2 = force? robust1;
    checkMissing(robust2);
    r64 = `*`(weights2, robust2);
    as_double1 = ldf `as.double` in base;
    r65 = dyn as_double1(r64);
    check L179() else D49();
  L182():
    robust4 = force? robust3;
    checkMissing(robust4);
    as_double2 = ldf `as.double` in base;
    r68 = dyn as_double2(robust4);
    check L183() else D51();
  L184():
    family1 = ld family;
    check L186() else D52();
  L185():
    r69 = dyn base12(<lang `==`(family, "gaussian")>);
    goto L20(r69);
  L242():
    s2 = force? s1;
    checkMissing(s2);
    sym23 = ldf sqrt;
    base23 = ldf sqrt in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L243() else L244();
  L264():
    goto L37(r149);
  L268():
    goto L38(r152);
  L271():
    degree4 = force? degree3;
    checkMissing(degree4);
    as_integer8 = ldf `as.integer` in base;
    r155 = dyn as_integer8(degree4);
    check L272() else D94();
  L273():
    nonparametric2 = ld nonparametric;
    check L275() else D95();
  L274():
    r156 = dyn base29(<sym nonparametric>);
    goto L40(r156);
  L359():
    dx36 = getTryDispatchBuiltinValue(dr28);
    goto L356(dx36);
  L360():
    goto L57(r237);
  L364(dx39):
    as_double8 = ldf `as.double` in base;
    r241 = dyn as_double8(dx39);
    check L368() else D132();
  L365():
    dr30 = tryDispatchBuiltin.1("$", kd14);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L367() else L366(dr30);
  L366(kd16):
    r240 = `$`(kd16, <sym vert>);
    goto L364(r240);
  L371():
    kd18 = force? kd17;
    checkMissing(kd18);
    c21 = `is.object`(kd18);
    if c21 then L373() else L374(kd18);
  L377():
    M14 = ld M1;
    check L379() else D135();
  L378():
    r246 = dyn base47(<sym M1>);
    goto L60(r246);
  L415():
    y6 = force? y5;
    checkMissing(y6);
    x22 = ld x;
    check L416() else D151();
  L474():
    dx55 = getTryDispatchBuiltinValue(dr42);
    goto L471(dx55);
  L475():
    p24 = prom<V +>{
      matrix1 = ldf matrix;
      p21 = prom<V +>{
        L = ld L;
        L1 = force? L;
        checkMissing(L1);
        r312 = `^`(L1, 2.0);
        return r312;
      };
      p22 = prom<V +>{
        M26 = ld M1;
        M27 = force? M26;
        checkMissing(M27);
        return M27;
      };
      p23 = prom<V +>{
        N12 = ld N;
        N13 = force? N12;
        checkMissing(N13);
        return N13;
      };
      r316 = dyn matrix1(p21, p22, p23);
      sym63 = ldf rep;
      base63 = ldf rep in base;
      guard63 = `==`.4(sym63, base63);
      if guard63 then L1() else L2();
    L0(r320, r321):
      r323 = `/`(r320, r321);
      return r323;
    L1():
      rep5 = ldf rep in base;
      r322 = dyn rep5(<sym weights>, <lang rep_len(M1, N)>);
      goto L0(r316, r322);
    L2():
      r319 = dyn base63(<sym weights>, <lang rep_len(M1, N)>);
      goto L0(r316, r319);
    };
    r325 = dyn rowSums3(p24);
    check L476() else D182();
  D49():
    deopt 174 [r65];
  D51():
    deopt 180 [r68];
  D52():
    deopt 183 [family1];
  D94():
    deopt 316 [r155];
  D95():
    deopt 319 [nonparametric2];
  D132():
    deopt 444 [r241];
  D135():
    deopt 454 [M14];
  D151():
    deopt 506 [x22];
  D182():
    deopt 597 [r325];
  L21(r74):
    sym14 = ldf `as.integer`;
    base14 = ldf `as.integer` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L192() else L193();
  L32(s5, r131):
    r133 = `*`(s5, r131);
    l5 = ld `se.fit`;
    c12 = `is.object`(l5);
    if c12 then L246() else L247(r133, l5);
  L41(r160):
    sym31 = ldf `as.integer`;
    base31 = ldf `as.integer` in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L281() else L282();
  L61(r250):
    double3 = ldf double;
    check L389() else D140();
  L179():
    goto L18(r65);
  L183():
    goto L19(r68);
  L186():
    family2 = force? family1;
    checkMissing(family2);
    r71 = `==`(family2, "gaussian");
    as_integer = ldf `as.integer` in base;
    r72 = dyn as_integer(r71);
    check L187() else D53();
  L188():
    span1 = ld span;
    check L190() else D54();
  L189():
    r73 = dyn base13(<sym span>);
    goto L21(r73);
  L243():
    ses = ld ses;
    check L245() else D81();
  L244():
    r130 = dyn base23(<sym ses>);
    goto L32(s2, r130);
  L272():
    goto L39(r155);
  L275():
    nonparametric3 = force? nonparametric2;
    checkMissing(nonparametric3);
    as_integer9 = ldf `as.integer` in base;
    r158 = dyn as_integer9(nonparametric3);
    check L276() else D96();
  L277():
    order_drop_sqr2 = ld `order.drop.sqr`;
    check L279() else D97();
  L278():
    r159 = dyn base30(<sym order.drop.sqr>);
    goto L41(r159);
  L367():
    dx38 = getTryDispatchBuiltinValue(dr30);
    goto L364(dx38);
  L368():
    goto L58(r241);
  L372(dx41):
    as_double9 = ldf `as.double` in base;
    r245 = dyn as_double9(dx41);
    check L376() else D134();
  L373():
    dr32 = tryDispatchBuiltin.1("$", kd18);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L375() else L374(dr32);
  L374(kd20):
    r244 = `$`(kd20, <sym vval>);
    goto L372(r244);
  L379():
    M15 = force? M14;
    checkMissing(M15);
    as_integer17 = ldf `as.integer` in base;
    r248 = dyn as_integer17(M15);
    check L380() else D136();
  L381():
    x_evaluate20 = ld `x.evaluate`;
    check L383() else D137();
  L382():
    r249 = dyn base48(<lang `[`(x.evaluate, inside, )>);
    goto L61(r249);
  L416():
    x23 = force? x22;
    checkMissing(x23);
    sym52 = ldf `as.double`;
    base52 = ldf `as.double` in base;
    guard52 = `==`.4(sym52, base52);
    if guard52 then L417() else L418();
  L476():
    st tmp = r325;
    s6 = ld s;
    check L477() else D183();
  D53():
    deopt 188 [r72];
  D54():
    deopt 191 [span1];
  D81():
    deopt 273 [s2, ses];
  D96():
    deopt 322 [r158];
  D97():
    deopt 325 [order_drop_sqr2];
  D134():
    deopt 451 [r245];
  D136():
    deopt 457 [r248];
  D137():
    deopt 460 [x_evaluate20];
  D140():
    deopt 470 [];
  D183():
    deopt 599 [s6];
  L22(r77):
    sym15 = ldf `as.integer`;
    base15 = ldf `as.integer` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L196() else L197();
  L33(r137, dx21):
    st `se.fit` = dx21;
    goto L34(r137);
  L42(r163):
    sym32 = ldf `as.integer`;
    base32 = ldf `as.integer` in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L285() else L286();
  L70(r269):
    sym53 = ldf `as.double`;
    base53 = ldf `as.double` in base;
    guard53 = `==`.4(sym53, base53);
    if guard53 then L425() else L426();
  L187():
    goto L20(r72);
  L190():
    span2 = force? span1;
    checkMissing(span2);
    as_double3 = ldf `as.double` in base;
    r75 = dyn as_double3(span2);
    check L191() else D55();
  L192():
    degree1 = ld degree;
    check L194() else D56();
  L193():
    r76 = dyn base14(<sym degree>);
    goto L22(r76);
  L245():
    ses1 = force? ses;
    checkMissing(ses1);
    r132 = sqrt(ses1);
    goto L32(s2, r132);
  L246():
    dr16 = tryDispatchBuiltin.0("[<-", l5, r133);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L248() else L247(r133, dr16);
  L247(r135, l7):
    nas6 = ld nas;
    check L249() else D82();
  L276():
    goto L40(r158);
  L279():
    order_drop_sqr3 = force? order_drop_sqr2;
    checkMissing(order_drop_sqr3);
    as_integer10 = ldf `as.integer` in base;
    r161 = dyn as_integer10(order_drop_sqr3);
    check L280() else D98();
  L281():
    sum_drop_sqr2 = ld `sum.drop.sqr`;
    check L283() else D99();
  L282():
    r162 = dyn base31(<sym sum.drop.sqr>);
    goto L42(r162);
  L375():
    dx40 = getTryDispatchBuiltinValue(dr32);
    goto L372(dx40);
  L376():
    goto L59(r245);
  L380():
    goto L60(r248);
  L383():
    x_evaluate21 = force? x_evaluate20;
    checkMissing(x_evaluate21);
    c22 = `is.object`(x_evaluate21);
    if c22 then L384() else L385(x_evaluate21);
  L389():
    p18 = prom<V +>{
      M16 = ld M1;
      M17 = force? M16;
      checkMissing(M17);
      return M17;
    };
    r254 = dyn double3(p18);
    check L390() else D141();
  L417():
    x_evaluate24 = ld `x.evaluate`;
    check L419() else D152();
  L418():
    r268 = dyn base52(<lang `[`(x.evaluate, inside, )>);
    goto L70(r268);
  L477():
    s7 = force? s6;
    checkMissing(s7);
    sym64 = ldf sqrt;
    base64 = ldf sqrt in base;
    guard64 = `==`.4(sym64, base64);
    if guard64 then L478() else L479();
  D55():
    deopt 194 [r75];
  D56():
    deopt 197 [degree1];
  D82():
    deopt 278 [r135, l7, r133, nas6];
  D98():
    deopt 328 [r161];
  D99():
    deopt 331 [sum_drop_sqr2];
  D141():
    deopt 472 [r254];
  D152():
    deopt 510 [x_evaluate24];
  L23(r80):
    sym16 = ldf `as.integer`;
    base16 = ldf `as.integer` in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L200() else L201();
  L43(r166):
    sym33 = ldf `as.integer`;
    base33 = ldf `as.integer` in base;
    guard33 = `==`.4(sym33, base33);
    if guard33 then L289() else L290();
  L62(dx43):
    as_double10 = ldf `as.double` in base;
    r252 = dyn as_double10(dx43);
    check L388() else D139();
  L72(r273):
    sym54 = ldf `as.double`;
    base54 = ldf `as.double` in base;
    guard54 = `==`.4(sym54, base54);
    if guard54 then L429() else L430();
  L82(s10, r327):
    r329 = `*`(s10, r327);
    l20 = ld `se.fit`;
    c29 = `is.object`(l20);
    if c29 then L481() else L482(r329, l20);
  L191():
    goto L21(r75);
  L194():
    degree2 = force? degree1;
    checkMissing(degree2);
    as_integer1 = ldf `as.integer` in base;
    r78 = dyn as_integer1(degree2);
    check L195() else D57();
  L196():
    nonparametric = ld nonparametric;
    check L198() else D58();
  L197():
    r79 = dyn base15(<sym nonparametric>);
    goto L23(r79);
  L248():
    dx20 = getTryDispatchBuiltinValue(dr16);
    goto L33(r133, dx20);
  L249():
    nas7 = force? nas6;
    checkMissing(nas7);
    r138 = `!`(nas7);
    ___1 = ldf `[<-` in base;
    r139 = dyn ___1(l7, r133, r138);
    goto L33(r135, r139);
  L280():
    goto L41(r161);
  L283():
    sum_drop_sqr3 = force? sum_drop_sqr2;
    checkMissing(sum_drop_sqr3);
    as_integer11 = ldf `as.integer` in base;
    r164 = dyn as_integer11(sum_drop_sqr3);
    check L284() else D100();
  L285():
    D2 = ld D;
    check L287() else D101();
  L286():
    r165 = dyn base32(<sym D>);
    goto L43(r165);
  L384():
    dr34 = tryDispatchBuiltin.1("[", x_evaluate21);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L386() else L385(dr34);
  L385(x_evaluate23):
    inside6 = ld inside;
    check L387() else D138();
  L390():
    _C2 = ldf `.C` in base;
    r255 = dyn _C2(C_loess_ifit1, r227, r231, r235, r239, r243, r247, r250, r254);
    check L391() else D142();
  L419():
    x_evaluate25 = force? x_evaluate24;
    checkMissing(x_evaluate25);
    c27 = `is.object`(x_evaluate25);
    if c27 then L420() else L421(x_evaluate25);
  L425():
    weights5 = ld weights;
    check L427() else D155();
  L426():
    r272 = dyn base53(<sym weights>);
    goto L72(r272);
  L478():
    tmp = ld tmp;
    check L480() else D184();
  L479():
    r326 = dyn base64(<sym tmp>);
    goto L82(s7, r326);
  D57():
    deopt 200 [r78];
  D58():
    deopt 203 [nonparametric];
  D100():
    deopt 334 [r164];
  D101():
    deopt 337 [D2];
  D138():
    deopt 462 [x_evaluate23, inside6];
  D139():
    deopt 468 [r252];
  D142():
    deopt 475 [r255];
  D155():
    deopt 521 [weights5];
  D184():
    deopt 601 [s7, tmp];
  L24(r83):
    sym17 = ldf `as.integer`;
    base17 = ldf `as.integer` in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L204() else L205();
  L44(r169):
    sym34 = ldf `as.integer`;
    base34 = ldf `as.integer` in base;
    guard34 = `==`.4(sym34, base34);
    if guard34 then L293() else L294();
  L71(dx54):
    as_double11 = ldf `as.double` in base;
    r271 = dyn as_double11(dx54);
    check L424() else D154();
  L73(r276):
    sym55 = ldf `as.integer`;
    base55 = ldf `as.integer` in base;
    guard55 = `==`.4(sym55, base55);
    if guard55 then L433() else L434();
  L83(r333, dx58):
    st `se.fit` = dx58;
    goto L84(r333);
  L195():
    goto L22(r78);
  L198():
    nonparametric1 = force? nonparametric;
    checkMissing(nonparametric1);
    as_integer2 = ldf `as.integer` in base;
    r81 = dyn as_integer2(nonparametric1);
    check L199() else D59();
  L200():
    order_drop_sqr = ld `order.drop.sqr`;
    check L202() else D60();
  L201():
    r82 = dyn base16(<sym order.drop.sqr>);
    goto L24(r82);
  L284():
    goto L42(r164);
  L287():
    D3 = force? D2;
    checkMissing(D3);
    as_integer12 = ldf `as.integer` in base;
    r167 = dyn as_integer12(D3);
    check L288() else D102();
  L289():
    N6 = ld N;
    check L291() else D103();
  L290():
    r168 = dyn base33(<sym N>);
    goto L44(r168);
  L386():
    dx42 = getTryDispatchBuiltinValue(dr34);
    goto L62(dx42);
  L387():
    inside7 = force? inside6;
    __5 = ldf `[` in base;
    r251 = dyn __5(x_evaluate21, inside7, <missing>);
    goto L62(r251);
  L388():
    goto L61(r252);
  L391():
    goto L54(r255);
  L420():
    dr40 = tryDispatchBuiltin.1("[", x_evaluate25);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L422() else L421(dr40);
  L421(x_evaluate27):
    inside12 = ld inside;
    check L423() else D153();
  L427():
    weights6 = force? weights5;
    checkMissing(weights6);
    as_double12 = ldf `as.double` in base;
    r274 = dyn as_double12(weights6);
    check L428() else D156();
  L429():
    span5 = ld span;
    check L431() else D157();
  L430():
    r275 = dyn base54(<sym span>);
    goto L73(r275);
  L480():
    tmp1 = force? tmp;
    checkMissing(tmp1);
    r328 = sqrt(tmp1);
    goto L82(s7, r328);
  L481():
    dr44 = tryDispatchBuiltin.0("[<-", l20, r329);
    dc22 = getTryDispatchBuiltinDispatched(dr44);
    if dc22 then L483() else L482(r329, dr44);
  L482(r331, l22):
    inside14 = ld inside;
    check L484() else D185();
  D59():
    deopt 206 [r81];
  D60():
    deopt 209 [order_drop_sqr];
  D102():
    deopt 340 [r167];
  D103():
    deopt 343 [N6];
  D153():
    deopt 512 [x_evaluate27, inside12];
  D154():
    deopt 518 [r271];
  D156():
    deopt 524 [r274];
  D157():
    deopt 527 [span5];
  D185():
    deopt 606 [r331, l22, r329, inside14];
  L25(r86):
    sym18 = ldf `as.integer`;
    base18 = ldf `as.integer` in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L208() else L209();
  L45(r172):
    double2 = ldf double;
    check L297() else D107();
  L74(r279):
    sym56 = ldf `as.integer`;
    base56 = ldf `as.integer` in base;
    guard56 = `==`.4(sym56, base56);
    if guard56 then L437() else L438();
  L199():
    goto L23(r81);
  L202():
    order_drop_sqr1 = force? order_drop_sqr;
    checkMissing(order_drop_sqr1);
    as_integer3 = ldf `as.integer` in base;
    r84 = dyn as_integer3(order_drop_sqr1);
    check L203() else D61();
  L204():
    sum_drop_sqr = ld `sum.drop.sqr`;
    check L206() else D62();
  L205():
    r85 = dyn base17(<sym sum.drop.sqr>);
    goto L25(r85);
  L288():
    goto L43(r167);
  L291():
    N7 = force? N6;
    checkMissing(N7);
    as_integer13 = ldf `as.integer` in base;
    r170 = dyn as_integer13(N7);
    check L292() else D104();
  L293():
    M8 = ld M;
    check L295() else D105();
  L294():
    r171 = dyn base34(<sym M>);
    goto L45(r171);
  L422():
    dx53 = getTryDispatchBuiltinValue(dr40);
    goto L71(dx53);
  L423():
    inside13 = force? inside12;
    __6 = ldf `[` in base;
    r270 = dyn __6(x_evaluate25, inside13, <missing>);
    goto L71(r270);
  L424():
    goto L70(r271);
  L428():
    goto L72(r274);
  L431():
    span6 = force? span5;
    checkMissing(span6);
    as_double13 = ldf `as.double` in base;
    r277 = dyn as_double13(span6);
    check L432() else D158();
  L433():
    degree5 = ld degree;
    check L435() else D159();
  L434():
    r278 = dyn base55(<sym degree>);
    goto L74(r278);
  L483():
    dx57 = getTryDispatchBuiltinValue(dr44);
    goto L83(r329, dx57);
  L484():
    inside15 = force? inside14;
    ___5 = ldf `[<-` in base;
    r334 = dyn ___5(l22, r329, inside15);
    goto L83(r331, r334);
  D61():
    deopt 212 [r84];
  D62():
    deopt 215 [sum_drop_sqr];
  D104():
    deopt 346 [r170];
  D105():
    deopt 349 [M8];
  D107():
    deopt 354 [];
  D158():
    deopt 530 [r277];
  D159():
    deopt 533 [degree5];
  L26(r89):
    sym19 = ldf `as.integer`;
    base19 = ldf `as.integer` in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L212() else L213();
  L75(r282):
    sym57 = ldf `as.integer`;
    base57 = ldf `as.integer` in base;
    guard57 = `==`.4(sym57, base57);
    if guard57 then L441() else L442();
  L203():
    goto L24(r84);
  L206():
    sum_drop_sqr1 = force? sum_drop_sqr;
    checkMissing(sum_drop_sqr1);
    as_integer4 = ldf `as.integer` in base;
    r87 = dyn as_integer4(sum_drop_sqr1);
    check L207() else D63();
  L208():
    D = ld D;
    check L210() else D64();
  L209():
    r88 = dyn base18(<sym D>);
    goto L26(r88);
  L292():
    goto L44(r170);
  L295():
    M9 = force? M8;
    checkMissing(M9);
    as_integer14 = ldf `as.integer` in base;
    r173 = dyn as_integer14(M9);
    check L296() else D106();
  L297():
    p14 = prom<V +>{
      M10 = ld M;
      M11 = force? M10;
      checkMissing(M11);
      return M11;
    };
    r175 = dyn double2(p14);
    check L298() else D108();
  L432():
    goto L73(r277);
  L435():
    degree6 = force? degree5;
    checkMissing(degree6);
    as_integer18 = ldf `as.integer` in base;
    r280 = dyn as_integer18(degree6);
    check L436() else D160();
  L437():
    nonparametric4 = ld nonparametric;
    check L439() else D161();
  L438():
    r281 = dyn base56(<sym nonparametric>);
    goto L75(r281);
  D63():
    deopt 218 [r87];
  D64():
    deopt 221 [D];
  D106():
    deopt 352 [r173];
  D108():
    deopt 356 [r175];
  D160():
    deopt 536 [r280];
  D161():
    deopt 539 [nonparametric4];
  L27(r92):
    sym20 = ldf `as.integer`;
    base20 = ldf `as.integer` in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L216() else L217();
  L76(r285):
    sym58 = ldf `as.integer`;
    base58 = ldf `as.integer` in base;
    guard58 = `==`.4(sym58, base58);
    if guard58 then L445() else L446();
  L207():
    goto L25(r87);
  L210():
    D1 = force? D;
    checkMissing(D1);
    as_integer5 = ldf `as.integer` in base;
    r90 = dyn as_integer5(D1);
    check L211() else D65();
  L212():
    N = ld N;
    check L214() else D66();
  L213():
    r91 = dyn base19(<sym N>);
    goto L27(r91);
  L296():
    goto L45(r173);
  L298():
    _C1 = ldf `.C` in base;
    r176 = dyn _C1(C_loess_dfit1, y4, x19, r144, r147, r151, r154, r157, r160, r163, r166, r169, r172, r175);
    check L299() else D109();
  L436():
    goto L74(r280);
  L439():
    nonparametric5 = force? nonparametric4;
    checkMissing(nonparametric5);
    as_integer19 = ldf `as.integer` in base;
    r283 = dyn as_integer19(nonparametric5);
    check L440() else D162();
  L441():
    order_drop_sqr4 = ld `order.drop.sqr`;
    check L443() else D163();
  L442():
    r284 = dyn base57(<sym order.drop.sqr>);
    goto L76(r284);
  D65():
    deopt 224 [r90];
  D66():
    deopt 227 [N];
  D109():
    deopt 359 [r176];
  D162():
    deopt 542 [r283];
  D163():
    deopt 545 [order_drop_sqr4];
  L28(r95):
    double = ldf double;
    check L220() else D70();
  L77(r288):
    sym59 = ldf `as.double`;
    base59 = ldf `as.double` in base;
    guard59 = `==`.4(sym59, base59);
    if guard59 then L449() else L450();
  L211():
    goto L26(r90);
  L214():
    N1 = force? N;
    checkMissing(N1);
    as_integer6 = ldf `as.integer` in base;
    r93 = dyn as_integer6(N1);
    check L215() else D67();
  L216():
    M = ld M;
    check L218() else D68();
  L217():
    r94 = dyn base20(<sym M>);
    goto L28(r94);
  L299():
    goto L35(r176);
  L440():
    goto L75(r283);
  L443():
    order_drop_sqr5 = force? order_drop_sqr4;
    checkMissing(order_drop_sqr5);
    as_integer20 = ldf `as.integer` in base;
    r286 = dyn as_integer20(order_drop_sqr5);
    check L444() else D164();
  L445():
    sum_drop_sqr4 = ld `sum.drop.sqr`;
    check L447() else D165();
  L446():
    r287 = dyn base58(<sym sum.drop.sqr>);
    goto L77(r287);
  D67():
    deopt 230 [r93];
  D68():
    deopt 233 [M];
  D70():
    deopt 238 [];
  D164():
    deopt 548 [r286];
  D165():
    deopt 551 [sum_drop_sqr4];
  L78(r291):
    sym60 = ldf `as.integer`;
    base60 = ldf `as.integer` in base;
    guard60 = `==`.4(sym60, base60);
    if guard60 then L454() else L455();
  L215():
    goto L27(r93);
  L218():
    M1 = force? M;
    checkMissing(M1);
    as_integer7 = ldf `as.integer` in base;
    r96 = dyn as_integer7(M1);
    check L219() else D69();
  L220():
    p8 = prom<V +>{
      M2 = ld M;
      M3 = force? M2;
      checkMissing(M3);
      return M3;
    };
    r98 = dyn double(p8);
    check L221() else D71();
  L444():
    goto L76(r286);
  L447():
    sum_drop_sqr5 = force? sum_drop_sqr4;
    checkMissing(sum_drop_sqr5);
    as_integer21 = ldf `as.integer` in base;
    r289 = dyn as_integer21(sum_drop_sqr5);
    check L448() else D166();
  L449():
    span7 = ld span;
    check L451() else D167();
  L450():
    r290 = dyn base59(<lang `*`(span, cell)>);
    goto L78(r290);
  D69():
    deopt 236 [r96];
  D71():
    deopt 240 [r98];
  D166():
    deopt 554 [r289];
  D167():
    deopt 557 [span7];
  L79(r295):
    sym61 = ldf `as.integer`;
    base61 = ldf `as.integer` in base;
    guard61 = `==`.4(sym61, base61);
    if guard61 then L458() else L459();
  L219():
    goto L28(r96);
  L221():
    double1 = ldf double;
    check L222() else D72();
  L448():
    goto L77(r289);
  L451():
    span8 = force? span7;
    checkMissing(span8);
    cell1 = ld cell;
    check L452() else D168();
  L454():
    D6 = ld D;
    check L456() else D170();
  L455():
    r294 = dyn base60(<sym D>);
    goto L79(r294);
  D72():
    deopt 243 [];
  D168():
    deopt 558 [span8, cell1];
  D170():
    deopt 565 [D6];
  L80(r298):
    sym62 = ldf `as.integer`;
    base62 = ldf `as.integer` in base;
    guard62 = `==`.4(sym62, base62);
    if guard62 then L462() else L463();
  L222():
    p9 = prom<V +>{
      N2 = ld N;
      N3 = force? N2;
      checkMissing(N3);
      M4 = ld M;
      M5 = force? M4;
      checkMissing(M5);
      r99 = `*`(N3, M5);
      return r99;
    };
    r101 = dyn double1(p9);
    check L223() else D73();
  L452():
    cell2 = force? cell1;
    checkMissing(cell2);
    r292 = `*`(span8, cell2);
    as_double14 = ldf `as.double` in base;
    r293 = dyn as_double14(r292);
    check L453() else D169();
  L456():
    D7 = force? D6;
    checkMissing(D7);
    as_integer22 = ldf `as.integer` in base;
    r296 = dyn as_integer22(D7);
    check L457() else D171();
  L458():
    N8 = ld N;
    check L460() else D172();
  L459():
    r297 = dyn base61(<sym N>);
    goto L80(r297);
  D73():
    deopt 245 [r101];
  D169():
    deopt 562 [r293];
  D171():
    deopt 568 [r296];
  D172():
    deopt 571 [N8];
  L81(r301):
    double4 = ldf double;
    check L466() else D176();
  L223():
    _C = ldf `.C` in base;
    r102 = dyn _C(C_loess_dfitse1, y2, x17, r60, r63, r67, r70, r74, r77, r80, r83, r86, r89, r92, r95, r98, r101);
    check L224() else D74();
  L453():
    goto L78(r293);
  L457():
    goto L79(r296);
  L460():
    N9 = force? N8;
    checkMissing(N9);
    as_integer23 = ldf `as.integer` in base;
    r299 = dyn as_integer23(N9);
    check L461() else D173();
  L462():
    M20 = ld M1;
    check L464() else D174();
  L463():
    r300 = dyn base62(<sym M1>);
    goto L81(r300);
  D74():
    deopt 248 [r102];
  D173():
    deopt 574 [r299];
  D174():
    deopt 577 [M20];
  D176():
    deopt 582 [];
  L224():
    goto L16(r102);
  L461():
    goto L80(r299);
  L464():
    M21 = force? M20;
    checkMissing(M21);
    as_integer24 = ldf `as.integer` in base;
    r302 = dyn as_integer24(M21);
    check L465() else D175();
  L466():
    p19 = prom<V +>{
      M22 = ld M1;
      M23 = force? M22;
      checkMissing(M23);
      return M23;
    };
    r304 = dyn double4(p19);
    check L467() else D177();
  D175():
    deopt 580 [r302];
  D177():
    deopt 584 [r304];
  L465():
    goto L81(r302);
  L467():
    double5 = ldf double;
    check L468() else D178();
  D178():
    deopt 586 [];
  L468():
    p20 = prom<V +>{
      N10 = ld N;
      N11 = force? N10;
      checkMissing(N11);
      M24 = ld M1;
      M25 = force? M24;
      checkMissing(M25);
      r305 = `*`(N11, M25);
      return r305;
    };
    r307 = dyn double5(p20);
    check L469() else D179();
  D179():
    deopt 588 [r307];
  L469():
    _C3 = ldf `.C` in base;
    r308 = dyn _C3(C_loess_ise1, y6, x23, r269, r273, r276, r279, r282, r285, r288, r291, r295, r298, r301, r304, r307);
    check L470() else D180();
  D180():
    deopt 591 [r308];
  L470():
    goto L69(r308);
  }
}