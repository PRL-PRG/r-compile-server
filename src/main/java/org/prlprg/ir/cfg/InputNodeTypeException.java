package org.prlprg.ir.cfg;

/** Thrown when an instruction's output type updates that is an input to another instruction, and
 * the updated output type is no longer a subtype of the input's required type.
 */
public class InputNodeTypeException extends RuntimeException {
  InputNodeTypeException(InstrOutput<?> output, Class<?> requiredInputType) {
    super("Required " + requiredInputType.getSimpleName() + ", got " + output.type().getSimpleName() + ":\nOutput = " + output);
  }
}
