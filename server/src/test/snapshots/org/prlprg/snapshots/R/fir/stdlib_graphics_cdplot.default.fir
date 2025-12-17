fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3878812840;
    st `cdplot.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3878812840(x, y, plot, `tol.ylab`, ylevels, bw, n, from, to, col, border, main, xlab, ylab, yaxlabels, xlim, ylim, weights, `...`) {
  (reg x:*, reg y:*, reg plot:*, reg tol_ylab:*, reg ylevels:*, reg bw:*, reg n:*, reg from:*, reg to:*, reg col:*, reg border:*, reg main:*, reg xlab:*, reg ylab:*, reg yaxlabels:*, reg xlim:*, reg ylim:*, reg weights:*, reg ddd:dots) -+> V { var x:*, var y:*, var plot:*, reg plot_isMissing:L, reg plot_orDefault:*, var `tol.ylab`:*, reg tol_ylab_isMissing:L, reg tol_ylab_orDefault:*, var ylevels:*, reg ylevels_isMissing:L, reg ylevels_orDefault:*, var bw:*, reg bw_isMissing:L, reg bw_orDefault:*, var n:*, reg n_isMissing:L, reg n_orDefault:*, var from:*, reg from_isMissing:L, reg from_orDefault:*, var to:*, reg to_isMissing:L, reg to_orDefault:*, var col:*, reg col_isMissing:L, reg col_orDefault:*, var border:*, reg border_isMissing:L, reg border_orDefault:*, var main:*, reg main_isMissing:L, reg main_orDefault:*, var xlab:*, reg xlab_isMissing:L, reg xlab_orDefault:*, var ylab:*, reg ylab_isMissing:L, reg ylab_orDefault:*, var yaxlabels:*, reg yaxlabels_isMissing:L, reg yaxlabels_orDefault:*, var xlim:*, reg xlim_isMissing:L, reg xlim_orDefault:*, var ylim:*, reg ylim_isMissing:L, reg ylim_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var weights:*, reg weights_isMissing:L, reg weights_orDefault:*, var `...`:dots?, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg xlab1:*, reg xlab2:V, reg c1:V, reg c2:L, reg deparse1:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg substitute:cls, reg r8:V, reg p1:p(V +), reg r10:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r12:V, reg r13:V, reg ylab1:*, reg ylab2:V, reg c3:V, reg c4:L, reg deparse2:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r14:V, reg r15:V, reg substitute1:cls, reg r16:V, reg p2:p(V +), reg r18:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r20:V, reg r21:V, reg col1:*, reg col2:V, reg c5:V, reg c6:L, reg gray_colors:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r22:V, reg r23:V, reg levels:cls, reg y1:*, reg y2:V, reg p3:p(V +), reg r25:V, reg length:cls, reg r26:V, reg p4:p(V +), reg r28:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r30:V, reg r31:V, reg col3:*, reg col4:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r32:V, reg r33:V, reg levels1:cls, reg y3:*, reg y4:V, reg p5:p(V +), reg r35:V, reg length1:cls, reg r36:V, reg rep_len:cls, reg r37:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r38:V, reg r39:V, reg yaxlabels1:*, reg yaxlabels2:V, reg c7:V, reg c8:L, reg levels2:cls, reg y5:*, reg y6:V, reg p6:p(V +), reg r41:V, reg x1:*, reg x2:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r43:V, reg r44:V, reg x3:*, reg x4:V, reg as_numeric:cls, reg r45:V, reg is_factor:cls, reg y7:*, reg y8:V, reg p7:p(V +), reg r47:V, reg r48:V, reg c9:L, reg stop:cls, reg r49:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r51:V, reg r52:V, reg weights1:*, reg weights2:V, reg c10:V, reg c11:L, reg r53:V, reg weights3:*, reg weights4:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r54:V, reg weights7:V, reg r55:V, reg weights8:*, reg weights9:V, reg sum:cls, reg r56:V, reg r57:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r58:V, reg r59:V, reg ylevels1:*, reg ylevels2:V, reg c12:V, reg c13:L, reg nlevels:cls, reg y9:*, reg y10:V, reg p8:p(V +), reg r61:V, reg r62:V, reg r63:V, reg rev:cls, reg ylevels3:*, reg ylevels4:V, reg p9:p(V +), reg r65:V, reg factor:cls, reg y11:*, reg y12:V, reg p10:p(V +), reg sym14:cls, reg base14:cls, reg guard14:L, reg r67:V, reg r68:V, reg ylevels5:*, reg ylevels6:V, reg is_numeric:cls, reg r69:V, reg c14:L, reg levels3:cls, reg y13:*, reg y14:V, reg p11:p(V +), reg r71:V, reg c15:L, reg r73:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ylevels7:*, reg ylevels8:V, reg __:cls, reg r74:V, reg ylevels9:*, reg ylevels10:V, reg p12:p(V +), reg r76:V, reg yaxlabels3:*, reg yaxlabels4:V, reg c16:L, reg yaxlabels6:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg ylevels11:*, reg ylevels12:V, reg __1:cls, reg r77:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r78:V, reg r79:V, reg from1:*, reg from2:V, reg c17:V, reg c18:L, reg c20:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r80:V, reg c23:L, reg r81:V, reg to1:*, reg to2:V, reg c24:V, reg c25:L, reg c26:V, reg c28:L, reg __2:cls, reg r82:V, reg r83:cls, reg x5:*, reg x6:V, reg p13:p(V +), reg bw1:*, reg bw2:V, reg p14:p(V +), reg n1:*, reg n2:V, reg p15:p(V +), reg w:*, reg w1:V, reg p16:p(V +), reg ddd1:dots?, reg r88:V, reg r89:V, reg __3:cls, reg r90:V, reg r91:cls, reg x7:*, reg x8:V, reg p17:p(V +), reg bw3:*, reg bw4:V, reg p18:p(V +), reg from3:*, reg from4:V, reg p19:p(V +), reg to3:*, reg to4:V, reg p20:p(V +), reg n3:*, reg n4:V, reg p21:p(V +), reg w2:*, reg w3:V, reg p22:p(V +), reg ddd2:dots?, reg r98:V, reg dx4:*, reg dx5:V, reg c29:L, reg dx7:V, reg dr4:V, reg dc2:L, reg dx8:V, reg dx9:V, reg r99:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r100:V, reg r101:V, reg levels4:cls, reg y15:*, reg y16:V, reg p23:p(V +), reg r103:V, reg length2:cls, reg r104:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r105:V, reg r106:V, reg weights10:*, reg weights11:V, reg c30:V, reg c31:L, reg sym19:cls, reg base19:cls, reg guard19:L, reg r107:V, reg r108:V, reg proportions:cls, reg table:cls, reg y17:*, reg y18:V, reg p24:p(V +), reg r110:V, reg p25:p(V +), reg r112:V, reg cumsum:cls, reg r113:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r115:V, reg r116:V, reg proportions1:cls, reg tapply:cls, reg weights12:*, reg weights13:V, reg p26:p(V +), reg y19:*, reg y20:V, reg p27:p(V +), reg sum1:*, reg sum2:V, reg p28:p(V +), reg r120:V, reg p29:p(V +), reg r122:V, reg cumsum1:cls, reg r123:V, reg l:*, reg c32:L, reg r125:R, reg l2:*, reg dr6:V, reg dc3:L, reg dx10:V, reg r127:R, reg dx11:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r132:V, reg r133:R, reg l5:*, reg r134:R, reg r135:V, reg yprop:*, reg yprop1:V, reg is_na:cls, reg r136:V, reg ___:cls, reg r137:V, reg matrix:cls, reg sym22:cls, reg base22:cls, reg guard22:L, reg r138:V, reg r139:V, reg rep:cls, reg r140:V, reg p30:p(V +), reg ny:*, reg ny1:V, reg r142:V, reg p31:p(V +), reg r144:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r145:V, reg r146:V, reg list:cls, reg r147:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r148:V, reg r149:V, reg ny2:*, reg ny3:V, reg r150:V, reg r151:I, reg s:V, reg l6:I, reg i:I, reg i1:I, reg i2:I, reg c33:L, reg x9:V, reg _in_:cls, reg y21:*, reg y22:V, reg p32:p(V +), reg levels5:cls, reg y23:*, reg y24:V, reg p33:p(V +), reg r154:V, reg c34:L, reg r156:V, reg dr8:V, reg dc4:L, reg dx12:V, reg dx13:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r159:V, reg r160:V, reg r161:V, reg i5:*, reg i6:V, reg r162:I, reg __4:cls, reg r163:V, reg p34:p(V +), reg r165:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r166:V, reg i9:I, reg r167:V, reg weights14:*, reg weights15:V, reg c35:V, reg c36:L, reg i12:I, reg r168:V, reg weights16:*, reg weights17:V, reg c37:L, reg i14:I, reg weights19:V, reg dr10:V, reg dc5:L, reg dx14:V, reg i16:I, reg dx15:V, reg yi:*, reg yi1:V, reg __5:cls, reg r169:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r170:V, reg i19:I, reg dx18:V, reg r171:V, reg weights20:*, reg weights21:V, reg c38:L, reg i21:I, reg dx20:V, reg weights23:V, reg dr12:V, reg dc6:L, reg dx22:V, reg i23:I, reg dx23:V, reg dx24:V, reg yi2:*, reg yi3:V, reg __6:cls, reg r172:V, reg sum3:cls, reg r173:V, reg r174:V, reg __7:cls, reg r175:V, reg r176:cls, reg x10:*, reg x11:V, reg c39:L, reg x13:V, reg dr14:V, reg dc7:L, reg dx25:V, reg dx26:V, reg yi4:*, reg yi5:V, reg __8:cls, reg r177:V, reg p35:p(V +), reg dx27:*, reg dx28:V, reg c40:L, reg dx30:V, reg dr16:V, reg dc8:L, reg dx31:V, reg dx32:V, reg r179:V, reg p36:p(V +), reg n5:*, reg n6:V, reg p37:p(V +), reg sym28:cls, reg base28:cls, reg guard28:L, reg r182:V, reg r183:V, reg dx33:*, reg dx34:V, reg c41:L, reg dx36:V, reg dr18:V, reg dc9:L, reg dx37:V, reg dx38:V, reg r184:V, reg min:cls, reg r185:V, reg p38:p(V +), reg sym29:cls, reg base29:cls, reg guard29:L, reg r187:V, reg r188:V, reg dx39:*, reg dx40:V, reg c42:L, reg dx42:V, reg dr20:V, reg dc10:L, reg dx43:V, reg dx44:V, reg r189:V, reg max:cls, reg r190:V, reg p39:p(V +), reg wi:*, reg wi1:V, reg p40:p(V +), reg ddd3:dots?, reg r193:V, reg dxi:*, reg dxi1:V, reg c43:L, reg i25:I, reg dxi3:V, reg dr22:V, reg dc11:L, reg dx45:V, reg i27:I, reg dx46:V, reg r194:V, reg dx47:*, reg dx48:V, reg c44:L, reg i29:I, reg dx51:V, reg dx52:V, reg dr24:V, reg dc12:L, reg dx54:V, reg i31:I, reg dx55:V, reg dx56:V, reg r195:V, reg r196:V, reg yprop2:*, reg yprop3:V, reg c45:L, reg i33:I, reg r198:V, reg yprop5:V, reg dr26:V, reg dc13:L, reg dx57:V, reg i35:I, reg r200:V, reg dx58:V, reg i36:*, reg i37:V, reg __9:cls, reg r201:V, reg r202:V, reg l7:*, reg c46:L, reg i39:I, reg r204:V, reg l9:*, reg dr28:V, reg dc14:L, reg dx59:V, reg i41:I, reg dx60:V, reg i42:*, reg i43:V, reg ___1:cls, reg r207:V, reg __10:cls, reg r208:V, reg r209:cls, reg x14:*, reg x15:V, reg p41:p(V +), reg y25:*, reg y26:V, reg c47:L, reg dr30:V, reg dc15:L, reg dx61:V, reg dx62:V, reg i44:*, reg i45:V, reg __11:cls, reg r211:V, reg p42:p(V +), reg r213:V, reg l10:*, reg c48:L, reg i47:I, reg r215:V, reg l12:*, reg dr32:V, reg dc16:L, reg dx63:V, reg i49:I, reg dx64:V, reg i50:*, reg i51:V, reg ____:cls, reg r218:V, reg levels6:cls, reg y29:*, reg y30:V, reg p43:p(V +), reg r220:V, reg c49:L, reg r222:V, reg dr34:V, reg dc17:L, reg dx65:V, reg dx66:V, reg sym30:cls, reg base30:cls, reg guard30:L, reg r225:V, reg r226:V, reg r227:V, reg ny4:*, reg ny5:V, reg r228:V, reg r229:I, reg __12:cls, reg r230:V, reg l13:*, reg names__:cls, reg r231:V, reg rbind:cls, reg y31:*, reg y32:V, reg p44:p(V +), reg r233:V, reg y33:*, reg y34:V, reg c50:L, reg y36:V, reg dr36:V, reg dc18:L, reg dx67:V, reg dx68:V, reg which:cls, reg x16:*, reg x17:V, reg sym31:cls, reg base31:cls, reg guard31:L, reg r234:V, reg x20:V, reg r235:V, reg x21:*, reg x22:V, reg min1:cls, reg r236:V, reg r237:V, reg x23:*, reg x24:V, reg sym32:cls, reg base32:cls, reg guard32:L, reg r240:V, reg r241:V, reg x27:V, reg r242:V, reg x28:*, reg x29:V, reg max1:cls, reg r243:V, reg r244:V, reg r245:V, reg p45:p(V +), reg r247:V, reg __13:cls, reg r248:V, reg x30:*, reg x31:V, reg c51:L, reg x33:V, reg dr38:V, reg dc19:L, reg dx69:V, reg dx70:V, reg x34:*, reg x35:V, reg sym33:cls, reg base33:cls, reg guard33:L, reg r249:V, reg x40:V, reg x41:V, reg r250:V, reg x42:*, reg x43:V, reg min2:cls, reg r251:V, reg r252:V, reg x44:*, reg x45:V, reg sym34:cls, reg base34:cls, reg guard34:L, reg r255:V, reg x50:V, reg r256:V, reg x51:V, reg r257:V, reg x52:*, reg x53:V, reg max2:cls, reg r258:V, reg r259:V, reg r260:V, reg __14:cls, reg r261:V, reg sym35:cls, reg base35:cls, reg guard35:L, reg r262:V, reg r263:V, reg xlim1:*, reg xlim2:V, reg c52:V, reg c53:L, reg sym36:cls, reg base36:cls, reg guard36:L, reg r264:V, reg r265:V, reg x54:*, reg x55:V, reg range:cls, reg r266:V, reg sym37:cls, reg base37:cls, reg guard37:L, reg r268:V, reg r269:V, reg ylim1:*, reg ylim2:V, reg r270:V, reg any:cls, reg r271:V, reg c54:L, reg c55:V, reg sym38:cls, reg base38:cls, reg guard38:L, reg r272:V, reg c59:L, reg r273:V, reg ylim3:*, reg ylim4:V, reg r274:V, reg any1:cls, reg r275:V, reg c60:L, reg c61:V, reg c63:L, reg warning:cls, reg r276:V, reg sym39:cls, reg base39:cls, reg guard39:L, reg r277:V, reg r278:V, reg ylim5:*, reg ylim6:V, reg min3:cls, reg r279:V, reg r280:V, reg c64:L, reg c65:V, reg sym40:cls, reg base40:cls, reg guard40:L, reg r281:V, reg c69:L, reg r282:V, reg ylim7:*, reg ylim8:V, reg max3:cls, reg r283:V, reg r284:V, reg c70:L, reg c71:V, reg c73:L, reg sym41:cls, reg base41:cls, reg guard41:L, reg r285:V, reg r286:V, reg c74:cls, reg r287:V, reg r288:V, reg sym42:cls, reg base42:cls, reg guard42:L, reg r289:V, reg r290:V, reg sym43:cls, reg base43:cls, reg guard43:L, reg r291:V, reg r292:V, reg sym44:cls, reg base44:cls, reg guard44:L, reg r293:V, reg r294:V, reg ylim9:*, reg ylim10:V, reg min4:cls, reg r295:V, reg max4:cls, reg r296:V, reg sym45:cls, reg base45:cls, reg guard45:L, reg r297:V, reg r298:V, reg sym46:cls, reg base46:cls, reg guard46:L, reg r299:V, reg r300:V, reg ylim11:*, reg ylim12:V, reg max5:cls, reg r301:V, reg min5:cls, reg r302:V, reg c75:cls, reg r303:V, reg plot1:*, reg plot2:V, reg c76:L, reg dev_hold:cls, reg r305:V, reg sym47:cls, reg base47:cls, reg guard47:L, reg r306:V, reg on_exit:cls, reg r308:V, reg plot3:cls, reg xlim3:*, reg xlim4:V, reg p46:p(V +), reg ylim13:*, reg ylim14:V, reg p47:p(V +), reg xlab3:*, reg xlab4:V, reg p48:p(V +), reg ylab3:*, reg ylab4:V, reg p49:p(V +), reg main1:*, reg main2:V, reg p50:p(V +), reg r314:V, reg sym48:cls, reg base48:cls, reg guard48:L, reg r315:V, reg r316:V, reg NROW:cls, reg y37:*, reg y38:V, reg p51:p(V +), reg r318:V, reg r319:V, reg r320:I, reg s1:V, reg l14:I, reg i52:I, reg i53:I, reg i54:I, reg c77:L, reg x56:V, reg polygon:cls, reg sym49:cls, reg base49:cls, reg guard49:L, reg r321:V, reg r322:V, reg x57:*, reg x58:V, reg rev1:cls, reg x59:*, reg x60:V, reg p52:p(V +), reg r324:V, reg c78:cls, reg r325:V, reg p53:p(V +), reg sym50:cls, reg base50:cls, reg guard50:L, reg r327:V, reg r328:V, reg y39:*, reg y40:V, reg c79:L, reg dr40:V, reg dc20:L, reg dx71:V, reg dx72:V, reg i57:*, reg i58:V, reg r329:V, reg __15:cls, reg r330:V, reg rev2:cls, reg y43:*, reg y44:V, reg c80:L, reg dr42:V, reg dc21:L, reg dx73:V, reg dx74:V, reg i59:*, reg i60:V, reg __16:cls, reg r331:V, reg p54:p(V +), reg r333:V, reg c81:cls, reg r334:V, reg p55:p(V +), reg col5:*, reg col6:V, reg c82:L, reg col8:V, reg dr44:V, reg dc22:L, reg dx75:V, reg dx76:V, reg i61:*, reg i62:V, reg __17:cls, reg r336:V, reg p56:p(V +), reg border1:*, reg border2:V, reg p57:p(V +), reg r339:V, reg Axis:cls, reg xorig:*, reg xorig1:V, reg p58:p(V +), reg r341:V, reg sym51:cls, reg base51:cls, reg guard51:L, reg r342:V, reg r343:V, reg diff:cls, reg y47:*, reg y48:V, reg c83:L, reg dr46:V, reg dc23:L, reg dx77:V, reg dx78:V, reg __18:cls, reg r344:V, reg p59:p(V +), reg r346:V, reg tol_ylab1:*, reg tol_ylab2:V, reg r347:V, reg any2:cls, reg r348:V, reg equidist:*, reg equidist1:V, reg c84:L, reg axis:cls, reg sym52:cls, reg base52:cls, reg guard52:L, reg r349:V, reg r350:V, reg ny6:*, reg ny7:V, reg r351:V, reg r352:V, reg ny8:*, reg ny9:V, reg r353:V, reg r354:V, reg r355:V, reg ny10:*, reg ny11:V, reg r356:V, reg seq_int:cls, reg r357:V, reg p60:p(V +), reg yaxlabels7:*, reg yaxlabels8:V, reg p61:p(V +), reg r360:V, reg axis1:cls, reg y51:*, reg y52:V, reg c85:L, reg y54:V, reg dr48:V, reg dc24:L, reg dx79:V, reg dx80:V, reg __19:cls, reg r362:V, reg y55:*, reg y56:V, reg c86:L, reg dx82:V, reg y58:V, reg dr50:V, reg dc25:L, reg dx84:V, reg dx85:V, reg dx86:V, reg NROW1:cls, reg y59:*, reg y60:V, reg p62:p(V +), reg r364:V, reg r365:V, reg __20:cls, reg r366:V, reg r367:V, reg r368:V, reg p63:p(V +), reg yaxlabels9:*, reg yaxlabels10:V, reg p64:p(V +), reg r371:V, reg axis2:cls, reg r372:V, reg box:cls, reg r373:V, reg sym53:cls, reg base53:cls, reg guard53:L, reg r375:V, reg r376:V, reg rval:*, reg rval1:V, reg invisible:cls, reg r377:V |
    mkenv;
    st x = x;
    st y = y;
    plot_isMissing = missing.0(plot);
    if plot_isMissing then L0(TRUE) else L0(plot);
  L0(plot_orDefault):
    st plot = plot_orDefault;
    tol_ylab_isMissing = missing.0(tol_ylab);
    if tol_ylab_isMissing then L1(0.05) else L1(tol_ylab);
  L1(tol_ylab_orDefault):
    st `tol.ylab` = tol_ylab_orDefault;
    ylevels_isMissing = missing.0(ylevels);
    if ylevels_isMissing then L2(NULL) else L2(ylevels);
  L2(ylevels_orDefault):
    st ylevels = ylevels_orDefault;
    bw_isMissing = missing.0(bw);
    if bw_isMissing then L3("nrd0") else L3(bw);
  L3(bw_orDefault):
    st bw = bw_orDefault;
    n_isMissing = missing.0(n);
    if n_isMissing then L4(512.0) else L4(n);
  L4(n_orDefault):
    st n = n_orDefault;
    from_isMissing = missing.0(from);
    if from_isMissing then L5(NULL) else L5(from);
  L5(from_orDefault):
    st from = from_orDefault;
    to_isMissing = missing.0(to);
    if to_isMissing then L6(NULL) else L6(to);
  L6(to_orDefault):
    st to = to_orDefault;
    col_isMissing = missing.0(col);
    if col_isMissing then L7(NULL) else L7(col);
  L7(col_orDefault):
    st col = col_orDefault;
    border_isMissing = missing.0(border);
    if border_isMissing then L8(1.0) else L8(border);
  L8(border_orDefault):
    st border = border_orDefault;
    main_isMissing = missing.0(main);
    if main_isMissing then L9("") else L9(main);
  L9(main_orDefault):
    st main = main_orDefault;
    xlab_isMissing = missing.0(xlab);
    if xlab_isMissing then L10(NULL) else L10(xlab);
  L10(xlab_orDefault):
    st xlab = xlab_orDefault;
    ylab_isMissing = missing.0(ylab);
    if ylab_isMissing then L11(NULL) else L11(ylab);
  L11(ylab_orDefault):
    st ylab = ylab_orDefault;
    yaxlabels_isMissing = missing.0(yaxlabels);
    if yaxlabels_isMissing then L12(NULL) else L12(yaxlabels);
  L12(yaxlabels_orDefault):
    st yaxlabels = yaxlabels_orDefault;
    xlim_isMissing = missing.0(xlim);
    if xlim_isMissing then L13(NULL) else L13(xlim);
  L13(xlim_orDefault):
    st xlim = xlim_orDefault;
    ylim_isMissing = missing.0(ylim);
    if ylim_isMissing then L14() else L15(ylim);
  L14():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c(0.0, 1.0);
      goto L0(r2);
    L2():
      r = dyn base(0.0, 1.0);
      goto L0(r);
    };
    goto L15(p);
  L15(ylim_orDefault):
    st ylim = ylim_orDefault;
    weights_isMissing = missing.0(weights);
    if weights_isMissing then L16(NULL) else L16(weights);
  L16(weights_orDefault):
    st weights = weights_orDefault;
    st `...` = ddd;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L104() else L105();
  L17(r5):
    c2 = `as.logical`(r5);
    if c2 then L107() else L18();
  L104():
    xlab1 = ld xlab;
    check L106() else D0();
  L105():
    r4 = dyn base1(<sym xlab>);
    goto L17(r4);
  D0():
    deopt 1 [xlab1];
  L18():
    goto L19();
  L19():
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L111() else L112();
  L106():
    xlab2 = force? xlab1;
    checkMissing(xlab2);
    c1 = `==`(xlab2, NULL);
    goto L17(c1);
  L107():
    deparse1 = ldf deparse1;
    check L108() else D1();
  D1():
    deopt 5 [];
  L20(r13):
    c4 = `as.logical`(r13);
    if c4 then L114() else L21();
  L108():
    p1 = prom<V +>{
      sym2 = ldf substitute;
      base2 = ldf substitute in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r7):
      return r7;
    L1():
      substitute = ldf substitute in base;
      r8 = dyn substitute(<sym x>);
      goto L0(r8);
    L2():
      r6 = dyn base2(<sym x>);
      goto L0(r6);
    };
    r10 = dyn deparse1(p1);
    check L109() else D2();
  L111():
    ylab1 = ld ylab;
    check L113() else D3();
  L112():
    r12 = dyn base3(<sym ylab>);
    goto L20(r12);
  D2():
    deopt 7 [r10];
  D3():
    deopt 12 [ylab1];
  L21():
    goto L22();
  L22():
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L118() else L119();
  L109():
    st xlab = r10;
    goto L19();
  L113():
    ylab2 = force? ylab1;
    checkMissing(ylab2);
    c3 = `==`(ylab2, NULL);
    goto L20(c3);
  L114():
    deparse2 = ldf deparse1;
    check L115() else D4();
  D4():
    deopt 16 [];
  L23(r21):
    c6 = `as.logical`(r21);
    if c6 then L121() else L24();
  L115():
    p2 = prom<V +>{
      sym4 = ldf substitute;
      base4 = ldf substitute in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r15):
      return r15;
    L1():
      substitute1 = ldf substitute in base;
      r16 = dyn substitute1(<sym y>);
      goto L0(r16);
    L2():
      r14 = dyn base4(<sym y>);
      goto L0(r14);
    };
    r18 = dyn deparse2(p2);
    check L116() else D5();
  L118():
    col1 = ld col;
    check L120() else D6();
  L119():
    r20 = dyn base5(<sym col>);
    goto L23(r20);
  D5():
    deopt 18 [r18];
  D6():
    deopt 23 [col1];
  L24():
    goto L25();
  L25():
    sym7 = ldf rep_len;
    base7 = ldf rep_len in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L125() else L126();
  L116():
    st ylab = r18;
    goto L22();
  L120():
    col2 = force? col1;
    checkMissing(col2);
    c5 = `==`(col2, NULL);
    goto L23(c5);
  L121():
    gray_colors = ldf `gray.colors`;
    check L122() else D7();
  D7():
    deopt 27 [];
  L26(r31):
    st col = r31;
    sym9 = ldf `is.null`;
    base9 = ldf `is.null` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L134() else L135();
  L122():
    p4 = prom<V +>{
      sym6 = ldf length;
      base6 = ldf length in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r23):
      return r23;
    L1():
      levels = ldf levels;
      p3 = prom<V +>{
        y1 = ld y;
        y2 = force? y1;
        checkMissing(y2);
        return y2;
      };
      r25 = dyn levels(p3);
      length = ldf length in base;
      r26 = dyn length(r25);
      goto L0(r26);
    L2():
      r22 = dyn base6(<lang levels(y)>);
      goto L0(r22);
    };
    r28 = dyn gray_colors(p4);
    check L123() else D8();
  L125():
    col3 = ld col;
    check L127() else D9();
  L126():
    r30 = dyn base7[, `length.out`](<sym col>, <lang length(levels(y))>);
    goto L26(r30);
  D8():
    deopt 29 [r28];
  D9():
    deopt 35 [col3];
  L28(r39):
    c8 = `as.logical`(r39);
    if c8 then L137() else L29();
  L123():
    st col = r28;
    goto L25();
  L127():
    col4 = force? col3;
    checkMissing(col4);
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L128() else L129();
  L134():
    yaxlabels1 = ld yaxlabels;
    check L136() else D14();
  L135():
    r38 = dyn base9(<sym yaxlabels>);
    goto L28(r38);
  D14():
    deopt 49 [yaxlabels1];
  L27(r33):
    rep_len = ldf rep_len in base;
    r37 = dyn rep_len(col4, r33);
    check L133() else D13();
  L29():
    goto L30();
  L30():
    x1 = ld x;
    check L141() else D17();
  L128():
    levels1 = ldf levels;
    check L130() else D10();
  L129():
    r32 = dyn base8(<lang levels(y)>);
    goto L27(r32);
  L136():
    yaxlabels2 = force? yaxlabels1;
    checkMissing(yaxlabels2);
    c7 = `==`(yaxlabels2, NULL);
    goto L28(c7);
  L137():
    levels2 = ldf levels;
    check L138() else D15();
  D10():
    deopt 40 [];
  D13():
    deopt 46 [r37];
  D15():
    deopt 53 [];
  D17():
    deopt 59 [x1];
  L130():
    p5 = prom<V +>{
      y3 = ld y;
      y4 = force? y3;
      checkMissing(y4);
      return y4;
    };
    r35 = dyn levels1(p5);
    check L131() else D11();
  L133():
    goto L26(r37);
  L138():
    p6 = prom<V +>{
      y5 = ld y;
      y6 = force? y5;
      checkMissing(y6);
      return y6;
    };
    r41 = dyn levels2(p6);
    check L139() else D16();
  L141():
    x2 = force? x1;
    checkMissing(x2);
    st xorig = x2;
    sym10 = ldf `as.numeric`;
    base10 = ldf `as.numeric` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L142() else L143();
  D11():
    deopt 42 [r35];
  D16():
    deopt 55 [r41];
  L31(r44):
    st x = r44;
    is_factor = ldf `is.factor`;
    check L146() else D20();
  L131():
    length1 = ldf length in base;
    r36 = dyn length1(r35);
    check L132() else D12();
  L139():
    st yaxlabels = r41;
    goto L30();
  L142():
    x3 = ld x;
    check L144() else D18();
  L143():
    r43 = dyn base10(<sym x>);
    goto L31(r43);
  D12():
    deopt 44 [r36];
  D18():
    deopt 64 [x3];
  D20():
    deopt 70 [];
  L132():
    goto L27(r36);
  L144():
    x4 = force? x3;
    checkMissing(x4);
    as_numeric = ldf `as.numeric` in base;
    r45 = dyn as_numeric(x4);
    check L145() else D19();
  L146():
    p7 = prom<V +>{
      y7 = ld y;
      y8 = force? y7;
      checkMissing(y8);
      return y8;
    };
    r47 = dyn is_factor(p7);
    check L147() else D21();
  D19():
    deopt 67 [r45];
  D21():
    deopt 72 [r47];
  L145():
    goto L31(r45);
  L147():
    r48 = `!`(r47);
    c9 = `as.logical`(r48);
    if c9 then L148() else L32();
  L32():
    goto L33();
  L33():
    sym11 = ldf `is.null`;
    base11 = ldf `is.null` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L152() else L153();
  L148():
    stop = ldf stop;
    check L149() else D22();
  D22():
    deopt 75 [];
  L34(r52):
    c11 = `as.logical`(r52);
    if c11 then L155() else L35();
  L149():
    r49 = dyn stop("dependent variable should be a factor");
    check L150() else D23();
  L152():
    weights1 = ld weights;
    check L154() else D24();
  L153():
    r51 = dyn base11(<sym weights>);
    goto L34(r51);
  D23():
    deopt 77 [r49];
  D24():
    deopt 81 [weights1];
  L35():
    weights3 = ld weights;
    check L157() else D25();
  L36(r53):
    st w = r53;
    sym13 = ldf `is.null`;
    base13 = ldf `is.null` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L162() else L163();
  L150():
    goto L33();
  L154():
    weights2 = force? weights1;
    checkMissing(weights2);
    c10 = `==`(weights2, NULL);
    goto L34(c10);
  L155():
    goto L36(NULL);
  D25():
    deopt 86 [weights3];
  L38(r59):
    c13 = `as.logical`(r59);
    if c13 then L165() else L39();
  L157():
    weights4 = force? weights3;
    checkMissing(weights4);
    sym12 = ldf sum;
    base12 = ldf sum in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L158() else L159();
  L162():
    ylevels1 = ld ylevels;
    check L164() else D28();
  L163():
    r58 = dyn base13(<sym ylevels>);
    goto L38(r58);
  D28():
    deopt 96 [ylevels1];
  L37(weights7, r55):
    r57 = `/`(weights7, r55);
    goto L36(r57);
  L39():
    rev = ldf rev;
    check L169() else D31();
  L40(r63):
    st ylevels = r63;
    factor = ldf factor;
    check L171() else D33();
  L158():
    weights8 = ld weights;
    check L160() else D26();
  L159():
    r54 = dyn base12(<sym weights>);
    goto L37(weights4, r54);
  L164():
    ylevels2 = force? ylevels1;
    checkMissing(ylevels2);
    c12 = `==`(ylevels2, NULL);
    goto L38(c12);
  L165():
    nlevels = ldf nlevels;
    check L166() else D29();
  D26():
    deopt 89 [weights4, weights8];
  D29():
    deopt 100 [];
  D31():
    deopt 106 [];
  D33():
    deopt 111 [];
  L160():
    weights9 = force? weights8;
    checkMissing(weights9);
    sum = ldf sum in base;
    r56 = dyn sum(weights9);
    check L161() else D27();
  L166():
    p8 = prom<V +>{
      y9 = ld y;
      y10 = force? y9;
      checkMissing(y10);
      return y10;
    };
    r61 = dyn nlevels(p8);
    check L167() else D30();
  L169():
    p9 = prom<V +>{
      ylevels3 = ld ylevels;
      ylevels4 = force? ylevels3;
      checkMissing(ylevels4);
      return ylevels4;
    };
    r65 = dyn rev(p9);
    check L170() else D32();
  L171():
    p10 = prom<V +>{
      y11 = ld y;
      y12 = force? y11;
      checkMissing(y12);
      return y12;
    };
    p12 = prom<V +>{
      sym14 = ldf `is.numeric`;
      base14 = ldf `is.numeric` in base;
      guard14 = `==`.4(sym14, base14);
      if guard14 then L3() else L4();
    L0(r68):
      c14 = `as.logical`(r68);
      if c14 then L5() else L1();
    L3():
      ylevels5 = ld ylevels;
      ylevels6 = force? ylevels5;
      checkMissing(ylevels6);
      is_numeric = ldf `is.numeric` in base;
      r69 = dyn is_numeric(ylevels6);
      goto L0(r69);
    L4():
      r67 = dyn base14(<sym ylevels>);
      goto L0(r67);
    L1():
      ylevels9 = ld ylevels;
      ylevels10 = force? ylevels9;
      checkMissing(ylevels10);
      return ylevels10;
    L5():
      levels3 = ldf levels;
      p11 = prom<V +>{
        y13 = ld y;
        y14 = force? y13;
        checkMissing(y14);
        return y14;
      };
      r71 = dyn levels3(p11);
      c15 = `is.object`(r71);
      if c15 then L6() else L7(r71);
    L2(dx1):
      return dx1;
    L6():
      dr = tryDispatchBuiltin.1("[", r71);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L8() else L7(dr);
    L7(r73):
      ylevels7 = ld ylevels;
      ylevels8 = force? ylevels7;
      __ = ldf `[` in base;
      r74 = dyn __(r73, ylevels8);
      goto L2(r74);
    L8():
      dx = getTryDispatchBuiltinValue(dr);
      goto L2(dx);
    };
    r76 = dyn factor[, levels](p10, p12);
    check L172() else D34();
  D27():
    deopt 92 [weights4, r56];
  D30():
    deopt 102 [r61];
  D32():
    deopt 108 [r65];
  D34():
    deopt 115 [r76];
  L161():
    goto L37(weights4, r56);
  L167():
    r62 = `:`(r61, 1);
    goto L40(r62);
  L170():
    goto L40(r65);
  L172():
    st y = r76;
    yaxlabels3 = ld yaxlabels;
    check L173() else D35();
  D35():
    deopt 117 [yaxlabels3];
  L173():
    yaxlabels4 = force? yaxlabels3;
    checkMissing(yaxlabels4);
    c16 = `is.object`(yaxlabels4);
    if c16 then L174() else L175(yaxlabels4);
  L41(dx3):
    st yaxlabels = dx3;
    sym15 = ldf `is.null`;
    base15 = ldf `is.null` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L178() else L179();
  L174():
    dr2 = tryDispatchBuiltin.1("[", yaxlabels4);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L176() else L175(dr2);
  L175(yaxlabels6):
    ylevels11 = ld ylevels;
    check L177() else D36();
  D36():
    deopt 119 [yaxlabels6, ylevels11];
  L42(r79):
    c18 = `as.logical`(r79);
    if c18 then L181() else L43(c18);
  L176():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L41(dx2);
  L177():
    ylevels12 = force? ylevels11;
    __1 = ldf `[` in base;
    r77 = dyn __1(yaxlabels6, ylevels12);
    goto L41(r77);
  L178():
    from1 = ld from;
    check L180() else D37();
  L179():
    r78 = dyn base15(<sym from>);
    goto L42(r78);
  D37():
    deopt 124 [from1];
  L43(c20):
    c28 = `as.logical`(c20);
    if c28 then L186() else L45();
  L180():
    from2 = force? from1;
    checkMissing(from2);
    c17 = `==`(from2, NULL);
    goto L42(c17);
  L181():
    sym16 = ldf `is.null`;
    base16 = ldf `is.null` in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L182() else L183();
  L44(c23, r81):
    c25 = `as.logical`(r81);
    c26 = `&&`(c23, c25);
    goto L43(c26);
  L45():
    __3 = ldf `::`;
    check L191() else D42();
  L46(r89):
    st dx = r89;
    dx4 = ld dx;
    check L194() else D45();
  L182():
    to1 = ld to;
    check L184() else D38();
  L183():
    r80 = dyn base16(<sym to>);
    goto L44(c18, r80);
  L186():
    __2 = ldf `::`;
    check L187() else D39();
  D38():
    deopt 128 [c18, to1];
  D39():
    deopt 133 [];
  D42():
    deopt 148 [];
  D45():
    deopt 167 [dx4];
  L184():
    to2 = force? to1;
    checkMissing(to2);
    c24 = `==`(to2, NULL);
    goto L44(c18, c24);
  L187():
    r82 = dyn __2("stats", "density");
    check L188() else D40();
  L191():
    r90 = dyn __3("stats", "density");
    check L192() else D43();
  L194():
    dx5 = force? dx4;
    checkMissing(dx5);
    c29 = `is.object`(dx5);
    if c29 then L196() else L197(dx5);
  D40():
    deopt 136 [r82];
  D43():
    deopt 151 [r90];
  L188():
    checkFun.0(r82);
    r83 = r82 as cls;
    p13 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    p14 = prom<V +>{
      bw1 = ld bw;
      bw2 = force? bw1;
      checkMissing(bw2);
      return bw2;
    };
    p15 = prom<V +>{
      n1 = ld n;
      n2 = force? n1;
      checkMissing(n2);
      return n2;
    };
    p16 = prom<V +>{
      w = ld w;
      w1 = force? w;
      checkMissing(w1);
      return w1;
    };
    ddd1 = ld `...`;
    r88 = dyn r83[, bw, n, weights, `...`](p13, p14, p15, p16, ddd1);
    check L189() else D41();
  L192():
    checkFun.0(r90);
    r91 = r90 as cls;
    p17 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      return x8;
    };
    p18 = prom<V +>{
      bw3 = ld bw;
      bw4 = force? bw3;
      checkMissing(bw4);
      return bw4;
    };
    p19 = prom<V +>{
      from3 = ld from;
      from4 = force? from3;
      checkMissing(from4);
      return from4;
    };
    p20 = prom<V +>{
      to3 = ld to;
      to4 = force? to3;
      checkMissing(to4);
      return to4;
    };
    p21 = prom<V +>{
      n3 = ld n;
      n4 = force? n3;
      checkMissing(n4);
      return n4;
    };
    p22 = prom<V +>{
      w2 = ld w;
      w3 = force? w2;
      checkMissing(w3);
      return w3;
    };
    ddd2 = ld `...`;
    r98 = dyn r91[, bw, from, to, n, weights, `...`](p17, p18, p19, p20, p21, p22, ddd2);
    check L193() else D44();
  L195(dx9):
    st x1 = dx9;
    sym17 = ldf length;
    base17 = ldf length in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L199() else L200();
  L196():
    dr4 = tryDispatchBuiltin.1("$", dx5);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L198() else L197(dr4);
  L197(dx7):
    r99 = `$`(dx7, <sym x>);
    goto L195(r99);
  D41():
    deopt 146 [r88];
  D44():
    deopt 165 [r98];
  L47(r101):
    st ny = r101;
    sym18 = ldf `is.null`;
    base18 = ldf `is.null` in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L204() else L205();
  L189():
    goto L46(r88);
  L193():
    goto L46(r98);
  L198():
    dx8 = getTryDispatchBuiltinValue(dr4);
    goto L195(dx8);
  L199():
    levels4 = ldf levels;
    check L201() else D46();
  L200():
    r100 = dyn base17(<lang levels(y)>);
    goto L47(r100);
  D46():
    deopt 174 [];
  L48(r106):
    c31 = `as.logical`(r106);
    if c31 then L207() else L49();
  L201():
    p23 = prom<V +>{
      y15 = ld y;
      y16 = force? y15;
      checkMissing(y16);
      return y16;
    };
    r103 = dyn levels4(p23);
    check L202() else D47();
  L204():
    weights10 = ld weights;
    check L206() else D49();
  L205():
    r105 = dyn base18(<sym weights>);
    goto L48(r105);
  D47():
    deopt 176 [r103];
  D49():
    deopt 181 [weights10];
  L49():
    sym20 = ldf cumsum;
    base20 = ldf cumsum in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L214() else L215();
  L51():
    matrix = ldf matrix;
    check L226() else D58();
  L202():
    length2 = ldf length in base;
    r104 = dyn length2(r103);
    check L203() else D48();
  L206():
    weights11 = force? weights10;
    checkMissing(weights11);
    c30 = `==`(weights11, NULL);
    goto L48(c30);
  L207():
    sym19 = ldf cumsum;
    base19 = ldf cumsum in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L208() else L209();
  D48():
    deopt 178 [r104];
  D58():
    deopt 214 [];
  L50(r108):
    st yprop = r108;
    goto L51();
  L52(r116):
    st yprop = r116;
    l = ld yprop;
    c32 = `is.object`(l);
    if c32 then L219() else L220(0.0, l);
  L203():
    goto L47(r104);
  L208():
    proportions = ldf proportions;
    check L210() else D50();
  L209():
    r107 = dyn base19(<lang proportions(table(y))>);
    goto L50(r107);
  L214():
    proportions1 = ldf proportions;
    check L216() else D53();
  L215():
    r115 = dyn base20(<lang proportions(tapply(weights, y, FUN=sum, na.rm=TRUE))>);
    goto L52(r115);
  L226():
    p30 = prom<V +>{
      sym22 = ldf rep;
      base22 = ldf rep in base;
      guard22 = `==`.4(sym22, base22);
      if guard22 then L1() else L2();
    L0(r139):
      return r139;
    L1():
      rep = ldf rep in base;
      r140 = dyn rep(0.0, <lang `*`(n, `(`(`-`(ny, 1)))>);
      goto L0(r140);
    L2():
      r138 = dyn base22(0.0, <lang `*`(n, `(`(`-`(ny, 1)))>);
      goto L0(r138);
    };
    p31 = prom<V +>{
      ny = ld ny;
      ny1 = force? ny;
      checkMissing(ny1);
      r142 = `-`(ny1, 1);
      visible.0();
      return r142;
    };
    r144 = dyn matrix[, nrow](p30, p31);
    check L227() else D59();
  D50():
    deopt 187 [];
  D53():
    deopt 196 [];
  D59():
    deopt 218 [r144];
  L53(r127, dx11):
    st yprop = dx11;
    goto L51();
  L210():
    p25 = prom<V +>{
      table = ldf table;
      p24 = prom<V +>{
        y17 = ld y;
        y18 = force? y17;
        checkMissing(y18);
        return y18;
      };
      r110 = dyn table(p24);
      return r110;
    };
    r112 = dyn proportions(p25);
    check L211() else D51();
  L216():
    p29 = prom<V +>{
      tapply = ldf tapply;
      p26 = prom<V +>{
        weights12 = ld weights;
        weights13 = force? weights12;
        checkMissing(weights13);
        return weights13;
      };
      p27 = prom<V +>{
        y19 = ld y;
        y20 = force? y19;
        checkMissing(y20);
        return y20;
      };
      p28 = prom<V +>{
        sum1 = ld sum;
        sum2 = force? sum1;
        checkMissing(sum2);
        return sum2;
      };
      r120 = dyn tapply[, , FUN, `na.rm`](p26, p27, p28, TRUE);
      return r120;
    };
    r122 = dyn proportions1(p29);
    check L217() else D54();
  L219():
    dr6 = tryDispatchBuiltin.0("[<-", l, 0.0);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L221() else L220(0.0, dr6);
  L220(r125, l2):
    sym21 = ldf `is.na`;
    base21 = ldf `is.na` in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L222() else L223();
  L227():
    st y1 = r144;
    sym23 = ldf list;
    base23 = ldf list in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L228() else L229();
  D51():
    deopt 189 [r112];
  D54():
    deopt 198 [r122];
  L54(r133, l5, r134, r135):
    ___ = ldf `[<-` in base;
    r137 = dyn ___(l5, r134, r135);
    goto L53(r133, r137);
  L55(r146):
    st rval = r146;
    sym24 = ldf seq_len;
    base24 = ldf seq_len in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L231() else L232();
  L211():
    cumsum = ldf cumsum in base;
    r113 = dyn cumsum(r112);
    check L212() else D52();
  L217():
    cumsum1 = ldf cumsum in base;
    r123 = dyn cumsum1(r122);
    check L218() else D55();
  L221():
    dx10 = getTryDispatchBuiltinValue(dr6);
    goto L53(0.0, dx10);
  L222():
    yprop = ld yprop;
    check L224() else D56();
  L223():
    r132 = dyn base21(<sym yprop>);
    goto L54(r125, l2, 0.0, r132);
  L228():
    list = ldf list in base;
    r147 = dyn list();
    check L230() else D60();
  L229():
    r145 = dyn base23();
    goto L55(r145);
  D52():
    deopt 191 [r113];
  D55():
    deopt 200 [r123];
  D56():
    deopt 207 [r125, l2, 0.0, yprop];
  D60():
    deopt 223 [r147];
  L56(r149):
    s = toForSeq(r149);
    l6 = length(s);
    i = 0;
    goto L57(i);
  L212():
    goto L50(r113);
  L218():
    goto L52(r123);
  L224():
    yprop1 = force? yprop;
    checkMissing(yprop1);
    is_na = ldf `is.na` in base;
    r136 = dyn is_na(yprop1);
    check L225() else D57();
  L230():
    goto L55(r147);
  L231():
    ny2 = ld ny;
    check L233() else D61();
  L232():
    r148 = dyn base24(<lang `-`(ny, 1)>);
    goto L56(r148);
  D57():
    deopt 210 [r125, l2, 0.0, r136];
  D61():
    deopt 226 [ny2];
  L57(i1):
    i2 = `+`.1(i1, 1);
    c33 = `<`.1(l6, i2);
    if c33 then L234() else L67();
  L225():
    goto L54(r125, l2, 0.0, r136);
  L233():
    ny3 = force? ny2;
    checkMissing(ny3);
    r150 = `-`(ny3, 1);
    r151 = seq_len(r150);
    goto L56(r151);
  L67():
    x9 = `[[`(s, i2, NULL, TRUE);
    st i = x9;
    _in_ = ldf `%in%`;
    check L235() else D62();
  L234():
    levels6 = ldf levels;
    check L284() else D82();
  D62():
    deopt 232 [i2];
  D82():
    deopt 316 [];
  L235():
    p32 = prom<V +>{
      y21 = ld y;
      y22 = force? y21;
      checkMissing(y22);
      return y22;
    };
    p34 = prom<V +>{
      levels5 = ldf levels;
      p33 = prom<V +>{
        y23 = ld y;
        y24 = force? y23;
        checkMissing(y24);
        return y24;
      };
      r154 = dyn levels5(p33);
      c34 = `is.object`(r154);
      if c34 then L2() else L3(r154);
    L0(dx13):
      return dx13;
    L2():
      dr8 = tryDispatchBuiltin.1("[", r154);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L4() else L3(dr8);
    L3(r156):
      sym25 = ldf seq_len;
      base25 = ldf seq_len in base;
      guard25 = `==`.4(sym25, base25);
      if guard25 then L5() else L6();
    L1(r160, r161):
      __4 = ldf `[` in base;
      r163 = dyn __4(r160, r161);
      goto L0(r163);
    L4():
      dx12 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx12);
    L5():
      i5 = ld i;
      i6 = force? i5;
      checkMissing(i6);
      r162 = seq_len(i6);
      goto L1(r156, r162);
    L6():
      r159 = dyn base25(<sym i>);
      goto L1(r156, r159);
    };
    r165 = dyn _in_(p32, p34);
    check L236() else D63();
  L284():
    p43 = prom<V +>{
      y29 = ld y;
      y30 = force? y29;
      checkMissing(y30);
      return y30;
    };
    r220 = dyn levels6(p43);
    check L285() else D83();
  D63():
    deopt 235 [i2, r165];
  D83():
    deopt 318 [r220];
  L236():
    st yi = r165;
    sym26 = ldf `is.null`;
    base26 = ldf `is.null` in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L237() else L238();
  L285():
    c49 = `is.object`(r220);
    if c49 then L286() else L287(r220);
  L58(i9, r167):
    c36 = `as.logical`(r167);
    if c36 then L240() else L59();
  L68(dx66):
    l13 = ld rval;
    names__ = ldf `names<-`;
    check L292() else D85();
  L237():
    weights14 = ld weights;
    check L239() else D64();
  L238():
    r166 = dyn base26(<sym weights>);
    goto L58(i2, r166);
  L286():
    dr34 = tryDispatchBuiltin.1("[", r220);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L288() else L287(dr34);
  L287(r222):
    sym30 = ldf seq_len;
    base30 = ldf seq_len in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L289() else L290();
  D64():
    deopt 238 [i2, weights14];
  D85():
    deopt 327 [dx66, l13, dx66];
  L59():
    weights16 = ld weights;
    check L242() else D65();
  L60(i12, r168):
    st wi = r168;
    __7 = ldf `::`;
    check L255() else D70();
  L69(r226, r227):
    __12 = ldf `[` in base;
    r230 = dyn __12(r226, r227);
    goto L68(r230);
  L239():
    weights15 = force? weights14;
    checkMissing(weights15);
    c35 = `==`(weights15, NULL);
    goto L58(i2, c35);
  L240():
    goto L60(i9, NULL);
  L288():
    dx65 = getTryDispatchBuiltinValue(dr34);
    goto L68(dx65);
  L289():
    ny4 = ld ny;
    check L291() else D84();
  L290():
    r225 = dyn base30(<lang `-`(ny, 1)>);
    goto L69(r222, r225);
  L292():
    r231 = dyn names__(l13, NULL, dx66);
    check L293() else D86();
  D65():
    deopt 243 [i9, weights16];
  D70():
    deopt 259 [i12];
  D84():
    deopt 320 [r222, ny4];
  D86():
    deopt 329 [dx66, r231];
  L242():
    weights17 = force? weights16;
    checkMissing(weights17);
    c37 = `is.object`(weights17);
    if c37 then L243() else L244(i9, weights17);
  L255():
    r175 = dyn __7("stats", "density");
    check L256() else D71();
  L291():
    ny5 = force? ny4;
    checkMissing(ny5);
    r228 = `-`(ny5, 1);
    r229 = seq_len(r228);
    goto L69(r222, r229);
  L293():
    st rval = r231;
    rbind = ldf rbind;
    check L294() else D87();
  D71():
    deopt 262 [i12, r175];
  D87():
    deopt 332 [];
  L61(i16, dx15):
    sym27 = ldf sum;
    base27 = ldf sum in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L247() else L248();
  L243():
    dr10 = tryDispatchBuiltin.1("[", weights17);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L245() else L244(i9, dr10);
  L244(i14, weights19):
    yi = ld yi;
    check L246() else D66();
  L256():
    checkFun.0(r175);
    r176 = r175 as cls;
    p35 = prom<V +>{
      x10 = ld x;
      x11 = force? x10;
      checkMissing(x11);
      c39 = `is.object`(x11);
      if c39 then L1() else L2(x11);
    L0(dx26):
      return dx26;
    L1():
      dr14 = tryDispatchBuiltin.1("[", x11);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2(dr14);
    L2(x13):
      yi4 = ld yi;
      yi5 = force? yi4;
      __8 = ldf `[` in base;
      r177 = dyn __8(x13, yi5);
      goto L0(r177);
    L3():
      dx25 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx25);
    };
    p36 = prom<V +>{
      dx27 = ld dx;
      dx28 = force? dx27;
      checkMissing(dx28);
      c40 = `is.object`(dx28);
      if c40 then L1() else L2(dx28);
    L0(dx32):
      return dx32;
    L1():
      dr16 = tryDispatchBuiltin.1("$", dx28);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2(dr16);
    L2(dx30):
      r179 = `$`(dx30, <sym bw>);
      goto L0(r179);
    L3():
      dx31 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx31);
    };
    p37 = prom<V +>{
      n5 = ld n;
      n6 = force? n5;
      checkMissing(n6);
      return n6;
    };
    p38 = prom<V +>{
      sym28 = ldf min;
      base28 = ldf min in base;
      guard28 = `==`.4(sym28, base28);
      if guard28 then L1() else L2();
    L0(r183):
      return r183;
    L1():
      dx33 = ld dx;
      dx34 = force? dx33;
      checkMissing(dx34);
      c41 = `is.object`(dx34);
      if c41 then L4() else L5(dx34);
    L2():
      r182 = dyn base28(<lang `$`(dx, x)>);
      goto L0(r182);
    L3(dx38):
      min = ldf min in base;
      r185 = dyn min(dx38);
      goto L0(r185);
    L4():
      dr18 = tryDispatchBuiltin.1("$", dx34);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L6() else L5(dr18);
    L5(dx36):
      r184 = `$`(dx36, <sym x>);
      goto L3(r184);
    L6():
      dx37 = getTryDispatchBuiltinValue(dr18);
      goto L3(dx37);
    };
    p39 = prom<V +>{
      sym29 = ldf max;
      base29 = ldf max in base;
      guard29 = `==`.4(sym29, base29);
      if guard29 then L1() else L2();
    L0(r188):
      return r188;
    L1():
      dx39 = ld dx;
      dx40 = force? dx39;
      checkMissing(dx40);
      c42 = `is.object`(dx40);
      if c42 then L4() else L5(dx40);
    L2():
      r187 = dyn base29(<lang `$`(dx, x)>);
      goto L0(r187);
    L3(dx44):
      max = ldf max in base;
      r190 = dyn max(dx44);
      goto L0(r190);
    L4():
      dr20 = tryDispatchBuiltin.1("$", dx40);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L6() else L5(dr20);
    L5(dx42):
      r189 = `$`(dx42, <sym x>);
      goto L3(r189);
    L6():
      dx43 = getTryDispatchBuiltinValue(dr20);
      goto L3(dx43);
    };
    p40 = prom<V +>{
      wi = ld wi;
      wi1 = force? wi;
      checkMissing(wi1);
      return wi1;
    };
    ddd3 = ld `...`;
    r193 = dyn r176[, bw, n, from, to, weights, `...`](p35, p36, p37, p38, p39, p40, ddd3);
    check L257() else D72();
  L294():
    p44 = prom<V +>{
      y31 = ld y1;
      y32 = force? y31;
      checkMissing(y32);
      return y32;
    };
    r233 = dyn rbind(0.0, p44, 1.0);
    check L295() else D88();
  D66():
    deopt 245 [i14, weights19, yi];
  D72():
    deopt 276 [i12, r193];
  D88():
    deopt 336 [r233];
  L62(i19, dx18, r171):
    r174 = `/`(dx18, r171);
    goto L60(i19, r174);
  L245():
    dx14 = getTryDispatchBuiltinValue(dr10);
    goto L61(i9, dx14);
  L246():
    yi1 = force? yi;
    __5 = ldf `[` in base;
    r169 = dyn __5(weights19, yi1);
    goto L61(i14, r169);
  L247():
    weights20 = ld weights;
    check L249() else D67();
  L248():
    r170 = dyn base27(<lang `[`(weights, yi)>);
    goto L62(i16, dx15, r170);
  L257():
    st dxi = r193;
    dxi = ld dxi;
    check L258() else D73();
  L295():
    st y1 = r233;
    y33 = ld y1;
    check L296() else D89();
  D67():
    deopt 249 [i16, dx15, weights20];
  D73():
    deopt 278 [i12, dxi];
  D89():
    deopt 338 [y33];
  L249():
    weights21 = force? weights20;
    checkMissing(weights21);
    c38 = `is.object`(weights21);
    if c38 then L250() else L251(i16, dx15, weights21);
  L258():
    dxi1 = force? dxi;
    checkMissing(dxi1);
    c43 = `is.object`(dxi1);
    if c43 then L260() else L261(i12, dxi1);
  L296():
    y34 = force? y33;
    checkMissing(y34);
    c50 = `is.object`(y34);
    if c50 then L297() else L298(y34);
  L63(i23, dx23, dx24):
    sum3 = ldf sum in base;
    r173 = dyn sum3(dx24);
    check L254() else D69();
  L70(dx68):
    st y1 = dx68;
    x30 = ld x1;
    check L302() else D92();
  L250():
    dr12 = tryDispatchBuiltin.1("[", weights21);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L252() else L251(i16, dx15, dr12);
  L251(i21, dx20, weights23):
    yi2 = ld yi;
    check L253() else D68();
  L259(i27, dx46):
    dx47 = ld dx;
    check L263() else D74();
  L260():
    dr22 = tryDispatchBuiltin.1("$", dxi1);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L262() else L261(i12, dr22);
  L261(i25, dxi3):
    r194 = `$`(dxi3, <sym y>);
    goto L259(i25, r194);
  L297():
    dr36 = tryDispatchBuiltin.1("[", y34);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L299() else L298(dr36);
  L298(y36):
    which = ldf which;
    check L300() else D90();
  D68():
    deopt 251 [i21, dx20, weights23, yi2];
  D69():
    deopt 255 [i23, dx23, r173];
  D74():
    deopt 280 [i27, dx46, dx47];
  D90():
    deopt 342 [y36];
  D92():
    deopt 348 [x30];
  L252():
    dx22 = getTryDispatchBuiltinValue(dr12);
    goto L63(i16, dx15, dx22);
  L253():
    yi3 = force? yi2;
    __6 = ldf `[` in base;
    r172 = dyn __6(weights23, yi3);
    goto L63(i21, dx20, r172);
  L254():
    goto L62(i23, dx23, r173);
  L262():
    dx45 = getTryDispatchBuiltinValue(dr22);
    goto L259(i12, dx45);
  L263():
    dx48 = force? dx47;
    checkMissing(dx48);
    c44 = `is.object`(dx48);
    if c44 then L265() else L266(i27, dx46, dx48);
  L299():
    dx67 = getTryDispatchBuiltinValue(dr36);
    goto L70(dx67);
  L300():
    p45 = prom<V +>{
      x16 = ld x1;
      x17 = force? x16;
      checkMissing(x17);
      sym31 = ldf min;
      base31 = ldf min in base;
      guard31 = `==`.4(sym31, base31);
      if guard31 then L2() else L3();
    L0(x20, r235):
      r237 = `>=`(x20, r235);
      x23 = ld x1;
      x24 = force? x23;
      checkMissing(x24);
      sym32 = ldf max;
      base32 = ldf max in base;
      guard32 = `==`.4(sym32, base32);
      if guard32 then L4() else L5();
    L2():
      x21 = ld x;
      x22 = force? x21;
      checkMissing(x22);
      min1 = ldf min in base;
      r236 = dyn min1(x22);
      goto L0(x17, r236);
    L3():
      r234 = dyn base31(<sym x>);
      goto L0(x17, r234);
    L1(r241, x27, r242):
      r244 = `<=`(x27, r242);
      r245 = `&&`(r241, r244);
      return r245;
    L4():
      x28 = ld x;
      x29 = force? x28;
      checkMissing(x29);
      max1 = ldf max in base;
      r243 = dyn max1(x29);
      goto L1(r237, x24, r243);
    L5():
      r240 = dyn base32(<sym x>);
      goto L1(r237, x24, r240);
    };
    r247 = dyn which(p45);
    check L301() else D91();
  L302():
    x31 = force? x30;
    checkMissing(x31);
    c51 = `is.object`(x31);
    if c51 then L303() else L304(x31);
  D91():
    deopt 344 [y36, r247];
  L71(dx70):
    st x1 = dx70;
    sym35 = ldf `is.null`;
    base35 = ldf `is.null` in base;
    guard35 = `==`.4(sym35, base35);
    if guard35 then L316() else L317();
  L264(i31, dx55, dx56):
    r196 = `/`(dx55, dx56);
    yprop2 = ld yprop;
    check L268() else D75();
  L265():
    dr24 = tryDispatchBuiltin.1("$", dx48);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L267() else L266(i27, dx46, dr24);
  L266(i29, dx51, dx52):
    r195 = `$`(dx52, <sym y>);
    goto L264(i29, dx51, r195);
  L301():
    __13 = ldf `[` in base;
    r248 = dyn __13(y34, <missing>, r247);
    goto L70(r248);
  L303():
    dr38 = tryDispatchBuiltin.1("[", x31);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L305() else L304(dr38);
  L304(x33):
    x34 = ld x1;
    check L306() else D93();
  D75():
    deopt 283 [i31, r196, yprop2];
  D93():
    deopt 350 [x33, x34];
  L74(r263):
    c53 = `as.logical`(r263);
    if c53 then L319() else L75();
  L267():
    dx54 = getTryDispatchBuiltinValue(dr24);
    goto L264(i27, dx46, dx54);
  L268():
    yprop3 = force? yprop2;
    checkMissing(yprop3);
    c45 = `is.object`(yprop3);
    if c45 then L269() else L270(i31, r196, yprop3);
  L305():
    dx69 = getTryDispatchBuiltinValue(dr38);
    goto L71(dx69);
  L306():
    x35 = force? x34;
    checkMissing(x35);
    sym33 = ldf min;
    base33 = ldf min in base;
    guard33 = `==`.4(sym33, base33);
    if guard33 then L307() else L308();
  L316():
    xlim1 = ld xlim;
    check L318() else D99();
  L317():
    r262 = dyn base35(<sym xlim>);
    goto L74(r262);
  D99():
    deopt 369 [xlim1];
  L64(i35, r200, dx58):
    r202 = `*`(r200, dx58);
    l7 = ld y1;
    c46 = `is.object`(l7);
    if c46 then L273() else L274(i35, r202, l7);
  L72(x40, x41, r250):
    r252 = `>=`(x41, r250);
    x44 = ld x1;
    check L311() else D96();
  L75():
    goto L77();
  L77():
    sym37 = ldf any;
    base37 = ldf any in base;
    guard37 = `==`.4(sym37, base37);
    if guard37 then L325() else L326();
  L269():
    dr26 = tryDispatchBuiltin.1("[", yprop3);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L271() else L270(i31, r196, dr26);
  L270(i33, r198, yprop5):
    i36 = ld i;
    check L272() else D76();
  L307():
    x42 = ld x;
    check L309() else D94();
  L308():
    r249 = dyn base33(<sym x>);
    goto L72(x33, x35, r249);
  L318():
    xlim2 = force? xlim1;
    checkMissing(xlim2);
    c52 = `==`(xlim2, NULL);
    goto L74(c52);
  L319():
    sym36 = ldf range;
    base36 = ldf range in base;
    guard36 = `==`.4(sym36, base36);
    if guard36 then L320() else L321();
  D76():
    deopt 285 [i33, r198, yprop5, i36];
  D94():
    deopt 353 [x33, x35, x42];
  D96():
    deopt 357 [x40, r252, x44];
  L65(i41, dx60):
    st y1 = dx60;
    __10 = ldf `::`;
    check L277() else D78();
  L76(r265):
    st xlim = r265;
    goto L77();
  L78(r269):
    c54 = `as.logical`(r269);
    if c54 then L79(c54) else L329();
  L271():
    dx57 = getTryDispatchBuiltinValue(dr26);
    goto L64(i31, r196, dx57);
  L272():
    i37 = force? i36;
    __9 = ldf `[` in base;
    r201 = dyn __9(yprop5, i37);
    goto L64(i33, r198, r201);
  L273():
    dr28 = tryDispatchBuiltin.0("[<-", l7, r202);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L275() else L274(i35, r202, dr28);
  L274(i39, r204, l9):
    i42 = ld i;
    check L276() else D77();
  L309():
    x43 = force? x42;
    checkMissing(x43);
    min2 = ldf min in base;
    r251 = dyn min2(x43);
    check L310() else D95();
  L311():
    x45 = force? x44;
    checkMissing(x45);
    sym34 = ldf max;
    base34 = ldf max in base;
    guard34 = `==`.4(sym34, base34);
    if guard34 then L312() else L313();
  L320():
    x54 = ld x1;
    check L322() else D100();
  L321():
    r264 = dyn base36(<sym x1>);
    goto L76(r264);
  L325():
    ylim1 = ld ylim;
    check L327() else D102();
  L326():
    r268 = dyn base37(<lang `<`(ylim, 0.0)>);
    goto L78(r268);
  D77():
    deopt 290 [i39, r204, l9, r202, i42];
  D78():
    deopt 297 [i41];
  D95():
    deopt 356 [x33, x35, r251];
  D100():
    deopt 374 [x54];
  D102():
    deopt 383 [ylim1];
  L73(x50, r256, x51, r257):
    r259 = `<=`(x51, r257);
    r260 = `&&`(r256, r259);
    __14 = ldf `[` in base;
    r261 = dyn __14(x50, r260);
    goto L71(r261);
  L79(c55):
    c63 = `as.logical`(c55);
    if c63 then L335() else L81();
  L275():
    dx59 = getTryDispatchBuiltinValue(dr28);
    goto L65(i35, dx59);
  L276():
    i43 = force? i42;
    ___1 = ldf `[<-` in base;
    r207 = dyn ___1(l7, i43, <missing>, r202);
    goto L65(i39, r207);
  L277():
    r208 = dyn __10("stats", "approxfun");
    check L278() else D79();
  L310():
    goto L72(x33, x35, r251);
  L312():
    x52 = ld x;
    check L314() else D97();
  L313():
    r255 = dyn base34(<sym x>);
    goto L73(x40, r252, x45, r255);
  L322():
    x55 = force? x54;
    checkMissing(x55);
    range = ldf range in base;
    r266 = dyn range(x55);
    check L323() else D101();
  L327():
    ylim2 = force? ylim1;
    checkMissing(ylim2);
    r270 = `<`(ylim2, 0.0);
    any = ldf any in base;
    r271 = dyn any(r270);
    check L328() else D103();
  L329():
    sym38 = ldf any;
    base38 = ldf any in base;
    guard38 = `==`.4(sym38, base38);
    if guard38 then L330() else L331();
  D79():
    deopt 300 [i41, r208];
  D97():
    deopt 360 [x40, r252, x45, x52];
  D101():
    deopt 377 [r266];
  D103():
    deopt 388 [r271];
  L80(c59, r273):
    c60 = `as.logical`(r273);
    c61 = `||`(c59, c60);
    goto L79(c61);
  L81():
    goto L93();
  L93():
    plot1 = ld plot;
    check L371() else D120();
  L278():
    checkFun.0(r208);
    r209 = r208 as cls;
    p41 = prom<V +>{
      x14 = ld x1;
      x15 = force? x14;
      checkMissing(x15);
      return x15;
    };
    p42 = prom<V +>{
      y25 = ld y1;
      y26 = force? y25;
      checkMissing(y26);
      c47 = `is.object`(y26);
      if c47 then L1() else L2();
    L0(dx62):
      return dx62;
    L1():
      dr30 = tryDispatchBuiltin.1("[", y26);
      dc15 = getTryDispatchBuiltinDispatched(dr30);
      if dc15 then L3() else L2();
    L2():
      i44 = ld i;
      i45 = force? i44;
      __11 = ldf `[` in base;
      r211 = dyn __11(y26, i45, <missing>);
      goto L0(r211);
    L3():
      dx61 = getTryDispatchBuiltinValue(dr30);
      goto L0(dx61);
    };
    r213 = dyn r209[, , rule](p41, p42, 2.0);
    check L279() else D80();
  L314():
    x53 = force? x52;
    checkMissing(x53);
    max2 = ldf max in base;
    r258 = dyn max2(x53);
    check L315() else D98();
  L323():
    goto L76(r266);
  L328():
    goto L78(r271);
  L330():
    ylim3 = ld ylim;
    check L332() else D104();
  L331():
    r272 = dyn base38(<lang `>`(ylim, 1.0)>);
    goto L80(c54, r272);
  L335():
    warning = ldf warning;
    check L336() else D106();
  D80():
    deopt 306 [i41, r213];
  D98():
    deopt 363 [x40, r252, x45, r258];
  D104():
    deopt 391 [c54, ylim3];
  D106():
    deopt 399 [];
  D120():
    deopt 455 [plot1];
  L279():
    l10 = ld rval;
    c48 = `is.object`(l10);
    if c48 then L280() else L281(i41, r213, l10);
  L315():
    goto L73(x40, r252, x45, r258);
  L332():
    ylim4 = force? ylim3;
    checkMissing(ylim4);
    r274 = `>`(ylim4, 1.0);
    any1 = ldf any in base;
    r275 = dyn any1(r274);
    check L333() else D105();
  L336():
    r276 = dyn warning("y axis is on a cumulative probability scale, 'ylim' must be in [0,1]");
    check L337() else D107();
  L371():
    plot2 = force? plot1;
    checkMissing(plot2);
    c76 = `as.logical`(plot2);
    if c76 then L372() else L94();
  D105():
    deopt 396 [c54, r275];
  D107():
    deopt 401 [r276];
  L66(i49, dx64):
    st rval = dx64;
    goto L57(i49);
  L94():
    goto L102();
  L102():
    sym53 = ldf invisible;
    base53 = ldf invisible in base;
    guard53 = `==`.4(sym53, base53);
    if guard53 then L406() else L407();
  L280():
    dr32 = tryDispatchBuiltin.0("[[<-", l10, r213);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L282() else L281(i41, r213, dr32);
  L281(i47, r215, l12):
    i50 = ld i;
    check L283() else D81();
  L333():
    goto L80(c54, r275);
  L337():
    sym39 = ldf min;
    base39 = ldf min in base;
    guard39 = `==`.4(sym39, base39);
    if guard39 then L338() else L339();
  L372():
    dev_hold = ldf `dev.hold`;
    check L373() else D121();
  D81():
    deopt 308 [i47, r215, l12, r213, i50];
  D121():
    deopt 458 [];
  L82(r278):
    r280 = `>`(r278, 1.0);
    c64 = `as.logical`(r280);
    if c64 then L83(c64) else L342();
  L103(r376):
    popenv;
    return r376;
  L282():
    dx63 = getTryDispatchBuiltinValue(dr32);
    goto L66(i41, dx63);
  L283():
    i51 = force? i50;
    ____ = ldf `[[<-` in base;
    r218 = dyn ____(l12, r213, i51);
    goto L66(i47, r218);
  L338():
    ylim5 = ld ylim;
    check L340() else D108();
  L339():
    r277 = dyn base39(<sym ylim>);
    goto L82(r277);
  L373():
    r305 = dyn dev_hold();
    check L374() else D122();
  L406():
    rval = ld rval;
    check L408() else D144();
  L407():
    r375 = dyn base53(<sym rval>);
    goto L103(r375);
  D108():
    deopt 404 [ylim5];
  D122():
    deopt 459 [r305];
  D144():
    deopt 556 [rval];
  L83(c65):
    c73 = `as.logical`(c65);
    if c73 then L348() else L85();
  L340():
    ylim6 = force? ylim5;
    checkMissing(ylim6);
    min3 = ldf min in base;
    r279 = dyn min3(ylim6);
    check L341() else D109();
  L342():
    sym40 = ldf max;
    base40 = ldf max in base;
    guard40 = `==`.4(sym40, base40);
    if guard40 then L343() else L344();
  L374():
    sym47 = ldf `on.exit`;
    base47 = ldf `on.exit` in base;
    guard47 = `==`.4(sym47, base47);
    if guard47 then L375() else L376();
  L408():
    rval1 = force? rval;
    checkMissing(rval1);
    invisible = ldf invisible in base;
    r377 = dyn invisible(rval1);
    check L409() else D145();
  D109():
    deopt 407 [r279];
  D145():
    deopt 559 [r377];
  L84(c69, r282):
    r284 = `<`(r282, 0.0);
    c70 = `as.logical`(r284);
    c71 = `||`(c69, c70);
    goto L83(c71);
  L85():
    sym42 = ldf c;
    base42 = ldf c in base;
    guard42 = `==`.4(sym42, base42);
    if guard42 then L353() else L354();
  L87(r288):
    goto L93();
  L95():
    plot3 = ldf plot;
    check L377() else D123();
  L341():
    goto L82(r279);
  L343():
    ylim7 = ld ylim;
    check L345() else D110();
  L344():
    r281 = dyn base40(<sym ylim>);
    goto L84(c64, r281);
  L348():
    sym41 = ldf c;
    base41 = ldf c in base;
    guard41 = `==`.4(sym41, base41);
    if guard41 then L349() else L350();
  L375():
    on_exit = ldf `on.exit` in base;
    r308 = dyn on_exit(<lang dev.flush()>);
    goto L95();
  L376():
    r306 = dyn base47(<lang dev.flush()>);
    goto L95();
  L409():
    goto L103(r377);
  D110():
    deopt 412 [c64, ylim7];
  D123():
    deopt 464 [];
  L86(r286):
    st ylim = r286;
    goto L87(r286);
  L88(r290):
    st ylim = r290;
    goto L87(r290);
  L345():
    ylim8 = force? ylim7;
    checkMissing(ylim8);
    max3 = ldf max in base;
    r283 = dyn max3(ylim8);
    check L346() else D111();
  L349():
    c74 = ldf c in base;
    r287 = dyn c74(0.0, 1.0);
    check L351() else D112();
  L350():
    r285 = dyn base41(0.0, 1.0);
    goto L86(r285);
  L353():
    sym43 = ldf max;
    base43 = ldf max in base;
    guard43 = `==`.4(sym43, base43);
    if guard43 then L355() else L356();
  L354():
    r289 = dyn base42(<lang max(min(ylim), 0.0)>, <lang min(max(ylim), 1.0)>);
    goto L88(r289);
  L377():
    p46 = prom<V +>{
      xlim3 = ld xlim;
      xlim4 = force? xlim3;
      checkMissing(xlim4);
      return xlim4;
    };
    p47 = prom<V +>{
      ylim13 = ld ylim;
      ylim14 = force? ylim13;
      checkMissing(ylim14);
      return ylim14;
    };
    p48 = prom<V +>{
      xlab3 = ld xlab;
      xlab4 = force? xlab3;
      checkMissing(xlab4);
      return xlab4;
    };
    p49 = prom<V +>{
      ylab3 = ld ylab;
      ylab4 = force? ylab3;
      checkMissing(ylab4);
      return ylab4;
    };
    p50 = prom<V +>{
      main1 = ld main;
      main2 = force? main1;
      checkMissing(main2);
      return main2;
    };
    r314 = dyn plot3[, , xlim, ylim, type, axes, xaxs, yaxs, xlab, ylab, main](0.0, 0.0, p46, p47, "n", FALSE, "i", "i", p48, p49, p50);
    check L378() else D124();
  D111():
    deopt 415 [c64, r283];
  D112():
    deopt 424 [r287];
  D124():
    deopt 485 [r314];
  L89(r292):
    sym45 = ldf min;
    base45 = ldf min in base;
    guard45 = `==`.4(sym45, base45);
    if guard45 then L362() else L363();
  L346():
    goto L84(c64, r283);
  L351():
    goto L86(r287);
  L355():
    sym44 = ldf min;
    base44 = ldf min in base;
    guard44 = `==`.4(sym44, base44);
    if guard44 then L357() else L358();
  L356():
    r291 = dyn base43(<lang min(ylim)>, 0.0);
    goto L89(r291);
  L378():
    sym48 = ldf seq_len;
    base48 = ldf seq_len in base;
    guard48 = `==`.4(sym48, base48);
    if guard48 then L379() else L380();
  L90(r294):
    max4 = ldf max in base;
    r296 = dyn max4(r294, 0.0);
    check L361() else D115();
  L91(r298):
    c75 = ldf c in base;
    r303 = dyn c75(r292, r298);
    check L369() else D119();
  L96(r316):
    s1 = toForSeq(r316);
    l14 = length(s1);
    i52 = 0;
    goto L97(i52);
  L357():
    ylim9 = ld ylim;
    check L359() else D113();
  L358():
    r293 = dyn base44(<sym ylim>);
    goto L90(r293);
  L362():
    sym46 = ldf max;
    base46 = ldf max in base;
    guard46 = `==`.4(sym46, base46);
    if guard46 then L364() else L365();
  L363():
    r297 = dyn base45(<lang max(ylim)>, 1.0);
    goto L91(r297);
  L379():
    NROW = ldf NROW;
    check L381() else D125();
  L380():
    r315 = dyn base48(<lang `-`(NROW(y1), 1)>);
    goto L96(r315);
  D113():
    deopt 432 [ylim9];
  D115():
    deopt 438 [r296];
  D119():
    deopt 451 [r303];
  D125():
    deopt 488 [];
  L92(r300):
    min5 = ldf min in base;
    r302 = dyn min5(r300, 1.0);
    check L368() else D118();
  L97(i53):
    i54 = `+`.1(i53, 1);
    c77 = `<`.1(l14, i54);
    if c77 then L383() else L98();
  L359():
    ylim10 = force? ylim9;
    checkMissing(ylim10);
    min4 = ldf min in base;
    r295 = dyn min4(ylim10);
    check L360() else D114();
  L361():
    goto L89(r296);
  L364():
    ylim11 = ld ylim;
    check L366() else D116();
  L365():
    r299 = dyn base46(<sym ylim>);
    goto L92(r299);
  L369():
    goto L88(r303);
  L381():
    p51 = prom<V +>{
      y37 = ld y1;
      y38 = force? y37;
      checkMissing(y38);
      return y38;
    };
    r318 = dyn NROW(p51);
    check L382() else D126();
  D114():
    deopt 435 [r295];
  D116():
    deopt 443 [ylim11];
  D118():
    deopt 449 [r302];
  D126():
    deopt 490 [r318];
  L98():
    x56 = `[[`(s1, i54, NULL, TRUE);
    st i = x56;
    polygon = ldf polygon;
    check L384() else D127();
  L360():
    goto L90(r295);
  L366():
    ylim12 = force? ylim11;
    checkMissing(ylim12);
    max5 = ldf max in base;
    r301 = dyn max5(ylim12);
    check L367() else D117();
  L368():
    goto L91(r302);
  L382():
    r319 = `-`(r318, 1);
    r320 = seq_len(r319);
    goto L96(r320);
  L383():
    Axis = ldf Axis;
    check L386() else D129();
  D117():
    deopt 446 [r301];
  D127():
    deopt 495 [i54];
  D129():
    deopt 507 [];
  L367():
    goto L92(r301);
  L384():
    p53 = prom<V +>{
      sym49 = ldf c;
      base49 = ldf c in base;
      guard49 = `==`.4(sym49, base49);
      if guard49 then L1() else L2();
    L0(r322):
      return r322;
    L1():
      x57 = ld x1;
      x58 = force? x57;
      checkMissing(x58);
      rev1 = ldf rev;
      p52 = prom<V +>{
        x59 = ld x1;
        x60 = force? x59;
        checkMissing(x60);
        return x60;
      };
      r324 = dyn rev1(p52);
      c78 = ldf c in base;
      r325 = dyn c78(x58, r324);
      goto L0(r325);
    L2():
      r321 = dyn base49(<sym x1>, <lang rev(x1)>);
      goto L0(r321);
    };
    p55 = prom<V +>{
      sym50 = ldf c;
      base50 = ldf c in base;
      guard50 = `==`.4(sym50, base50);
      if guard50 then L2() else L3();
    L0(r328):
      return r328;
    L2():
      y39 = ld y1;
      y40 = force? y39;
      checkMissing(y40);
      c79 = `is.object`(y40);
      if c79 then L4() else L5();
    L3():
      r327 = dyn base50(<lang `[`(y1, `+`(i, 1.0), )>, <lang rev(`[`(y1, i, ))>);
      goto L0(r327);
    L1(dx72):
      rev2 = ldf rev;
      p54 = prom<V +>{
        y43 = ld y1;
        y44 = force? y43;
        checkMissing(y44);
        c80 = `is.object`(y44);
        if c80 then L1() else L2();
      L0(dx74):
        return dx74;
      L1():
        dr42 = tryDispatchBuiltin.1("[", y44);
        dc21 = getTryDispatchBuiltinDispatched(dr42);
        if dc21 then L3() else L2();
      L2():
        i59 = ld i;
        i60 = force? i59;
        __16 = ldf `[` in base;
        r331 = dyn __16(y44, i60, <missing>);
        goto L0(r331);
      L3():
        dx73 = getTryDispatchBuiltinValue(dr42);
        goto L0(dx73);
      };
      r333 = dyn rev2(p54);
      c81 = ldf c in base;
      r334 = dyn c81(dx72, r333);
      goto L0(r334);
    L4():
      dr40 = tryDispatchBuiltin.1("[", y40);
      dc20 = getTryDispatchBuiltinDispatched(dr40);
      if dc20 then L6() else L5();
    L5():
      i57 = ld i;
      i58 = force? i57;
      checkMissing(i58);
      r329 = `+`(i58, 1.0);
      __15 = ldf `[` in base;
      r330 = dyn __15(y40, r329, <missing>);
      goto L1(r330);
    L6():
      dx71 = getTryDispatchBuiltinValue(dr40);
      goto L1(dx71);
    };
    p56 = prom<V +>{
      col5 = ld col;
      col6 = force? col5;
      checkMissing(col6);
      c82 = `is.object`(col6);
      if c82 then L1() else L2(col6);
    L0(dx76):
      return dx76;
    L1():
      dr44 = tryDispatchBuiltin.1("[", col6);
      dc22 = getTryDispatchBuiltinDispatched(dr44);
      if dc22 then L3() else L2(dr44);
    L2(col8):
      i61 = ld i;
      i62 = force? i61;
      __17 = ldf `[` in base;
      r336 = dyn __17(col8, i62);
      goto L0(r336);
    L3():
      dx75 = getTryDispatchBuiltinValue(dr44);
      goto L0(dx75);
    };
    p57 = prom<V +>{
      border1 = ld border;
      border2 = force? border1;
      checkMissing(border2);
      return border2;
    };
    r339 = dyn polygon[, , col, border](p53, p55, p56, p57);
    check L385() else D128();
  L386():
    p58 = prom<V +>{
      xorig = ld xorig;
      xorig1 = force? xorig;
      checkMissing(xorig1);
      return xorig1;
    };
    r341 = dyn Axis[, side](p58, 1.0);
    check L387() else D130();
  D128():
    deopt 502 [i54, r339];
  D130():
    deopt 511 [r341];
  L385():
    goto L97(i54);
  L387():
    sym51 = ldf any;
    base51 = ldf any in base;
    guard51 = `==`.4(sym51, base51);
    if guard51 then L388() else L389();
  L99(r343):
    st equidist = r343;
    equidist = ld equidist;
    check L394() else D135();
  L388():
    diff = ldf diff;
    check L390() else D131();
  L389():
    r342 = dyn base51(<lang `<`(diff(`[`(y1, , 1)), tol.ylab)>);
    goto L99(r342);
  D131():
    deopt 515 [];
  D135():
    deopt 523 [equidist];
  L390():
    p59 = prom<V +>{
      y47 = ld y1;
      y48 = force? y47;
      checkMissing(y48);
      c83 = `is.object`(y48);
      if c83 then L1() else L2();
    L0(dx78):
      return dx78;
    L1():
      dr46 = tryDispatchBuiltin.1("[", y48);
      dc23 = getTryDispatchBuiltinDispatched(dr46);
      if dc23 then L3() else L2();
    L2():
      __18 = ldf `[` in base;
      r344 = dyn __18(y48, <missing>, 1);
      goto L0(r344);
    L3():
      dx77 = getTryDispatchBuiltinValue(dr46);
      goto L0(dx77);
    };
    r346 = dyn diff(p59);
    check L391() else D132();
  L394():
    equidist1 = force? equidist;
    checkMissing(equidist1);
    c84 = `as.logical`(equidist1);
    if c84 then L395() else L100();
  D132():
    deopt 517 [r346];
  L100():
    axis1 = ldf axis;
    check L399() else D138();
  L101():
    axis2 = ldf axis;
    check L401() else D140();
  L391():
    tol_ylab1 = ld `tol.ylab`;
    check L392() else D133();
  L395():
    axis = ldf axis;
    check L396() else D136();
  D133():
    deopt 517 [r346, tol_ylab1];
  D136():
    deopt 526 [];
  D138():
    deopt 536 [];
  D140():
    deopt 546 [];
  L392():
    tol_ylab2 = force? tol_ylab1;
    checkMissing(tol_ylab2);
    r347 = `<`(r346, tol_ylab2);
    any2 = ldf any in base;
    r348 = dyn any2(r347);
    check L393() else D134();
  L396():
    p60 = prom<V +>{
      sym52 = ldf `seq.int`;
      base52 = ldf `seq.int` in base;
      guard52 = `==`.4(sym52, base52);
      if guard52 then L1() else L2();
    L0(r350):
      return r350;
    L1():
      ny6 = ld ny;
      ny7 = force? ny6;
      checkMissing(ny7);
      r351 = `*`(2.0, ny7);
      r352 = `/`(1.0, r351);
      ny8 = ld ny;
      ny9 = force? ny8;
      checkMissing(ny9);
      r353 = `*`(2.0, ny9);
      r354 = `/`(1.0, r353);
      r355 = `-`(1.0, r354);
      ny10 = ld ny;
      ny11 = force? ny10;
      checkMissing(ny11);
      r356 = `/`(1.0, ny11);
      seq_int = ldf `seq.int` in base;
      r357 = dyn seq_int(r352, r355, r356);
      goto L0(r357);
    L2():
      r349 = dyn base52[, , by](<lang `/`(1.0, `(`(`*`(2.0, ny)))>, <lang `-`(1.0, `/`(1.0, `(`(`*`(2.0, ny))))>, <lang `/`(1.0, ny)>);
      goto L0(r349);
    };
    p61 = prom<V +>{
      yaxlabels7 = ld yaxlabels;
      yaxlabels8 = force? yaxlabels7;
      checkMissing(yaxlabels8);
      return yaxlabels8;
    };
    r360 = dyn axis[, at, labels, tick](2.0, p60, p61, FALSE);
    check L397() else D137();
  L399():
    p63 = prom<V +>{
      y51 = ld y1;
      y52 = force? y51;
      checkMissing(y52);
      c85 = `is.object`(y52);
      if c85 then L2() else L3(y52);
    L0(dx80):
      y55 = ld y1;
      y56 = force? y55;
      checkMissing(y56);
      c86 = `is.object`(y56);
      if c86 then L5() else L6(dx80, y56);
    L2():
      dr48 = tryDispatchBuiltin.1("[", y52);
      dc24 = getTryDispatchBuiltinDispatched(dr48);
      if dc24 then L4() else L3(dr48);
    L3(y54):
      __19 = ldf `[` in base;
      r362 = dyn __19(y54, -1, 1);
      goto L0(r362);
    L1(dx85, dx86):
      r367 = `+`(dx85, dx86);
      r368 = `/`(r367, 2.0);
      return r368;
    L4():
      dx79 = getTryDispatchBuiltinValue(dr48);
      goto L0(dx79);
    L5():
      dr50 = tryDispatchBuiltin.1("[", y56);
      dc25 = getTryDispatchBuiltinDispatched(dr50);
      if dc25 then L7() else L6(dx80, dr50);
    L6(dx82, y58):
      NROW1 = ldf NROW;
      p62 = prom<V +>{
        y59 = ld y1;
        y60 = force? y59;
        checkMissing(y60);
        return y60;
      };
      r364 = dyn NROW1(p62);
      r365 = `-`(<missing>, r364);
      __20 = ldf `[` in base;
      r366 = dyn __20(y58, r365, 1);
      goto L1(dx82, r366);
    L7():
      dx84 = getTryDispatchBuiltinValue(dr50);
      goto L1(dx80, dx84);
    };
    p64 = prom<V +>{
      yaxlabels9 = ld yaxlabels;
      yaxlabels10 = force? yaxlabels9;
      checkMissing(yaxlabels10);
      return yaxlabels10;
    };
    r371 = dyn axis1[, at, labels, tick](2.0, p63, p64, FALSE);
    check L400() else D139();
  L401():
    r372 = dyn axis2(4.0);
    check L402() else D141();
  D134():
    deopt 521 [r348];
  D137():
    deopt 534 [r360];
  D139():
    deopt 544 [r371];
  D141():
    deopt 548 [r372];
  L393():
    goto L99(r348);
  L397():
    goto L101();
  L400():
    goto L101();
  L402():
    box = ldf box;
    check L403() else D142();
  D142():
    deopt 550 [];
  L403():
    r373 = dyn box();
    check L404() else D143();
  D143():
    deopt 551 [r373];
  L404():
    goto L102();
  }
}