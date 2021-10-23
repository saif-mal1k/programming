
We put code for which we are interested in handling exceptions into a try-block. The attempted assignment
to v[v.size()] will fail. Therefore, the catch-clause providing a handler for exceptions of type out_of_range
will be entered. The out_of_range type is defined in the standard library (in <stdexcept>) and is in fact used
by some standard-library container access functions.
