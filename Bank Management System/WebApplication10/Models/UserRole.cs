using System;
using System.Collections.Generic;

using WebApplication10.Models;
namespace WebApplication10.Models;
public partial class UserRole
{
    public int UserRoleId { get; set; }

    public int UserId { get; set; }

    public int RoleId { get; set; }

    public virtual Role Role { get; set; } = null!;
}
