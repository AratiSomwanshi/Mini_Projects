using System;
using System.Collections.Generic;

using WebApplication10.Models;
namespace WebApplication10.Models;
public partial class AdminRole
{
    public int AdminRoleId { get; set; }

    public int AdminId { get; set; }

    public int RoleId { get; set; }

    public virtual Admin Admin { get; set; } = null!;

    public virtual Role Role { get; set; } = null!;
}
